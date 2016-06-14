#include <stdio.h>
#include <stdbool.h>
//枚举
main(){
	//定义枚举，并为变量赋值， 
	enum rows {a,b,c,d,e};
	enum rows one = e;  //为变量赋值枚举值 
	printf("%d\n",one); //4
	
	enum r{lbj,wd,ow,lef} t=wd,s=lef; //定义枚举时 直接为新变量赋值 
	 printf("%d-----%d\n",t,s); 
	
	enum rw{lbjs=100,dwd,dow,dlef} st=dwd,ss=dlef; //定义枚举时 指定枚举器的整数值，后面的值 会依次递加 
	 printf("%d-----%d",st,ss); 
	 
	}
	
	
	
