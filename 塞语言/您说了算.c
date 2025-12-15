#include<stdio.h>
void rapid_go(int robbery){
	printf("您希望抽屉里有几种钱？\n");
	int n,i,j,k,temp,a;
	scanf("%d",&n);
	int amount_each[n];
	int each_count[n];
	int total_count=0;
	for(i=0;i<n;i++){
		printf("冒昧问一下第%d种钱多少面额？\n",i+1);
		scanf("%d",&amount_each[i]);
		each_count[i]=0;
	}
	for(j=0;j<n-1;j++){
		for(k=0;k<n-j-1;k++){
			if(amount_each[k]<amount_each[k+1]){
				temp=amount_each[k];
				amount_each[k]=amount_each[k+1];
				amount_each[k+1]=temp;
			}
		} 
	}
	int remaining=robbery;
	for(a=0;a<n;a++){
		if(remaining>=amount_each[a]){
			each_count[a]=remaining/amount_each[a];
			remaining%=amount_each[a];
			total_count+=each_count[a];
		}
		if(each_count[a]>0){
			printf("面额为%d的钞票需要给您%d张\n",amount_each[a],each_count[a]);
		}	
	}
	if(remaining>0){
		printf("还剩%d元无法找零\n",remaining);
	}
	printf("一共用了%d张钞票\n",total_count); 
}
int main(){
	int robbery;
	printf("您好这里是您说了算银行！为了节省时间，我们会用最少张的钞票满足您的需求。请问您想要抢多少钱？\n"); 
	scanf("%d",&robbery);
	rapid_go(robbery);
	return 0;
	}
