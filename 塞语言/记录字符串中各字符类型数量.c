#include<stdio.h>
#include<string.h>
int main(){
	int s,i,num=0,kg=0,zm=0,other=0;
	char put[100];
	fgets(put,sizeof(put),stdin);
	s=strlen(put);
	for(i=0;i<s;i++){
		put[i];
		if(put[i]>='0'&&put[i]<='9'){
			num+=1;
		}
		if((put[i]>='a'&&put[i]<='z')||(put[i]>='A'&&put[i]<='Z')){
			zm+=1;
		}
		if(put[i]==' '){
			kg+=1;
		}
		else{
			other++;
		}
	}
	printf("num:%d,zm:%d,kg:%d,other:%d",num,zm,kg,other);
	return 0;
}
