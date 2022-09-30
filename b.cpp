#include<stdio.h>

typedef struct _TD{int x,y,z;}TD;
//format:arr[x][y][z]

int rx[]={0,1,0,-1,0,0},ry[]={1,0,-1,0,0,0},rz[]={0,0,0,0,1,-1};//r:relative
int f(TD p){
	static TD;
	for(i=5;i+1;i--){
		ex.x=p.x+rx[i]
		ex.y=p.y+ry[i]
		ex.z=p.z+rz[i]
	}
}

int main(){
	while(1){
	ST:
	int arr[33][33][33]={0,}, fx[27003]={0,}, fy[27003]={0,},fz[27003]={0,};
	
	TD sz,ex,S,E;//sz:size 	ex:extend	S:start	E:end
	int f,s;
	int i,j,k;
	char ch;
	
	
	scanf("%d%d%d",&sz.z,&sz.y,&sz.x);
	if(!sz.z && !sz.y && !sz.x)return 0;
	
	for(k=1;k<=sz.z;k++){
		for(j=1;j<=sz.y;j++){
			for(i=1;i<=sz.x;i++){
				do{ch=getchar();}while(ch!='.'&&ch!='#'&&ch!='S'&&ch!='E');
				switch(ch){
					case '.':
						arr[i][j][k]=0;
						break;
					case '#':
						arr[i][j][k]=0x80000000;
						break;
					case 'S':
						arr[fx[1]=i][fy[1]=j][fz[1]=k]=0x80000000;
						break;
					default:	//'E'
						arr[i][j][k]=0;
						E.x=i,E.y=j,E.z=k;
						break;
				}
			}
		}
	}
	
	
	f=s=1;
	
	for(;f<=s;f++){
		for(i=0;i<6;i++){
			ex.x=fx[f]+rx[i], ex.y=fy[f]+ry[i], ex.z=fz[f]+rz[i];
			if(0<ex.x&&ex.x<=sz.x && 0<ex.y&&ex.y<=sz.y && 0<ex.z&&ex.z<=sz.z  &&  !arr[ex.x][ex.y][ex.z]){
				s++; arr[fx[s]=ex.x][fy[s]=ex.y][fz[s]=ex.z] = arr[fx[f]][fy[f]][fz[f]]+1;
			}
			if(ex.x==E.x&&ex.y==E.y&&ex.z==E.z){
				printf("Escaped in %d minute(s).\n",arr[E.x][E.y][E.z]&0x7FFFFFFF);
				goto ST;
			}
		}
	}
	if(arr[E.x][E.y][E.z]&0x7FFFFFFF)printf("Escaped in %d minute(s).\n",arr[E.x][E.y][E.z]&0x7FFFFFFF);
	else puts("Trapped!\n");
	
	}
}
