#include<stdio.h>
// void get_char(char *p)
// {
//     int n = 0;
//     scanf(" %d",&n);
//     for(int i = 0;i<n;i++)
//     {
//         scanf(" %c",p);
//         p++;
//     }
// }

// int main()
// {
//     char arr[205]="0";
//     get_char(arr);
//     printf("%s",arr);
//     return 0;
// }
#include<string.h>
// void test(char* p1,char* p2)
// {
//     char a = '0';
//     while(p1<p2)
//     {
//         a = *p1;
//         *p1=*p2;
//         *p2 = a;
//         p1++;
//         p2--;
//     }
// }

// int main()
// {
//     char arr[6]="0";
//     scanf("%s",arr);
//     test(arr,arr+strlen(arr)-1);
//     printf("%s",arr);
//     return 0;
//}

#include<ctype.h>
// void clean(char *p)
// {
//     int count = 0;
//     char new_arr[15]="0";
//     while(*p!='0')
//     {
//         if(*p!=' ')
//         {
//             new_arr[count]=*p;
//             count++;
//         }
//         p++;
//     }
//     printf("%s",new_arr);
// }

// int main()
// {
//     char arr[15]="0";
//     fgets(arr,15,stdin);
//     clean(arr);
//     return 0;
// }

// void my_strncpy(char *p2,char *p1,int x)
// {
//     for(int i = 0;i<x;i++)
//     {
//         if(*p1!='\0')
//         {
//             *p2 = *p1;
//             p1++;
//             p2++;
//         }
//         else
//         {
//             break;
//         }
//     }
// }

// int main()
// {
//     char arr1[30]="0";
//     char arr2[30]="zhangtiantian";
//     scanf("%s",arr1);
//     my_strncpy(arr2,arr1,5);
//     printf("%s",arr2);
//     return 0;
// }

// int count = 0;
// int print()
// {
//     printf("china wansui\n");
//     count++;
//     return count;
// }

// int main()
// {
//     for(int i = 0;i<10;i++)
//     {
//         printf("%d\n",print());
//     }
//     return 0;
// }

 #include<stdlib.h>
// #include<time.h>
// int main()
// {
//     int arr [100]={0};
//     srand((unsigned int)time(NULL));
//     for(int i = 0;i<100;i++)
//     {
//         arr[i] = rand()%10+1;
//     }
//     for(int a = 0;a<100;a++)
//     {
//         for(int b = 0;b<99-a;b++)
//         {
//             int temp = 0;
//             if(arr[b]<arr[b+1])
//             {
//                 temp = arr[b+1];
//                 arr[b+1]=arr[b];
//                 arr[b]=temp; 
//             }
//         }
//     }
//     for(int j = 0;j<100;j++)
//     {
//         printf("%d ",arr[j]);
//     }
//     return 0;
// }


// int main()
// {
//     printf("How many words do you wish to enter?\n");
//     int wordcount = 0;
//     scanf("%d",&wordcount);
//     char**word = (char**)malloc(wordcount*sizeof(char*));
//     if(word==NULL)
//     {
//         return 1;
//     }
//     printf("Enter %d words now:\n",wordcount);
//     char arr[200];
//     for(int j = 0;j<wordcount;j++)
//     {
//         scanf("%s",&arr);
//         word[j]=(char*)malloc((sizeof(arr)+1)*sizeof(char));
//         if(word[j]==NULL)
//         {
//             return 1;
//         }
//         strcpy(word[j],arr);
//     }
//     for(int a = 0;a<wordcount;a++)
//     {
//         printf("%s\n",word[a]);
//     }
//     return 0;
// }