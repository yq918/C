#include <stdio.h>
int max(int x, int y){
    if (x > y)
         return x;
      else 
	    return y;   
}
main(){
 	int a,b,c=0;
	printf("������2������");
    scanf("%d%d",&a,&b);
    c=max(a,b);
    printf("max:%d\n",c);
    getchar();
}
