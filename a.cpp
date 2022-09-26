#include<stdio.h>

using namespace std;
int in[1000002];
int dt[1000002][3];
unsigned int C[31251][3];
#define cSet(p,d) (C[(p)>>5][d]|=1<<((p)&0x1f))
#define cGet(p,d) ((C[(p)>>5][d]>>((p)&0x1f))&1)

int h,w,n;
int calc(int p,char d){
	if(cGet(p,d+1))return dt[p][d+1];
	
	int t=p%w, a,b,c;
	if(d){
		b= p+w<n ? calc(p+w,0) : 0x80000000;
		if(d==1) a= t+1!=w ? calc(p+1,1) : 0x80000000;
		else a= t ? calc(p-1,-1) : 0x80000000;
		
		dt[p][d+1]=(a>b?a:b);
		if(dt[p][d+1]!=0x80000000){
			dt[p][d+1]+=in[p];
			cSet(p,d+1);
		}
	}else{
		c= p+w<n ? calc(p+w,0) : 0x80000000;
		a= t+1!=w ? calc(p+1,1) : 0x80000000;
		b= t ? calc(p-1,-1) : 0x80000000;
		
		dt[p][d+1]=(a>b? (a>c?a:c) : (b>c?b:c));
		if(dt[p][d+1]!=0x80000000){
			dt[p][d+1]+=in[p];
			cSet(p,d+1);
		}
	}
	return dt[p][d+1];
}
int main(){
	int i,k;
	
	scanf("%d%d",&h,&w);
	n=h*w;
	for(i=0;i<n;i++)scanf("%d",&in[i]);
	dt[n-1][0]=dt[n-1][1]=dt[n-1][2]=in[n-1];
	cSet(n-1,0);cSet(n-1,1);cSet(n-1,2);
	printf("%d",calc(0,1));
	return 0;
}
