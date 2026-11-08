#include<stdio.h>
#include<string.h>

// int my_strcmp(const char*p1,const char*p2)
// {
//     while(*p1 == *p2)
//     {
//         if(*p1 == '\0')
//         {
//             return 0;
//         }
//         p1++;
//         p2++;
//     }
//     return (*p1-*p2);
// }
// int main()
// {
//     char arr1[] = "abcdef";
//     char arr2[] = "abef";
//     // int r = strcmp(arr1,arr2);
//     int r = my_strcmp(arr1,arr2);
//     printf("%d",r);
//     return 0;
// }

// int my_strncmp(const char*str1,const char*str2,size_t n)
// {
//     for(int i = 0;i<n;i++)
//     {
//         if(*str1 != *str2)
//         {
//             return (*str1-*str2);
//         }
//         str1++;
//         str2++;
//     }
//     return 0;
// }

// int main()
// {
//     char arr1[] = "abcdefg";
//     char arr2[] = "abcfg";
//     // int r = strncmp(arr1,arr2,4);
//     int r = my_strncmp(arr1,arr2,3);
//     printf("%d",r);
//     return 0;
// }

