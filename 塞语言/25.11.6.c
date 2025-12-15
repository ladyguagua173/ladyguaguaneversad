#include<stdio.h>
int main(){
	int num,g,s,b;
	scanf("%d",&num);
	printf("t=%d\n",num);
	g=num%10;
	s=num/10%10;
	b=num/100;
	if(g<7&&s%3==0&&b*b>20){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
