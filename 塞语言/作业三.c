#include<stdio.h>
int main(){
	int i,j,arr[5],term;
	printf("输入一个数就enter一下，共四个数\n");
	printf("a,b,c,d:\n"); 
	for(i=0;i<4;i++){
	scanf("%d",&arr[i]);
	}
	printf("这四个数字分别是(第一个数字是自己的号数)："); 
	for(i=0;i<4;i++){
	printf("%d ",arr[i]); 
	}
	for(i=0;i<4;i++){
		for(j=i+1;j<4;j++){
		if(arr[i]>arr[i+1]){
			term=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=term; 
			}
		}
	}
	printf("从小到大排序为："); 
	for(i=0;i<4;i++){
	printf("%d ",arr[i]); 
	}
	return 0;
}
