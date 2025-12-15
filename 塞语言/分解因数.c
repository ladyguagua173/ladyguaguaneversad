#include<stdio.h>
int main(){
	printf("输入自己的号数:");
	int num,j,i,first;
	scanf("%d",&num);
	j=num,first=1;
	printf("正整数分解质因数：%d=",num); 
	for(i=2;i<=num;i++){
		while(j%i==0){
		if(first==0){
			printf("*");
		}
		j/=i;
		printf("%d",i);
		first=0;
		} 
	}
	return 0;
}
