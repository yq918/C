#include <stdio.h>
main(){
	unsigned int a;
	long b;
	short c;
	
	float total = 9876.34f;
    float price = 78.9f;
    float goods_number = 0.0f; 
    
    goods_number = total/price;
    
    printf("goods_number:%.2f\n",goods_number);
printf("goods_number:%80.2f\n",goods_number);

   printf("not float goods_number:%.0f",goods_number);	
}
