#include<stdio.h>
// int main()
// {
//     char i = 0;
//     int count = 0; 
//     while(1)
//     {
//         scanf(" %c",&i);
//         if(i!='#')
//         {
//             printf("%c %d ",i,i);
//             count++;
//             if(count==8)
//             {
//                 printf("\n");
//                 count = 0;
//             }
//         }
//         else{
//             printf("退出!");
//             break;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int i = 0;
//     double count1 = 0;
//     double count2 = 0;
//     double sum1 = 0;
//     double sum2 = 0;
//     while(1)
//     {
//         scanf("%d",&i);
//         if(i!=0)
//         {
//             if(i%2==0)
//             {
//                 sum1+=i;
//                 count1++;
//             }
//             else{
//                 sum2+=i;
//                 count2++;
//             }
//         }
//         else
//         {
//             printf("输入结束！");
//             break;
//         }
//     }
//     printf("偶数个数:%.2f;偶数的平均值：%.2f\n",count1,sum1/count1);
//     printf("奇数个数:%.2f;奇数的平均值：%.2f\n",count2,sum2/count2);
//     return 0;
// }



// int main()
// {
//     int i = 0;
//     printf("请你输入一个数字：");
//     scanf("%d",&i);
//     if(i<=0)
//     {
//         printf("输入错误，退出");
//     }
//     else
//     {
//         if(i==1)
//         {
//             printf("没有小于或等于1的素数");
//             return 0;
//         }
//         if(i>=2)
//         {
//             printf("2\n");
//         }
//             int a  = 3;
//         for( a = 3;a*a<=i;a+=2)
//         {
//             if(i%a==0)
//             {
//                break;
//             }
//         }
//             printf("%d\n",a);
//     }
//     return 0;
// }


// int main()
// {
//     char arr [205]="0";
//     scanf("%s",arr);
//     int count = 0;
//     while(1)
//     {
//         if(arr[count]!='\0')
//         {
//             count++;
//         }    
//         else{
//             break;
//         }
//     }
//     printf("%d",count);
//     return 0;
// }

// int main()
// {
//     int i = 0;
//     printf("请输入一个数字：\n");
//     scanf("%d",&i);
//     int left = 0;
//     int right = i;
//     printf("我要开始猜数字啦\n");
//     while(1)
//     {
//         int mid = (left+right)/2;
//         int a = 0;
//         printf("%d\n",mid);
//         printf("-------------我猜对了吗？----------\n");
//         printf("---1.对了----2.猜大了----3.猜小了\n");
//         printf("请输入：");
//         scanf("%d",&a);
//         if(a==1)
//         {
//             printf("退出");
//             break;
//         }
//         else if(a==2)
//         {
//             right = mid-1;
//         }
//         else
//         {
//             left = mid+1;
//         }
//     }
//     return 0;
// }


// double a;
// double b;
// void menu()
// {
//     printf("----------------请选择：------------------\n");
//     printf("---------------0.break-------------------\n");
//     printf("--------1.jia-----------2.jian-----------\n");
//     printf("--------3.chen----------4.chu------------\n");
// }

// double jia(double a,double b)
// {
//     return a+b;
// }

// double jian(double a,double b)
// {
//     return a-b;
// }

// double cheng(double a,double b)
// {
//     return a*b;
// }

// double chu(double a,double b)
// {
//     return a / b;
// }

// double test(double x,double y,double (*p)(double,double))
// {
//     printf("请输入两个数字：");
//     scanf("%lf %lf",&a,&b);
//     return p(x,y);
// }

// int main()
// {
//     menu();
//     int i = 0;
//     scanf("%d",&i);
//     double r;
//         if(i==1)
//         {
//             r = test(a,b,jia);
//             printf("%.2f",r);
//         }
//         else if(i==2)
//         {
//             r = test(a,b,jian);
//             printf("%.2f",r);
//         }
//         else if(i==3)
//         {
//             r = test(a,b,cheng);
//             printf("%.2f",r);
//         }
//         else if(i==4)
//         {
//             r = test(a,b,chu);
//             printf("%.2f",r);
//         }
//         else{
//             printf("退出！\n");
//         }  
//     return 0;
// }