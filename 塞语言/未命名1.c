#include<stdio.h>
#define pi 3.14
int main(){
float r,h,l,s,sq,sv,sz;
printf("请输入圆半径r(用自己的号数),圆柱高h：\n");
scanf("%f,%f",&r,&h);
l=2*pi*r;
s=pi*r*r;
sq=4*s;
sv=sq*r/3;
sz=s*h;
printf("圆的周长为:l=%f\n圆面积为:s=%.2f\n圆球表面积为:sq=%.2f\n圆球体积为:sv=%.2f\n圆柱体积为:sz=%.2f\n",l,s,sq,sv,sz);
return 0;
}
