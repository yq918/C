#include <stdio.h>
//����ѭ���������� ֱ�ӵ�����nʱ����ֹѭ���� ����������ƽ��ֵ 
main(){
	double sum=0;
	double value=0;
	unsigned int count=0;
	char letter = 'n';
	
	for(;;){
	   printf("enter value: \n");
	   scanf("%lf",&value);
	   sum +=value;
	   ++count;
	   printf("is input 2 entver y or n: \n");
	   scanf(" %c",&letter);
	   if(letter =='n'){
   		    break;
   	      }
	}
	
	printf("�ܹ�����%d�Σ�ƽ��ֵ��%.2lf",count,sum/count);
	
}