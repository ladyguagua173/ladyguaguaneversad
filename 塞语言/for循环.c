#include<stdio.h>
int main(){
	int i,j,fm;
	float term,s=1.0,fz;
	printf("1");
	for(i=0;i<50;i++){
		fz=3+2*i;
		fm=2+2*i;
		term=fz/fm;
		s+=term;
		printf("+%.0f/\%d",fz,fm);
	}
	printf("=%.3f",s);
	return 0;
}


