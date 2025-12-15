#include<stdio.h>
int main(){
	int i,j,k=0,temp,sum=0,over[3];
	for(j=2;j<=1000;j++){
		temp=j;
		for(i=2;i<=j;i++){
			while(temp%i==0){
				temp/=i;
				sum+=i;
				while(sum==j){
					scanf("%d",over[k]);
					k++;
				}
			}	
		}
		for(i=2;i<=j;i++){
			while(temp%i==0){
				temp/=i;
				sum+=i;
				for(k=1;k<3;k++){
					printf("%d是完数，因子：",over[k]);
					if(sum==j)printf("%d",temp);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
