#include<stdio.h>

int main(){
    int i,n,min_index=0,max_index=0,term;
    printf("请输入数组元素的个数：");
    scanf("%d",&n);
    int arr[n];
    printf("请输入%d个不同的整数：",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>arr[max_index])
        max_index=i;
    }
    for(i=0;i<n;i++){
        if(arr[i]<arr[min_index])
        min_index=i;
    }
    term=arr[n-1];
    arr[n-1]=arr[max_index];
    arr[max_index]=term;
    term=arr[0];
    arr[0]=arr[min_index];
    arr[min_index]=term;
    for(i=0;i<n;i++){
    	printf("%d ",arr[i]);
	}
    return 0;
}
