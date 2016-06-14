%u :输出无符号整数值（UINT_MAX,USHRT_MAX,UCHAR_MAX） 
%e :输出浮点数的极限值，表示数值的指数形式（FLT_MIN,FLT_MAX,DBL_MIN,DBL_MAX,LDBL_MIN,LDBL_MAX） 
%f :输出浮点数， 
%d ：输出整数 ，可将 char 类型的 ASCLL 字符 输出 对应的 整数 
%c : 输出字符，如67 输出为“C ”，将整数输出为ASCLL 字符。 
%x : 把 char  类型的变量输出 十六进制 

读取类型：
   %hd : 读取short类型 
   %d :  读取int 整形 
   %ld : 读取 long 类型的数值 
   %f :  读取 浮点数 
   %lf || %le: 读取 double 类型数 
   
   1.在scanf %c 中， 在%c 前面一定要留空格，因为会把回车符读入第一个字符 如（minfor.c） 