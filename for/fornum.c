#include <stdio.h>
//ѭ��3�Σ���������3��ֵ��ͨ�������ֵ�ж��Ƿ����ĳ��ֵ�� 
main(){
	unsigned int count = 3;
	unsigned int value;
	for(;count>0;count--){
		 printf("please input number value:\n");
		 scanf("%u",&value);
		 if(value ==15){
		    printf(" OK ");
		    break;
 		}
 		printf("you haiyou %d ci jihui\n",count-1);
 		
	}
	
}