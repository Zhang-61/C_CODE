#include<stdio.h>
#include<string.h>
// int day(int x)
// {
//     int sum = 0;
//     for(int i = 1;i<=x;i++)
//     {
//         if(i==2)
//         {
//             sum=sum+29;
//         }
//         else if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
//         {
//             sum+=31;
//         }
//         else
//         {
//             sum+=30;
//         }
//     }
//     return sum;
// }

// int main()
// {
//     int month = 0;
//     printf("请输入月份号：");
//     scanf("%d",&month);
//     int r = day(month);
//     printf("%d",r);
//     return 0;
//  }

// int main()
// {
//     printf("请你输入月份名：");
//     char arr[20] = "0";
//     scanf("%s",arr);
//     int n = 0;
//     char* month[12]={"january","february","march","april","may","june","july","august","september","october","november","december"};
//     for(int i = 0;i<12;i++)
//     {
//         int r = strcmp(arr,month[i]);
//         if(r==0)
//         {
//             n = i+1;
//             break;
//         }
//     }
//     int sum = 0;
//     for(int i = 1;i<=n;i++)
//     {
//         if(i==2)
//         {
//             sum=sum+29;
//         }
//         else if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
//         {
//             sum+=31;
//         }
//         else
//         {
//             sum+=30;
//         }
//     }
//     printf("%d",sum);
//     return 0;
// }

// typedef struct{
//     char first[20];
//     char middle[20];
//     char last[20];
// }Name;

// typedef struct{
//     char hao[20];
//     Name name;
// }Person;

// void printfPerson(Person* list,int len){
//     for(int i = 0;i<len;i++)
//     {
//         printf("%s,%s",list[i].name.last,list[i].name.first);
//         if(strlen(list[i].name.middle)>0)
//         {
//             printf("%c.",list[i].name.middle[0]);
//         }
//         printf("--%s\n",list[i].hao);
//     }
// }

// int main()
// {
//     Person people[5]={{"302039823",{"Flossie","Mabel","Dribble"}},{"123456789",{"Tom","","Smith0"}},{"987654321",{"Emma","Marie","Johnson"}},{"456789012",{"David","","Williams"}},{"789012345",{"Olivia","Guace","Brown"}}};
//     printfPerson(people,5);
//     return 0;
// }

// void show_empty_seats(void)
// {
//     printf("30 emptyseats\n");
// }
 
// void assignSeat(void)
// {
//     printf("you seat is on three row,three col\n");
// }
// int main()
// {
//     void(*menu[])(void)={show_empty_seats,assignSeat};
//     printf("---------------------------请选择------------------------\n");
//     printf("-------a.show_empty_seats----------b.assignseat---------\n");
//     char choice = '0';
//     scanf(" %c",&choice);
//     int i = choice-'a';
//     menu[i]();
//     return 0;
// }