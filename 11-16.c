#include<stdio.h>
#include<string.h>
// int main()
// {
//     char arr1[30] = "hello,xiyoulinux!";
//     char arr2[20] = "zhong";
//     char *p = strstr(arr1,arr2);
//     if(p == NULL)
//     {
//         printf("arr1中没有找到arr2");
//     }
//     else{
//     printf("%s",p);
//     }
//     return 0;
// }

// int main()
// {
//     char arr1[30] = "zhong-shanxi.xiaohu_beautiful";
//     char arr2[30] = {0};
//     snprintf(arr2,sizeof(arr1),"%s",arr1);
//     const char arr3[10] = "#-._";
//     char*p1 = strtok(arr2,arr3);
//     printf("%s\n",p1);
//     char*p2 = strtok(NULL,arr3);
//     printf("%s\n",p2);
//     char*p3 = strtok(NULL,arr3);
//     printf("%s\n",p3);
//     return 0;
// }


// int main()
// {
//     char arr1[30] = "zhong-shanxi.xiaohu_beautiful";
//     char arr2[30] = {0};
//     snprintf(arr2,sizeof(arr1),"%s",arr1);
//     const char arr3[10] = "#-._";
//     char*p = NULL;
//     for(p = strtok(arr2,arr3);p != NULL;p = strtok(NULL,arr3))
//     {
//         printf("%s\n",p);
//     }
//     return 0;
// }
#include<errno.h>
#include<limits.h>
#include<stdlib.h>
// int main()
// {
//      int i = 0;
//      for(i = 0;i<10;i++)
//      {
//          printf("%d: %s\n",i,strerror(i));
//      }
//     char*p = (char*)malloc(INT_MAX);
//     if(p == NULL)
//     {
//         printf("%s\n",strerror(errno));
//     }
//     free(p);
//     p = NULL;
//     return 0;
// }


int main()
{
    char*p = (char*)malloc(INT_MAX);
    if(p == NULL)
    {
        perror("使用malloc");
        return 1;
    }
    free(p);
    p = NULL;
    return 0;
}