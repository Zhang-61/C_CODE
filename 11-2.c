#include<stdio.h>
// int add(int x,int y)
// {
//     return x+y;
// }
// int jian(int x,int y)
// {
//     return x-y;
// }
// int chen(int x,int y)
// {
//     return x*y;
// }
// int chu(int x,int y)
// {
//     return x/y;
// }

// int main()
// {
//     int i = 0;
//     int j = 0;
//     int z = 0;
//     scanf("%d %d",&i,&j);
//     int (*p[4])(int,int) = {add,jian,chen,chu};
//     int a = 0;
//     scanf("%d",&a);
//     int r = p[a](i,j);
//     printf("%d",r);
//     return 0;
// }

#include<stdlib.h>
// int compare(const void *p1,const void *p2)
// {
//     return *(int*)p1 - *(int*)p2;
// }

// int main()
// {
//     int arr[10] = {3,6,5,7,8,9,1,0,4,2};
//     int a = sizeof(arr)/sizeof(arr[0]);
//     qsort(arr,a,sizeof(arr[0]),compare);
//     for(int i = 0;i<a;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }


// #include<assert.h>
// int main()
// {
//     int a = 10;
//     int *p1 = NULL;
//     int *p2 = &a;
//     int *p3 = (int*)malloc(sizeof(int)*10);
//     free(p3);
//     p3 = NULL;
//     int *p4 = &a;
//     p4 = NULL;
//     assert(p4 != NULL);
//     printf("%d",*p4);
//     return 0;
// }

// int main()
// {
//     const int a = 10;
//      int *p = &a;
//      *p = 100;
//      printf("%d",*p);
//     return 0;
// }

#include<string.h>
// struct student{
//     int age;
//     char name[20];
//     int score;
// };

// typedef struct students{
//     int age;
//     int score;
//     char name[20];
// }student;

// int main()
// {
//     struct student s1 = {18,"zhangsan",150};
//     printf("%d\n",s1.age);
//     struct student *p1 = &s1;
//     printf("%d ",p1->age);
//     printf("%s ",p1->name);
//     printf("%d \n",p1->score);
//     struct student s2 = {.age = 18,.score = 750,.name = "小虎"};
//     struct student *p2  = &s2;
//     printf("%s ",p2->name);
//     printf("%d ",p2->age);
//     printf("%d \n",p2->score);
//     student s3 = {.name = "校长",.age = 55,.score = 999};
//     printf("%d\n",s3.age);
//     printf("%s ",p2->name);
//     strcpy(s2.name,s3.name);
//     printf("%s ",p2->name);
//     return 0;
// }


typedef struct student{
    int age;
    int score;
    char name[20];
}student;

int main()
{
    student arr[3] = {{.age = 18,.score = 150,.name = "xiaohuang"},{.score = 360,.age = 300,.name = "pengzu"},{.score = 750,.age = 65,.name = "zhuang"}};
    for(int i = 0;i<3;i++)
    {
        printf("%d %d %s",arr[i].age,arr[i].score,arr[i].name);
        printf("\n");
    }
    strcpy(arr[0].name,arr[1].name);
    printf("%s",arr[0].name);
    return 0;
}