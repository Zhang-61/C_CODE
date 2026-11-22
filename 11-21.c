#include<stdio.h>
// struct date{
//     int year;
//     int month;
//     int day;
// };

// struct student{
//     char name[20];
//     int score;
//     struct date birthday;
// };
// int main()
// {
//     struct student arr[3] = {{"zhangsan",730,{2007,12,10}},{"wangwu",740,{2005,9,15}},{"lisi",750,{2006,2,11}}};
//     int i = 0;
//     for(i = 0;i<3;i++)
//     {
//         printf("%s\n",arr[i].name);
//         printf("%d\n",arr[i].score);
//         printf("%d-%d-%d\n",arr[i].birthday.year,arr[i].birthday.month,arr[i].birthday.day);
//     }
//     return 0;
// }

// typedef struct arr1{
//     char a;//1
//     char b;//1
//     int c;//4
// }arr1;

// typedef struct arr2{
//     char d;//1
//     int i;//4
//     char q;//1
// }arr2;

// int main()
// {
//     arr1 first;
//     arr2 second;
//     printf("%zu\n",sizeof(first));
//     printf("%zu\n",sizeof(second));
//     return 0;
// }

// #include<stddef.h>
// typedef struct arr2{
//     char d;//1
//     int i;//4
//     char q;//1
// }arr2;

// int main()
// {
//     arr2 second = {0};
//     printf("%zu\n",sizeof(second));
//     printf("%zu\n",offsetof(arr2,d));
//     printf("%zu\n",offsetof(arr2,i));
//     printf("%zu\n",offsetof(arr2,q));
//     return 0;
// }

// typedef struct test2{
//     int z;
//     char a;
//     int p;
// }test2;

// typedef struct test1{
//     char i;
//     int j;
//     test2 tiantian;
// }test1; 

// int main()
// {
//     test1 huhu = {0};
//     printf("%zu\n",sizeof(huhu));
//     return 0;
// }

// #pragma pack(1)
// struct test{
//     char i;
//     int j;
//     char z;
// };
// #pragma pack()

// int main()
// {
//     struct test a = {0};
//     printf("%zu\n",sizeof(a));
// }
