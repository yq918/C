#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

main(){
	srand(time(NULL)); //����������� 
	int count = 3;
	int j = 1; 
	unsigned int str = 1+rand()+rand();
	unsigned int input;
    printf("���ס�����ַ���%u\n",str);	
	do{
		scanf(" %u",&input);
		if(input == str){
		    printf("������ȷ"); 
		    break;
		}
		j++;
	printf("���������룬����%d�λ���",count-j); 	 
	}while( j < count);
	
	
	
}