#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#include<string.h>
int main(){
	uint8_t*plain,*enc;
	uint64_t sz, key, i, j;
	char path[65536];
	FILE*fin,*fout;
	
	printf("Enter the plain file path");
	getline(path, 65536);
	fin=fopen(path, "rb");
	scanf("%llx",&key);
	scanf("%lld",&sz);
	sz+=16;
	plain=(uint8_t*)malloc(sz);
	enc=(uint8_t*)malloc(sz);
	if(plain==NULL)printf("You tried to fuck the memory up");

	for(j=7;j+1;j--){
		plain[j]=(uint8_t)(sz>>(j<<3)&0xff);
	}

	fread(plain, 1, sz-16, fin);
	for(i=0;i<sz-8;i++){
		for(j=7;j+1;j--){
			enc[i+j]=plain[i+j]^(uint8_t)(key>>(j<<3)&0xff);
		}
	}

	strcat(path, ".lock");
	fout=fopen(path, "wb");
	fwrite(enc, sizeof(uint8_t), sz-8, fout);
	
	free(plain);
	free(enc);
}
