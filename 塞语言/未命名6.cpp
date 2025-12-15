#include<stdio.h>
int main(){
	int i,j,s=0;
	for(i=101;i<=200;i++){
		for(j=2;j<=i-1;j++){
			if(i%j==0){
				break;
			}
			if(j==i-1){
				printf("%d ",i);
				s++;
			}
		}
	}
	printf("\n%d¸öËØÊý",s);
	return 0;
}
