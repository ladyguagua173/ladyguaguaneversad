#include<stdio.h>
void inputArr(int n,int arr[]){
	int i;
	for(i=0;i<n;i++){
		printf("请输入第%d个元素：\n",i+1); 
		scanf("%d",&arr[i]);
	}
	printf("数组内容为：");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main(){
	int n,i;
	printf("数组1：\n请输入数组长度：");
	scanf("%d",&n);
	int arr1[n];
	inputArr(n,arr1);
	int arr2[n];
	printf("数组2：\n");
	inputArr(n,arr2);
	printf("相加后：\n");
	for(i=0;i<n;i++){
		printf("%d ",arr1[i]+arr2[i]);
	}
	return 0;
	}
