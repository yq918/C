#include <stdio.h>
#include <ctype.h>
//��ʾ�����д��ĸ��Ȼ��ת����Сд��ĸ��� 
main(){
	char letter = 0; 
	printf("�������д��ĸ��");
	scanf("%c",&letter);
		//����һ 
	if(letter >='A' && letter<='Z'){
	     //1.  printf("ת��ΪСд�ǣ�%c",letter-'A'+'a');
         printf("ת��ΪСд�ǣ�%c",letter+32);
		}else{
        	printf("���벻�Ǵ�д��ĸ");
    	}
	/*
	  ������ 
	  	if(isalpha(letter) && isupper(letter)){
	     printf("ת��ΪСд�ǣ�%c",tolower(letter));
	}else{
     	printf("���벻�Ǵ�д��ĸ");
	}	
	*/
}