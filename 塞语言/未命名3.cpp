#include<stdio.h>
int main(){
	int i,term=2,sum=2;
	for(i=0;i<9;i++){
		term=2*term+3;
		sum=sum+term;
	}
	printf("%d",sum);
}
