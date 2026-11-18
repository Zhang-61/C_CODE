#include<stdio.h>
#include<string.h>
// int main()
// {
//     char arr1[20] = "HelloXiyoulinux";
//     char arr2[20] = {0};
//     memcpy(arr2,arr1,5);
//     printf("%s\n",arr2);
//     // memcpy(arr1+7,arr1+5,5);
//     memmove(arr1+7,arr1+5,5);
//     printf("%s\n",arr1);
//     return 0;
// }


// int main()
// {
//     int arr[3] = {1,2,3};
//      int i = 0;
//     for(i = 0;i<3;i++)
//     {
//         printf("%d\n",arr[i]);
//     }
//     int *p = memset(arr,0,12);
//     for(i = 0;i<3;i++)
//     {
//         printf("%d\n",*(p+i));
//     }
//     return 0;
// }

    int main()
{
    char buffer1[] = "DWgaOtP12df0";
    char buffer2[] = "DWGAOTP12DF0";
    int n = memcmp(buffer1, buffer2, sizeof(buffer1));

    if (n > 0)
        printf("'%s' 大于 '%s'.\n", buffer1, buffer2);
    else if (n < 0)
        printf("'%s' 小于 '%s'.\n", buffer1, buffer2);
    else
        printf("'%s' 和 '%s' 一样.\n", buffer1, buffer2);

    return 0;
}