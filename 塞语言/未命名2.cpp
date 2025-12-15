#include<stdio.h>
int zs(int i){
	int j;
	for(j=2;j<=i-1;j++){
		if(i%j==0){
			break;
		}
	}
	if(j==i){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	printf("%d",zs(21));
	return 0;
}
