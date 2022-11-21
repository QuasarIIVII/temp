#include<stdio.h>
#include<memory.h>
#include<stdint.h>
#include<stdlib.h>
#include<math.h>

#ifdef WIN32
#include<time.h>
#else
#include<sys/time.h>
#endif

int64_t randl(){
	static unsigned int a;
	struct timeval tv;
#ifdef WIN32
	mingw_gettimeofday(&tv,NULL);
#else
	gettimeofday(&tv,NULL);
#endif
	srand((long long)tv.tv_sec*1000000+tv.tv_usec+a&0xFFFFFFFF);
	return	(a=rand())*RAND_MAX+
	rand()*RAND_MAX*RAND_MAX+
	rand()*RAND_MAX*RAND_MAX*RAND_MAX+
	rand()*RAND_MAX*RAND_MAX*RAND_MAX*RAND_MAX;
}

int f(int*a, int n, int k){
	__asm__("#Test");
	__asm__("\n\
	");
}

int main(){
	int64_t a[10]={0,1,2,3,4,5,6,7,8,9};
	int64_t s=0,e=10, m, key=0, c=0;

	scanf("%lld",&key);

	for(;e-s>0;c++){
		if(a[m=s+e>>1]==key)break;
		if(a[m]>key)e=m;
		else s=m+1;
	}
	if(e-s<1)puts("Failed");
	else printf("%lld %lld",m,c+1);
}
