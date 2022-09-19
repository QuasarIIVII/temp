#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#include<string.h>
int main(){
	int64_t ä,ã,ó,ò,ô;
	scanf("%lld",&ä);
	struct{int64_t à, á;} â[ä+1];
	for(ã=ä-1;ã+1;ã--)scanf("%lld%lld",&â[ã].à, &â[ã].á);
	scanf("%lld%lld",&â[ä].à,&â[ä].á);
	
	for(ó=0x7fffffffffffffffLL,ò=0,ã=ä-1;ã+1;ã--){
		ô=(â[ä].à-â[ã].à)*(â[ä].à-â[ã].à)+(â[ä].á-â[ã].á)*(â[ä].á-â[ã].á);
		if(ô<ó)ó=ô, ò=ã;
	}
	printf("%lld %lld",â[ò].à,â[ò].á);
}
