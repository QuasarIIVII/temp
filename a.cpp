#include<stdio.h>
#include<cstdint>
int main(){
	int32_t a;
	scanf("%d",&a);
	for(int32_t i=2;a>1;i++)while(!(a%i)){printf("%d ",i);a/=i;}
}

