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

 
	
		
	printf("INT����ǣ�%d,��С��:%d,INT�޷�������ǣ�%u \n",m,i,um);
	
	printf("FLOAT��С�ǣ�%f, ����ǣ�%f \n",fi,fm); 
	
    printf("double��С�ǣ�%f, ����ǣ�%f \n",dbli,dblm);
     
    printf("SHORT��С�ǣ�%d, ����ǣ�%d  ,�޷��������%u\n",SHRT_MIN,SHRT_MAX,USHRT_MAX);

    printf("LONG��С�ǣ�%d, ����ǣ�%d  ,�޷��������%u\n",LONG_MIN,LONG_MAX,ULONG_MAX);
 
}