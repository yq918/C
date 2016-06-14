#include <stdio.h>
//char ¿‡–Õ‘ÀÀ„ 
main(){
	char a = 'A';
	char b = 'B';
	char c = 'z';
	char number = 40;
	
	char ext1 = a+2;
	char ext2 = b+3;
	char ext3 = c-1;
	
	printf("%-5c%-5c%-5c\n",ext1,ext2,ext3);
	printf("%-5d%-5d%-5d\n",ext1,ext2,ext3);
	printf("40 is c:%c, 40 is number :%d",number,number);
	
}