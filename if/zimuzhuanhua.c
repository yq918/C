#include <stdio.h>
#include <ctype.h>
//��ʾ�����д��ĸ��Ȼ��ת����Сд��ĸ��� 
main(){
	char letter = 0; 
	printf("�������д��ĸ��");
	scanf("%c",&letter); 
	//����һ 
	if(isalpha(letter) && isupper(letter)){
	     printf("ת��ΪСд�ǣ�%c",tolower(letter));
	}else{
     	printf("���벻�Ǵ�д��ĸ");
	}
	
	//������ 
	/*	
	if(letter >'A' && letter<'Z'){
	       printf("ת��ΪСд�ǣ�%c",letter-'A'+'a');
	}else{
     	printf("���벻�Ǵ�д��ĸ");
	}
	*/
}