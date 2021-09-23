#include <stdio.h>
#include <string.h>
void fun(char p1[], char p2[])
{
   char *point1,*point2;
   point1=p1;
   point2=p2;
   while(*point1!='\0') point1++;
   while(*point2!='\0'){
	 *point1=*point2;
	 point1++;
	 point2++;
	 }
   *point1='\0';
}

main()
{    char s1[80], s2[40] ;void NONO ();

     printf("Enter s1 and s2:\n") ;
     scanf("%s%s", s1, s2) ;
     printf("s1=%s\n", s1) ;
     printf("s2=%s\n", s2) ;
     printf("Invoke fun(s1,s2):\n") ;
     fun(s1, s2) ;
     printf("After invoking:\n") ;
     printf("%s\n", s1) ;
     NONO() ;
     getchar();
}

void NONO ()
{/* 本函数用于打开文件，输入测试数据，调用fun函数，输出数据，关闭文件。*/
  int i ;
  FILE *rf, *wf ;
  char s1[80], s2[40] ;

  rf = fopen("..\\..\\in.dat","r") ;
  wf = fopen("..\\..\\out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(rf, "%s", s1) ;
    fscanf(rf, "%s", s2) ;
    fun(s1, s2) ;
    fprintf(wf, "%s\n", s1) ;
  }
  fclose(rf) ;
  fclose(wf) ;
}

