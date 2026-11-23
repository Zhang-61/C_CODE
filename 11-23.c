#include<limits.h>
#include<stdio.h>
// int main()
// {
//     printf("%s\n",__FILE__);
//     printf("%d\n",__LINE__);
//     printf("%s\n",__DATE__);
//     printf("%s\n",__TIME__);
//     return 0;
// }

// #define MAX INT_MAX
// #define REG register
// #define do_forever for(;;)
// #define CASE break;case
// #define DEBUG_PRINT printf("%s\n",__FILE__)
// int main()
// {
//     int a = 0;
//     switch(a){
//         case 0:
//         printf("0\n");
//         CASE 1:
//         printf("1");
//     }
//     DEBUG_PRINT;
//     return 0;
// }

// #define MAX(X,Y) X>Y?X:Y
// int main()
// {
//     int a = 3;
//     int b = 4;
//     int r = MAX(a++,b++);
//     printf("%d\n",r);
//     return 0;
// }
// #define SQURT(x) x*x
// int main()
// {
//     int a = 2;
//     int r = SQURT(a+3);
//     printf("%d\n",r);
//     return 0;
// }

#include<stdlib.h>
// #define MALLOC(num,type) (type*)malloc(num*sizeof(type)) 
// int main()
// {
//     // int*p = (int*)malloc(5*sizeof(int));
//     int *p = MALLOC(5,int);
//     if(p == NULL)
//     {
//         return 1;
//     }
//     free(p);
//     p = NULL;
//     return 0;
// }


#define MAX 1000
int main()
{
    #undef MAX
    int a = MAX;
    printf("%d\n",a);
    return 0;
}