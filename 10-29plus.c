#include<stdio.h>
// double min(double x,double y)
// {
//     if(x<y)
//     {
//         return x;
//     }
//     else
//     {
//         return y;
//     }
// }
// int main()
// {
//     double i = 0;
//     double j = 0;
//     scanf("%lf %lf",&i,&j);
//     double r = min(i,j);
//     printf("%f",r);
//     return 0;
// }


// void chline(char a,int i,int j)
// {
//     for(int col = 1;col<=i;col++)
//     {
//         for(int row = 1;row<=j;row++)
//         {
//             printf("%c",a);
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     char r = '0';
//     scanf("%c",&r);
//     int i = 0;
//     int j = 0;
//     scanf("%d %d",&i,&j);
//     chline(r,i,j);
//     return 0;
// }


// int main()
// {
//     int f1 = 1;
//     int f2 = 1;
//     int f3 = 0;
//     int n = 0;
//     scanf("%d",&n);
//     for(int i = 1;i<=n;i++)
//     {
//         f3 = f1+f2;
//         f1 = f2;
//         f2 = f3;
//     }
//     printf("%d",f1);
//     return 0;
// }

// void copy_target1(double target[],double soure[],int x)
// {
//     for(int i = 0;i<x;i++)
//     {
//         soure[i]=target[i];
//     }
// }
// void copy_target2(double *p1,double *p2,int x)
// {
//     for(int i = 0;i<x;i++)
//     {
//         *(p2+i)=*(p1+i);
//     }
// }
// void copy_target3(double *p1,double *p2,double *p3)
// {
//     for(int i = 0;i<5;i++)
//     {
//         *(p2+i)=*p3;
//         p3--;
//     }
// }
// int main()
// {
//     double source[5]={1.1,2.2,3.3,4.4,5.5};
//     double target1[5];
//     double target2[5];
//     double target3[5];
//     copy_target1(source,target1,5);
//     copy_target2(source,target2,5);
//     copy_target3(source,target3,source + 5); 
//     for(int j = 0;j<5;j++)
//     {
//         printf("%.1f ",target1[j]);
//     }
//     printf("\n");
//     for(int j = 0;j<5;j++)
//     {
//         printf("%.1f ",target1[j]);
//     }
//     printf("\n");
//     for(int j = 0;j<5;j++)
//     {
//         printf("%.1f ",target1[j]);
//     }
//     printf("\n");
//     return 0;
// }


// int put_max(int *p,int x)
// {
//     int max = 0;
//     for(int i = 0;i<x;i++)
//     {
//         if(*p>max)
//         {
//             max = *p;
//         }
//         p++;
//     }
//     return max;
// }

// int main()
// {
//     int arr[10]={0,1,2,3,4,5,6,7,8,9};
//     int r = put_max(arr,10);
//     printf("%d",r);
//     return 0;
// }


// void printf_arr(int *p1,int x)
// {
//     for(int i = 0;i<x;i++)
//     {
//         for(int j = 0;j<5;j++)
//         {
//        printf("%d ",*p1);
//        p1++;
//         }
//         printf("\n");
//     }
// }
// void zen_arr(int *p2,int x)
// {
//     for(int i = 0;i<x;i++)
//     {
//         for(int j = 0;j<5;j++){
//         *p2=(*p2)*2;
//         p2++;
//         }
//     }
// }

// int main()
// {
//     int arr[3][5]={{33,54,65,32,42},{88,66,98,75,35},{98,60,40,28,94}};
//     printf_arr((int*)arr,3);
//     zen_arr((int*)arr,3);
//     printf_arr((int*)arr,3);
//     return 0;
// }

// double put_chazhi(double*p,int x)
// {
//     double min = 100;
//     double max = 0;
//     for(int i = 0;i<x;i++)
//     {
//         if(*p<min)
//         {
//             min = *p;
//         }
//         if(*p>max)
//         {
//             max = *p;
//         }
//         p++;
//     }
//     return max-min;
// }

// int main()
// {
//     double arr[10]={2.6,5.4,9.7,6.5,8.5,7.9,9.85,2.11,6.5,1.8};
//     double r = put_chazhi(arr,10);
//     printf("%.1f",r);
//     return 0;
// }