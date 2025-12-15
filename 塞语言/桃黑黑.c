#include<stdio.h>
int main(){
	int i,thh=1;
	printf("第10天的桃子数:1\n");
	for(i=1;i<=9;i++){
		thh=(thh+1)*2;
		printf("第%d天的桃子数:%d",10-i,thh);
		printf("\n");
	}
	printf("总的桃子数为%d",thh);
	return 0; 
}
