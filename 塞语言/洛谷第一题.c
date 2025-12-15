#include<stdio.h>
int main(){
    int N,T;
    printf("输入N和T\n");
    scanf("%d %d",&N,&T);
    int wor[N];
    int mv[N][2],j,v,i,m,temp,vsum=0,msum=0;
    printf("输入N行m和v\n");
    for(i=0;i<N;i++){
         scanf("%d %d",&m,&v);
         mv[i][0]=m;
         mv[i][1]=v;
         wor[i]=v/m;
    }
    i=0;
    while(wor[i]<wor[i+1]){
        temp=wor[i+1];
        wor[i+1]=wor[i];
        wor[i]=temp;
    }
    i=0;
    while(mv[i][0]<mv[i+1][0]){
        temp=mv[i+1][0];
        mv[i+1][0]=mv[i][0];
        mv[i][0]=temp;
    }
    for(j=1;j<=N;j++){
        while(T-mv[j][0]>=0){
            T-=mv[j][0];
            vsum+=mv[j][1];
            msum+=mv[j][0];
        }
    }
    if(T>msum)vsum+=wor[j]*(T-msum);
        printf("%d",vsum);
    return 0;    
}
