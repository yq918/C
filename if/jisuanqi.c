#include <stdio.h>
//����һ��������ʽ��Ȼ����ֵ  ������ 3+5 
main(){
	double leftnum  = 0.0;
	double rightnum = 0.0;
	char   fuhao = 0;
	printf("�����������ʽ��");
	scanf("%lf %c %lf",&leftnum,&fuhao,&rightnum);
	
	switch(fuhao){
		case '+':
		printf("������ӵĺ��ǣ�%lf",leftnum+rightnum);
		break;
	    case '-':
		printf("��������Ĳ��ǣ�%lf",leftnum-rightnum);
		break;
	   case '*':
		printf("��������˵Ļ��ǣ�%lf",leftnum*rightnum);
		break;
	   case '/':
        if(rightnum == 0){
         printf("0���ܵ�������");
        }else{     	
          printf("������������ǣ�%lf",leftnum/rightnum);
		}
		break;	
		case '%':
        if((long)rightnum == 0){
         printf("0���ܵ�������");
        }else{     	
          printf("���������ǣ�%ld",(long)leftnum%(long)rightnum);
		}
		break;	
	}
	 
}
