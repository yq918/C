#include <stdio.h>
/*
����Բ��ֱ������Բ���ܳ������ �ܳ� 2PIR�������TRƽ�� 
*/

int main(void){
	float zhouchang = 0.0f;
	float mianji = 0.0f;
	float banjing = 0.0f;
	float pi = 3.1415926f;
	int zhijing = 0; 
	printf("������Բ��ֱ����");
	scanf("%d",&zhijing); 
	banjing = zhijing/2; 
	zhouchang = banjing*2*pi;
	mianji = banjing*banjing*pi;
	
printf("�����%f\n �ܳ��ǣ�%f",mianji,zhouchang);
	return 0;
}
