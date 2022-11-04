#include<stdio.h>
#include<memory.h>

typedef struct _TD{int x,y,z;}TD;
//format:arr[x][y][z]
TD sz, E;
int rx[]={0,1,0,-1,0,0},ry[]={1,0,-1,0,0,0},rz[]={0,0,0,0,1,-1};//r:relative
int arr[33][33][33]={0,};
int f(TD p){
	static TD ex;
	int si=0, i;
	TD s[6];
	for(i=5;i+1;i--){
		ex.x=p.x+rx[i];
		ex.y=p.y+ry[i];
		ex.z=p.z+rz[i];
		if(0<ex.x&&ex.x<=sz.x && 0<ex.y&&ex.y<=sz.y && 0<ex.z&&ex.z<=sz.z  &&  !arr[ex.x][ex.y][ex.z]){
			arr[s[si].x=ex.x][s[si].y=ex.y][s[si].z=ex.z] = arr[p.x][p.y][p.z]+1;
			si++;
		}
		if(ex.x==E.x&&ex.y==E.y&&ex.z==E.z){
			//printf("%d\n",arr[E.x][E.y][E.z]&0x7FFFFFFF);
			printf("Escaped in %d minute(s).\n",arr[E.x][E.y][E.z]&0x7FFFFFFF);
			return 1;
		}
	}
	for(si--;si+1;si--)if(f(s[si]))return 1;
	return 0;
}

int main(){
	while(1){
	ST:
	
	TD S;//sz:size 	ex:extend	S:start	E:end
	TD s;
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
						arr[s.x=i][s.y=j][s.z=k]=0x80000000;
						break;
					default:	//'E'
						arr[i][j][k]=0;
						E.x=i,E.y=j,E.z=k;
						break;
				}
			}
		}
	}
	
	//if(!f(s))putchar(48);
	if(!f(s))puts("Trapped!\n");
	memset(arr,0,sizeof(arr));
	//printf("Escaped in %d minute(s).\n",arr[E.x][E.y][E.z]&0x7FFFFFFF);
	//else puts("Trapped!\n");
	}
}
