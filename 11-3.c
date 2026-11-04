#include<stdio.h>
#include<stdlib.h>
// int main()
// {
//     int *p1 = (int*)malloc(3*sizeof(int));
//     if(p1 == NULL)
//     {
//         printf("malloc失败");
//         return 1;
//     }
//     p1[0] = 1;
//     p1[1] = 2;
//     p1[2] = 3;
//     for(int i = 0;i<3;i++)
//     {
//         printf("%d ",p1[i]);
//     }
//     free(p1);
//     p1 = NULL;
//     return 0;
// }
#include<assert.h>
// int main()
// {
//     int* p2 = (int*)calloc(3,sizeof(int));
//     if(p2 == NULL)
//     {
//         printf("calloc失败");
//         return 1;
//     }
//     p2[0] = 9;
//     p2[1] = 8;
//     p2[2] = 5;
//     for(int i = 0;i<3;i++)
//     {
//         printf("%-5d",p2[i]);
//     }
//     printf("\n");
//     int *temp = realloc(p2,3*sizeof(int));
//     assert(temp != NULL);
//     p2 = temp;
//     p2[3] = 2;
//     p2[4] = 1;
//     p2[5] = 1;
//     for(int j = 3;j<6;j++)
//     {
//         printf("%-5d",p2[j]);
//     }
//     free(p2);
//     p2 = NULL;
//     return 0;
// }