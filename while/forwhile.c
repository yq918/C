#include <stdio.h>

main(){
	unsigned int count =5;
	unsigned long sum = 0;
	unsigned int j =1,i=1;
	
	for(;i<=count;++i){
	    j = 1;
	    sum = 0;
	    printf("\n 1");
	    while( j < i){
	        sum += ++j;
	        printf(" + %u",j);	     
    	}
    	printf(" = %lu \n",sum+1);
	}
	
}
