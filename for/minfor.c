#include <stdio.h>
//无限循环，输入数 直接到输入n时才终止循环， 算输入数的平均值 
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
	
	printf("总共输入%d次，平均值是%.2lf",count,sum/count);
	
}