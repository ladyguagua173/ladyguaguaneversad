#include<stdio.h>
int main(){
	int flower,i,gw,sw,bw;
	for(i=100;i<1000;i++){
		gw=i%10;
		sw=i%100/10;
		bw=i/100;
		flower=gw*gw*gw+bw*bw*bw+sw*sw*sw;
		if(i==flower)printf("%d ",i);
	}
}
