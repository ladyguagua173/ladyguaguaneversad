#include<stdio.h>
int main(){
    int a,n;
    scanf("%d %d",&a,&n);
    
    long long result = 0;
    long long term = 0;
    for(int i=0;i<n;i++){
        term = term * 10 + a;
        result += term;
    }
    printf("%lld\n", result);
    return 0;
}
