#include <stdio.h>
//����ѭ���������� ֱ�ӵ�����nʱ����ֹѭ���� ����������ƽ��ֵ 
int main(void){
	 char answer = "N";
	 double total = 0.0;
	 double value = 0.0;
	 unsigned int count = 0;
	 printf("please input number value\n");
	 for(;;){
 		 printf("enter input value:");
 		 scanf("%lf",&value);
 		 total+=value;
 		 ++count;
 		 printf("do you want to enter y or n:");
 		 scanf(" %c",&answer);  
 		 if(answer == 'n'){ 
 		 	 break;
 		 }
 	}
 	printf("\n the average is %.2lf\n",total/count);
 	return 0;
}
