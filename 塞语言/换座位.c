#include<stdio.h>
void maxExchangeWithLast(int arr[],int n){
	int max_index=0,i,temp;
	for(i=0;i<n;i++){
		if(arr[i]>arr[max_index]){
			max_index=i;
		}
	}
	if(max_index!=n-1){
		temp=arr[n-1];
		arr[n-1]=arr[max_index];
		arr[max_index]=temp;
	}
}
void minExchangeWithFirst(int arr[],int n){
	int min_index=0,j,temp2;
	for(j=0;j<n;j++){
		if(arr[j]<arr[min_index]){
			min_index=j;
		}
	}
	if(min_index!=0){
		temp2=arr[n-1];
		arr[n-1]=arr[min_index];
		arr[min_index]=temp2;
	}
}
int main() {
	int arr[10]={2,1,3,4,5,6,7,8,10,9};
	int i,max,min,max_index;
	int n=sizeof(arr)/sizeof(arr[0]);
	maxExchangeWithLast(arr,n);
	printf("原数组:"); 
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	maxExchangeWithLast(arr,n);
	minExchangeWithFirst(arr,n);
	printf("新数组:");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
