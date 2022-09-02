#include<stdio.h>
#include<stdint.h>
int main(){
	int32_t a,b,i;
	scanf("%d%d",&a,&b);
	for(i=a<b?a:b;i;i--)if(!(a%i || b%i))printf("%d ",i);
}

