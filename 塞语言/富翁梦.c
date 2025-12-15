#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool check_dream(char *dream){
	int i; 
		char *hmd[]={"富翁","发财","暴富","万","钱",0};
		for(i=0;hmd[i]!=0;i++){
			if(strstr(dream,hmd[i])!=0){
				return 1;
			}
		}
		return 0;
	}
int main(){
	char dream[100]; 
	printf("请告诉我你的梦想：");
	scanf("%99s",dream);
	if(check_dream(dream)){
		printf("洗洗睡吧，梦里什么都有！"); 
	}
	else{
		printf("听起来靠谱多了，我祝你成功吧！");
	} 
	return 0;
}
