#include <stdio.h>

//����һ����������֮ǰ���ĺ� �磨����5������㣬 1��2��3��4��5 ��ӵĺͣ�

main(){
	unsigned long  sum=0;
	unsigned int j,count;
	printf("������һ������");
	scanf("%u",&count);		 
   for(j=1;j<=count;sum+=j++);
          
 	
	printf("1��%u���֮���ǣ�%lu",count,sum);	
} 