#include<stdio.h>
#include<string.h>
// size_t my_strlen(char*p)
// {
//     size_t count = 0;
//     while(*p)
//     {
//         count++;
//         p++;
//     }
//     return count;
// }

// int main()
// {
//     size_t len = my_strlen("abcdef");
//     printf("%zu\n",len);
//     return 0;
// }

// size_t my_strlen(const char*p)
// {
//     if(*p == '\0')
//     {
//         return 0;
//     }
//     return 1+my_strlen(p+1);
// }

// int main()
// {
//     size_t len = my_strlen("abcdefg");
//     printf("%zu\n",len);
//     return 0;
// }


// int main()
// {
//     char arr1[] = "xiyoulinux";
//     char arr2[20] = {0};
//     char *p = strcpy(arr2,arr1);
//     printf("%s\n",arr2);
//     printf("%s\n",p);
//     return 0;
// }

// char* my_strcpy(char*p2,const char*p1)
// {
//     char*temp = p2;
//     while(*p1 != '\0')
//     {
//         *p2++ = *p1++;
//     }
//     *p2 = *p1;
//     return temp;
// }

// int main()
// {
//     char arr1[30] = "zhenanzhongxuelihai";
//     char arr2[30] = {0};
//     char *p = my_strcpy(arr2,arr1);
//     printf("%s\n",p);
//     printf("%s\n",arr2);
//     return 0;
// }


// char* my_strncpy(char*p2,char*p1,size_t n)
// {
//     char*temp = p2;
//     while(n>0 && p1!='\0')
//     {
//         *p2++ = *p1++;
//         n--;
//     }
//     while(n>0)
//     {
//         *p2++ = '\0';
//         n--;
//     }
//     return temp;
// }

// int main()
// {
//     char arr1[30] = "zhenanzhongxuelihai";
//     char arr2[30] = "--------------------";
//     // strncpy(arr2,arr1,19);
//     my_strncpy(arr2,arr1,6);
//     printf("%s",arr2);
//     return 0;
// }

// char* my_strcat(char*p1,char*p2)
// {
//     char*temp = p1;
//     while(*p1)
//     {
//         p1++;
//     }
//     while(*p2 != '\0')
//     {
//         *p1++ = *p2++; 
//     }
//     *p1 = *p2;
//     return temp;
// }

// int main()
// {
//     char arr1[20] = "I love you ";
//     char arr2[] = "beautiful small tigar";
//     // strcat(arr1,arr2);
//     my_strcat(arr1,arr2);
//     printf("%s\n",arr1);
//     return 0;
// }

// char* my_strncat(char*p1,char*p2,size_t n)
// {
//     char*temp = p1;
//     while(*p1)
//     {
//         p1++;
//     }
//     while(n>0 && *p2 !='\0')
//     {
//         *p1++ = *p2++;
//         n--;
//     }
//     *p1 = '\0';
//     return temp;
// }

// int main()
// {
//     char arr1[20] = "daminwangchao";
//     char arr2[] = "zhuchongba";
//     // strncat(arr1,arr2,3);
//     my_strncat(arr1,arr2,3);
//     printf("%s\n",arr1);
//     return 0;
// }

