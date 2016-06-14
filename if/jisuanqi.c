#include <stdio.h>
//输入一个计算表达式，然后求值  如输入 3+5 
main(){
	double leftnum  = 0.0;
	double rightnum = 0.0;
	char   fuhao = 0;
	printf("请输入计算表达式：");
	scanf("%lf %c %lf",&leftnum,&fuhao,&rightnum);
	
	switch(fuhao){
		case '+':
		printf("两数相加的和是：%lf",leftnum+rightnum);
		break;
	    case '-':
		printf("两数相减的差是：%lf",leftnum-rightnum);
		break;
	   case '*':
		printf("两数相减乘的积是：%lf",leftnum*rightnum);
		break;
	   case '/':
        if(rightnum == 0){
         printf("0不能当被除数");
        }else{     	
          printf("两数相除的商是：%lf",leftnum/rightnum);
		}
		break;	
		case '%':
        if((long)rightnum == 0){
         printf("0不能当被除数");
        }else{     	
          printf("两数求余是：%ld",(long)leftnum%(long)rightnum);
		}
		break;	
	}
	 
}
