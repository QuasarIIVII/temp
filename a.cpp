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

void q(int64_t*a,int64_t n){
	int64_t i=0,j=n-1,p=a[i+j>>1], t;
	while(i<=j){
		while(a[i++]<p); while(p<a[j--]);
		if(i<=j)t=a[i],a[i]=a[j],a[j]=t, i++,j--;
	}
	if(0<j)		q(a,j-1);
	if(i<n-1)	q(a+i,n-i+1);
}

void _q(int64_t*a,int64_t l, int64_t r){
	int64_t i=l, j=r, p=a[l+r>>1], t;
	while(i<=j){
		while(a[i++]<p);
		while(a[j--]>p);
		if(i<=j){t=a[i],a[i]=a[j],a[j]=t; i++,j--;}
	}

	if(l<j)_q(a,l,j);
	if(i<r)_q(a,i,r);
}

int main(){
	//int64_t i,n=randl()&0xFFFF;
	int64_t i,n=randl()&0xF;
	int64_t a[n];
	for(i=n-1;i+1;i--)a[i]=randl()&0xFF;
	for(i=0;i<n;i++)printf("%lld ",a[i]);puts("");
	q(a,n);
	_q(a,0,n-1);
	for(i=0;i<n;i++)printf("%lld ",a[i]);
}
