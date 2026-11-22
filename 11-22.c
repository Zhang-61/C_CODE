#include<stdio.h>
// union un{
//     char a;
//     int b;
// };
// int main()
// {
//     union un c;
//     printf("%zu\n",sizeof(c));
//     printf("c.a = %p\n",&(c.a));
//     printf("c.b = %p\n",&(c.b));
//     return 0;
// }

// union un1{
//     char arr[5];
//     int a;
// };

// int main()
// {
//     union un1 b;
//     printf("%zu\n",sizeof(b));
//     return 0;
// }

// union{
//     char a;
//     int b;
// }c;

// int main()
// {
//     printf("%zu\n",sizeof(c));
//     return 0;
// }


// struct gift_list{
//     int free_number;
//     char type[20];
//     double price;
//     union{
//         struct{
//             char writer[20];
//             int page;
//         }book;
//         struct{
//             char design[20];
//         }title;
//         struct{
//             char coloar[20];
//             int sizes;
//         }shirt;
//     }item;
// };

// int judge(int*a)
// {
//     char*p = (char*)a;
//     if(*p == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int main()
// {
//     int a = 1;
//     int b  = judge(&a);
//     if(b)
//     {
//         printf("小端");
//     }
//     else
//     {
//         printf("大端");
//     }
//     return 0;
// }

// int check_sys()
// {
//     union{
//         char a;
//         int i;
//     }s;
//     s.i = 1;
//     return *(&(s.a));
// }

// int main()
// {
//     if(check_sys() == 1)
//     {
//         printf("小端\n");
//     }
//     else{
//         printf("大端\n");
//     }
//     return 0;
// }

// enum day{
//     Mon,
//     Tues,
//     Wes
// };

// int main()
// {
//     printf("%d\n",Mon);
//     printf("%d\n",Tues);
//     printf("%d\n",Wes);
//     return 0;
// }

// enum day{
//     Mon=10,
//     Tues,
//     Wes
// };

// int main()
// {
//     printf("%d\n",Mon);
//     printf("%d\n",Tues);
//     printf("%d\n",Wes);
//     return 0;
// }

// enum day{
//     Mon,
//     Tues=10,
//     Wes
// };

// int main()
// {
//     printf("%d\n",Mon);
//     printf("%d\n",Tues);
//     printf("%d\n",Wes);
//     return 0;
// }

enum day{
    Mon=9,
    Tues=8,
    Wes=5
};

int main()
{
    printf("%d",Mon);
    printf("%d",Tues);
    printf("%d",Wes);
    return 0;
}