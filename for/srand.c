#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//���� 1-20������� 

main(){
 srand(time(NULL)); //����������� 
  int i=0;
 for(;i<10;i++){
    printf("srand is value:%d\n",1+rand()%20);
 }	
	
}