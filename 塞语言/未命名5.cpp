#include<stdio.h>
int main(){
	int i,bw,sw,gw;
	for(i=200;i<=300;i++){
		bw=i/100;
		sw=i/10%10;
		gw=i%10;
		if(bw+sw+gw==12&&bw*sw*gw==42){
			printf("%d  ",i);
		}
	}
	return 0;
}
