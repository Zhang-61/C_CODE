#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<float.h>
// int main()
// {
//     int i = INT_MAX;
//     printf("%d\n%d\n",i,i+1);
//     float j = FLT_MAX;
//     printf("%f\n%f\n",j,j+1);
//     float z = FLT_MIN;
//     printf("%f\n%f\n",z,z-1);
//     return 0;
// }


// int main()
// {
//     printf("请你输入ASCII值");
//     int i = 0;
//     int j = 0;
//     int z = 0;
//     scanf("%d %d %d",&i,&j,&z);
//     printf("%c %c %c",i,j,z);
//     return 0;
// }

// int main()
// {
//     printf("请你输入年龄：");
//     double i = 0;
//     scanf("%lf",&i);
//     double a = i*3.156e+7;
//     printf("%f",a);
//     return 0;
// }


// int main()
// {
//     printf("请输入水的夸脱数：");
//     double a = 0;
//     scanf("%lf",&a);
//     double b = a*950;
//     double c = b/3e-23;
//     printf("%lf",c);
//     return 0;
// }


// int main()
// {
//     char name[20]="0";
//     printf("请你输入你的名字：");
//     scanf("%s",name);
//     printf("\"%s\"\n",name);
//     printf("\"%20s\"\n",name);
//     printf("\"%-20s\"\n",name);
//     printf("\"%*s\"\n",strlen(name)+3,name);
//     return 0;

// }

// int main()
// {
//     printf("请你输入一个浮点数：");
//     double i = 0;
//     scanf("%lf",&i);
//     printf("%.1f\n",i);
//     printf("%.1e\n",i);
// }

// int main()
// {
//     printf("请你输入下载速度和文件的大小：");
//     double i = 0;
//     double j = 0;
//     scanf("%lf %lf",&i,&j);
//     printf("At %.2f megabits  per second,a file of %.2f megabytes downloads in %.2f seconds.",i,j,j/i);
//     return 0;
// }

// int main()
// {
//     char ming [20]={0};
//     char xing [20]={0};
//     printf("请你输入你的名：");
//     scanf("%s",ming);
//     printf("清输入你的姓:");
//     scanf("%s",xing);
//     int i = strlen(ming);
//     int j = strlen(xing);
//     printf("%s %s\n",ming,xing);
//     printf("%*d%*d\n",i,i,j,j);
//     printf("%s %s\n",ming,xing);
//     printf("%-*d%-*d\n",i,i,j,j);
//     return 0;
// }

// #define H 60
// int main()
// {
//     while(1)
//     {
//         printf("请你输入一个整数：");
//         int i = 0;
//         scanf("%d",&i);
//         if(i<=0)
//         {
//             printf("退出");
//             break;
//         }
//         printf("%02dh:%02dmin\n",i/H,i%H);
//     }
//     return 0;
// }


// int main()
// {
//     int i = 0;
//     printf("请你输入一个整数：");
//     scanf("%d",&i);
//     int j = 0;
//     for(j = i;j<=i+10;j++)
//     {
//         printf("%d\n",j);
//     }
//     return 0;
// }

// double he(double he){
//     double b = 1;
//     for(int j = 0;j<3;j++)
//     {
//         b*=he;
//     }
//     return b;
// }
// int main()
// {
//     printf("请你输入一个double类型的数字:");
//     double i = 0;
//     scanf("%lf",&i);
//     double a = he(i);
//     printf("%f",a);
//     return 0;
// }

