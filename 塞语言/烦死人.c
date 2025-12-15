#include<stdio.h>
int main(){
    int N,T;
    printf("输入N和T\n");
    scanf("%d %d",&N,&T);
    int wor[N];
    int mv[N][2],j,v,i,m,temp,vsum=0,msum=0,a,b;
    for(i=0;i<N;i++){
    	printf("输入m和v\n");
         scanf("%d %d",&m,&v);
         mv[i][0]=m;
         mv[i][1]=v;
         wor[i]=v/m;
    }
    for(a=0;a<N;a++){
    	if(wor[a]<wor[a+1]){
        	temp=wor[a+1];
        	wor[a+1]=wor[a];
        	wor[a]=temp;
  	  	}
	}
    for(b=0;b<N;b++){
    	if(mv[b][0]<mv[b+1][0]){
        	temp=mv[b+1][0];
        	mv[b+1][0]=mv[b][0];
        	mv[b][0]=temp;
   			}
		}
    for(j=0;j<N;j++){
        if(T-mv[j][0]>=0){
            T-=mv[j][0];
            vsum+=mv[j][1];
            msum+=mv[j][0];
        }
    }
    if(T>msum)vsum+=wor[j]*(T-msum);
        printf("%d",vsum);
    return 0;    
}
