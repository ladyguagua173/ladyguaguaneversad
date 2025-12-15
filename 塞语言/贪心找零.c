#include<stdio.h>
void findMinCoins(int amount){
	int i,j,totalCount;
	int coins[]={100,50,20,10,5,1}; 
	int coinCount[6]={0};
	int totalCoins=0;
	printf("找零%d元\n",amount);
	for(i=0;i<6;i++){
		if(amount>coins[i]){
			coinCount[i]=amount/coins[i];
			amount=amount%coins[i];
			totalCount+=coinCount[i];	
		}
	}
	for(j=0;j<6;j++){
		if(coinCount[j]>0)
		printf("%d元硬币有%d枚\n",coins[j],coinCount[j]);
	}
	printf("一共要找零%d枚硬币\n",totalCount); 
}
int main(){
	int amount;
	printf("请输入要找零的金额：");
	scanf("%d",&amount);
	findMinCoins(amount);
	return 0;
}
