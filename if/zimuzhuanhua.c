#include <stdio.h>
#include <ctype.h>
//提示输入大写字母，然后转换成小写字母输出 
main(){
	char letter = 0; 
	printf("请输入大写字母：");
	scanf("%c",&letter); 
	//方法一 
	if(isalpha(letter) && isupper(letter)){
	     printf("转换为小写是：%c",tolower(letter));
	}else{
     	printf("输入不是大写字母");
	}
	
	//方法二 
	/*	
	if(letter >'A' && letter<'Z'){
	       printf("转换为小写是：%c",letter-'A'+'a');
	}else{
     	printf("输入不是大写字母");
	}
	*/
}