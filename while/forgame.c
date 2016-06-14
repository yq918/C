#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

main(){
	srand(time(NULL)); //播下随机种子 
	int count = 3;
	int j = 1; 
	unsigned int str = 1+rand()+rand();
	unsigned int input;
    printf("请记住下列字符：%u\n",str);	
	do{
		scanf(" %u",&input);
		if(input == str){
		    printf("输入正确"); 
		    break;
		}
		j++;
	printf("请重新输入，还有%d次机会",count-j); 	 
	}while( j < count);
	
	
	
}