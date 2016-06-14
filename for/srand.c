#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//生成 1-20的随机数 

main(){
 srand(time(NULL)); //播下随机种子 
  int i=0;
 for(;i<10;i++){
    printf("srand is value:%d\n",1+rand()%20);
 }	
	
}