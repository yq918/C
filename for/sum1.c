#include <stdio.h>

//输入一个数，计算之前数的和 如（输入5，则计算， 1，2，3，4，5 相加的和）

main(){
	unsigned long  sum=0;
	unsigned int j,count;
	printf("请输入一个数：");
	scanf("%u",&count);		 
   for(j=1;j<=count;sum+=j++);
          
 	
	printf("1到%u相加之和是：%lu",count,sum);	
} 
