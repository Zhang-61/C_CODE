#include<stdio.h>
#include<string.h>
// typedef struct{
//     int age;
//     char name[20];
//     int score;
// }student;
// int main()
// {
//     student s = {18,"tiantian",750};
//     printf("%d %s %d\n",s.age,s.name,s.score);
//     char arr[200];
//     sprintf(arr,"%d %s %d",s.age,s.name,s.score);
//     printf("%s\n",arr);
//     return 0;
// }


// int main()
// {
//     char string[20] = "------";
//     char arr[20] = "xiyoulinux";
//     // sprintf(string,"%s",arr);
//     int len = strlen(string);
//     // snprintf(string,sizeof(string),"%s",arr);
//     snprintf(string+len,sizeof(string)-len,"%s",arr);
//     printf("%s",string);
//     return 0;
// }

// struct student{
//     int age;
//     char name[20];
//     int score;
// };

// int main()
// {
//     struct student s = {0};
//     scanf("%d %s %d",&(s.age),s.name,&(s.score));
//     char buf[100] = {0};
//     sprintf(buf,"%d %d %s",s.age,s.score,s.name);
//     struct student temp = {0};
//     sscanf(buf,"%d %s %d",&(temp.age),temp.name,&(temp.score));
//     printf("%d %s %d",temp.age,temp.name,temp.score);
//     return 0;
// }