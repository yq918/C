#include <stdio.h>
//变量类型转换实例 
main(){
	unsigned long c = 10;
	float r = 0.0f;
	float cf = 1.0f;
	
  	r=  c/3;	
	printf("整数除以整数，还是会得到整数，不会显示小数部分如 10/3= %f\n",r);
	
	
    r=  cf*c/3;	
	printf("解决办法一，定义一个浮点型变量，变量值为1.0f，先乘再除即可 如：1.0f*10/3 = %f\n",r);
	
	
	 r=   c/3.0;	
	printf("解决办法二，把除数改为浮点数，如把3 改成3.0 如:10/3.0 =%f \n",r);
	
	
	r=   (float)c/3;	
	printf("解决办法三，强制转换类型:%f \n",r);
	
	 
}