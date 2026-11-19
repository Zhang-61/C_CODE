#include<stdio.h>
#include<string.h>
// struct birthday{
//     char year[10];
//     char month[10];
//     char day[10];
// };

// struct student{
//     char name[20];
//     char sex[10];
//     struct birthday s2;
//     char id[11];
// };
// int main()
// {
//     // struct student s1 = {"xiaohu","girl",{"2007","10","11"},"985211"};
//     struct student s1 = {.id = "985211",.name = "tiantian",.s2.year = "2007",.id = "985211",.s2.day = "18",.s2.month = "12",.sex = "man"};
//     printf("%s\n",s1.name);
//     printf("%s\n",s1.sex);
//     printf("%s-%s-%s\n",s1.s2.year,s1.s2.month,s1.s2.day);
//     printf("%s\n",s1.id);
//     return 0;
// }

// struct Node{
//     int date;
//     struct Node*next;//链表，结构体的自引用
// };
// int main()
// {
//     struct Node node;
//     return 0;
// }


// typedef struct student{
//     char name[20];
//     char id[10];
// }student;

// int main()
// {
//     student s = {"zhangsan","985211"};
//     printf("%s\n%s\n",s.id,s.name);
//     return 0;
// }

// struct{
//     int a;
//     char name[20];
// }s;

// int main()
// {
//     s.a = 985;
//     strcpy(s.name,"tianbao");
//     printf("%d\n%s\n",s.a,s.name);
//     return 0;
// }

// typedef struct student{
//     char name[20];
//     char sex[10];
//     struct{
//         int score;
//     };
// }student; 


// int main()
// {
//     student s;
//     strcpy(s.name,"wangwu");
//     strcpy(s.sex,"man");
//     s.score = 750;
//     printf("%s\n%s\n%d\n",s.name,s.sex,s.score);
//     return 0;
// }



// typedef struct student{
//     char name[20];
//     char sex[10];
//     struct{
//         int score;
//     }x;
// }student; 


// int main()
// {
//     student s;
//     strcpy(s.name,"wangwu");
//     strcpy(s.sex,"man");
//     // s.score = 750;//error
//     s.x.score = 750;
//     printf("%s\n%s\n%d\n",s.name,s.sex,s.x.score);
//     return 0;
// }

typedef struct{
    int score;
    char name[20];
}s;

int main()
{
    s temp;
    temp.score = 750;
    strcpy(temp.name,"wangmazi");
    printf("%d\n%s\n",temp.score,temp.name);
    return 0;
}