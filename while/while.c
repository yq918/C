#include <stdio.h>
// whileѭ��������һ���� ����֮ǰ���ĺ� 
main(){
	unsigned int value;
	unsigned long sum=0;
	int i=1;
	printf("please int number value:\n");
	scanf(" %u",&value);
	while( i<=value){
	   sum+=i++;
	}
	printf("1......%d count :%lu:",value,sum);
}