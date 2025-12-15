#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int id;
	int time;
}Person;

int compare(const void *a,const void *b){
	Person *p1=(Person *)a;
	Person *p2=(Person *)b;
	if(p1->time==p2->time)
	return p1->id-p2->id;
	return p1->time-p2->time;
}
int main(){
	int n,i,j,k;
	printf("几个人要喝水?\n"); 
	scanf("%d",&n); 
	Person *people=(Person *)malloc(n*sizeof(Person));
	for(j=0;j<n;j++){
		printf("第%d位同学接几秒的水啊？",j+1); 
		scanf("%d",&people[j].time);
		people[j].id=j+1;
	}
	qsort(people,n,sizeof(Person),compare);
	printf("\n接水顺序排好咯：");
	for(i=0;i<n;i++){
		printf("%d ",people[i].id);
	}
	printf("\n");
	long total_wait_time=0,current_wait_time=0;
	for(k=0;k<n;k++){
		current_wait_time+=people[k].time;
		total_wait_time+=current_wait_time;
	}
	double average=(double)total_wait_time/n;
	printf("经过时间管理大师的分析，每个人公平分配后喝水平均只需等待%.2f秒，太酷辣！",average);
	free(people);
	return 0;
}
