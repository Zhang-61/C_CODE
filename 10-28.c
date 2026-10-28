#include<stdio.h>
// int main()
// {
//     char arr[27]="abcdefghijklmnopqrstuvwxyz";
//     printf("%s",arr);
//     return 0;
// }


// int main()
// {
//     for(int i = 1;i<=5;i++)
//     {
//         for(int j = 1;j<=i;j++)
//         {
//             printf("$");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// int main()
// {
    
//     for(int i = 1;i<=6;i++)
//     {
//         int a = 70;
//         for(int j = 1;j<=i;j++){
//         printf("%c",a);
//         a--;
//         }
//         printf("\n");
//     }
//     return 0;
// }


// int main()
// {
//     char a = '0';
//     printf("请你输入一个大写字母：");
//     scanf("%c",&a);\
//     int i = a-'A'+1;
//     for(int j = 1;j<=i;j++)
//     {
//         int b = 65;
//         for(int a = 1;a<j;a++)
//         {
//             printf("%c",b);
//             b++;
//         }
//         printf("%c",b);
//         b--;
//         for(int c = 1;c<j;c++)
//         {
//             printf("%c",b);
//             b--;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main()
// {
//     char a = '0';
//     printf("请你输入一个大写字母：");
//     scanf("%c",&a);\
//     int i = a-'A'+1;
//     for(int j = 1;j<=i;j++)
//     {
//         for(int d = 1;d<i-j;d++)
//         {
//             printf(" ");
//         }
//         int b = 65;
//         for(int a = 1;a<j;a++)
//         {
//             printf("%c",b);
//             b++;
//         }
//         printf("%c",b);
//         b--;
//         for(int c = 1;c<j;c++)
//         {
//             printf("%c",b);
//             b--;
//         }
//         printf("\n");
//     }
//     return 0;
// }


// int main()
// {
//     double i = 100;
//     int count = 0;
//     while(i>=0)
//     {
//         i*=1.08;
//         i-=10;
//         count++;
//     }
//     printf("%d",count);
//     return 0;
// }

// int main()
// {
//     int i = 0;
//     int j = 0;
//     int sum = 0;
//     while(1)
//     {
//         printf("请你输入一个上限整数和一个下限整数：");
//         scanf("%d %d",&i,&j);
//         if(i<=j)
//         {
//             printf("退出");
//             break;
//         }
//         for(int a = j;a<=i;a++)
//         {
//             sum+=(a*a);
//         }
//         printf("%d\n",sum);
//     }
//     return 0;
// }

// int main()
// {
//      int arr1[8]={0};
//      int arr2[8]={0};
//      int sum = 0;
//      for(int i = 0;i<8;i++)
//      {
//         printf("请你输入数字：");
//         scanf("%d",&arr1[i]);
//      }
//      for(int j = 0;j<8;j++)
//      {
//         sum+=arr1[j];
//         arr2[j]=sum;
//      }
//      for(int a = 0;a<8;a++)
//      {
//         printf("%d ",arr1[a]);
//      }
//      printf("\n");
//      for(int b = 0;b<8;b++)
//      {
//         printf("%d ",arr2[b]);
//      }
//     return 0;
// }


// int main()
// {
//     char i = 0;
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     while(1)
//     {
//         scanf("%c",&i);
//         if(i=='#')
//         {
//             printf("退出\n");
//             break;
//         }
//         else if(i==' ')
//         {
//             a++;
//         }
//         else if(i=='\n')
//         {
//             b++;
//         }
//         else 
//         {
//             c++;
//         }
//     }
//     printf("%d %d %d",a,b,c);
//     return 0;
// }

#define a 40
#define b 300
#define c 450
int main()
{
    double i = 0;
    double sum1 = 0;
    double sum2 = 0;
    printf("请你输入一周工作的小时数：");
    scanf("%lf",&i);
    if(i<=a)
    {
        sum1 = i*10;
        if(sum1<=b)
        {
            printf("%.2f",sum1*0.85);
        }
        else{
            printf("%.2f",(sum1-b)*0.8+b*0.85);
        }
    }
    else
    {
        sum2 = 400+1.5*(i-a)*10;
        if(sum2<=c)
        {
            printf("%.2f",b*0.85+(sum2-b)*0.8);
        }
        else{
            printf("%.2f",b*0.85+150*0.8+(sum2-c)*0.75);
        }
    }
    return 0;
}