#include <stdio.h>
#include <stdbool.h>
//ö��
main(){
	//����ö�٣���Ϊ������ֵ�� 
	enum rows {a,b,c,d,e};
	enum rows one = e;  //Ϊ������ֵö��ֵ 
	printf("%d\n",one); //4
	
	enum r{lbj,wd,ow,lef} t=wd,s=lef; //����ö��ʱ ֱ��Ϊ�±�����ֵ 
	 printf("%d-----%d\n",t,s); 
	
	enum rw{lbjs=100,dwd,dow,dlef} st=dwd,ss=dlef; //����ö��ʱ ָ��ö����������ֵ�������ֵ �����εݼ� 
	 printf("%d-----%d",st,ss); 
	 
	}
	
	
	
