#include<stdio.h>
#include<string.h>
// int zhuan(char *p)
// {   
//     int two = 1;
//     int sum = 0;
//     for(int j = 0;p[j]!='\0';j++)
//     {
//         int z = p[j]-'0';
//         sum+=z*two;
//         two*=2;
//     }
//     return sum;
// }

// int main()
// {
//     char * pbin = "01001001";
//     int sum = zhuan(pbin);
//     printf("%d",sum);
//     return 0;
// }

// int shu(int x)
// {
//     unsigned int res =(unsigned int)x;
//     int count = 0;
//     while(res!=0)
//     {
//         count+=res&1;
//         res=res>>1;
//     }
// }

// int main()
// {
//     int i = 73;
//     int j = shu(i);
//     printf("这个数字转化成的二进制数中的一的个数：%d",j);
//     return 0;
// }


// int judge(int x,int y)
// {
//     for(int j = 0;j<y;j++)
//     {
//         x=x>>1;
//     }
//     int z = x&1;
//     return z;
// }

// int main()
// {
//     int i = 0;
//     int wei = 0;
//     scanf("%d %d",&i,&wei);
//     int r = judge(i,wei);
//     printf("%d",r);
//     return 0;
// }

// #define average(a,b) ((2.0*(a)*(b))/((a)+(b)))

// int main()
// {
//     double i = 0;
//     double j = 0;
//     scanf("%lf %lf",&i,&j);
//     double r = average(i,j);
//     printf("%.2f",r);
//     return 0;
// }

#include<stdlib.h>
#include<time.h>
// void test(int arr1[],int x,int y)
// {
//     int arr2[10]={0};
//     for(int z = 0;z<x;z++)
//     {
//         arr2[z]=0;
//     }
//     int count = 0;
//     while(count!=y)
//     {
//         int a = rand()%10;
//         if(arr2[a]==0)
//         {
//             printf("%d\n",arr1[a]);
//             arr2[a]=1;
//             count++;
//         }
//     }
// }

// int main()
// {
//     int arr[10]={0,1,2,3,4,5,6,7,8,9};
//     int i = sizeof(arr)/sizeof(arr[0]);
//     printf("请你输入你要选取的元素个数：");
//     int j = 0;
//     scanf("%d",&j);
//     srand((unsigned int)time(NULL));
//     test(arr,i,j);
//     return 0;
// }



int main()
{
    
    return 0;
}