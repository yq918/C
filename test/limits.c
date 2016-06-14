#include <stdio.h>
#include <limits.h>
#include <float.h>

main(){
	int i = INT_MIN; 
	int m = INT_MAX;
	int um = UINT_MAX;
    float fi = FLT_MIN;
	float fm = FLT_MAX; 
	
	float dbli = DBL_MIN;
	float dblm = DBL_MAX; 

 
	
		
	printf("INT最大是：%d,最小是:%d,INT无符号最大是：%u \n",m,i,um);
	
	printf("FLOAT最小是：%f, 最大是：%f \n",fi,fm); 
	
    printf("double最小是：%f, 最大是：%f \n",dbli,dblm);
     
    printf("SHORT最小是：%d, 最大是：%d  ,无符号最大是%u\n",SHRT_MIN,SHRT_MAX,USHRT_MAX);

    printf("LONG最小是：%d, 最大是：%d  ,无符号最大是%u\n",LONG_MIN,LONG_MAX,ULONG_MAX);
 
}