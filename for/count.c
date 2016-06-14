#include <stdio.h>

main(){
/*
	unsigned int i = 1,j=1;
     unsigned long sum;
	 for(;i<=5;i++){
	 	sum = 0;
	 	j=1;
 		  printf("\n");
		   	for(;j<=i;j++){
		   		sum+=j;
 		         printf("+ %u",j);
  		       }
  		 printf(" = %lu",sum);
 	}
 	printf("\n");*/
 	
 	
 	
 	
 	 unsigned int i = 1,j=1;
     unsigned long sum;
	 for(;i<=5;++i){
	 	sum = 0;
	 	j=1;
 		  printf("\n 1");
		   	for(;j<=i;++j){
		   		sum+=j;
 		         printf("+ %u",j);
  		       }
  		 printf(" = %lu",sum+1);
 	}
 	printf("\n");
 	
 	
}