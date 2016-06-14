#include <stdio.h>
/*
输入圆的直径，求圆的周长与面积 周长 2PIR，面积：TR平方 
*/

int main(void){
	float zhouchang = 0.0f;
	float mianji = 0.0f;
	float banjing = 0.0f;
	float pi = 3.1415926f;
	int zhijing = 0; 
	printf("请输入圆的直径：");
	scanf("%d",&zhijing); 
	banjing = zhijing/2; 
	zhouchang = banjing*2*pi;
	mianji = banjing*banjing*pi;
	
printf("面积：%f\n 周长是：%f",mianji,zhouchang);
	return 0;
}
