#include<stdio.h>
#include<memory.h>
#include<stdint.h>
#include<stdlib.h>

int main(){
	int32_t n=10,i,j,t,m, a[n];
	
	for(i=n-1;i+1;i--)printf("%d ",a[i]=rand());puts("");

	for(i=n-1;i+1;i--){
		for(j=t=i; j+1; j--)if(a[t]>a[j])t=j;
		j=t; t=a[i], a[i]=a[j], a[j]=t;
	}

	for(i=n-1;i+1;i--)printf("%d ",a[i]);
}
