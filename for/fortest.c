#include <stdio.h>
//无限循环，输入数 直接到输入n时才终止循环， 算输入数的平均值 
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
