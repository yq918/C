#include <stdio.h>
//��������ת��ʵ�� 
main(){
	unsigned long c = 10;
	float r = 0.0f;
	float cf = 1.0f;
	
  	r=  c/3;	
	printf("�����������������ǻ�õ�������������ʾС�������� 10/3= %f\n",r);
	
	
    r=  cf*c/3;	
	printf("����취һ������һ�������ͱ���������ֵΪ1.0f���ȳ��ٳ����� �磺1.0f*10/3 = %f\n",r);
	
	
	 r=   c/3.0;	
	printf("����취�����ѳ�����Ϊ�����������3 �ĳ�3.0 ��:10/3.0 =%f \n",r);
	
	
	r=   (float)c/3;	
	printf("����취����ǿ��ת������:%f \n",r);
	
	 
}