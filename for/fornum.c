#include <stdio.h>
//循环3次，最多可输入3次值。通过输入的值判断是否等于某个值。 
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