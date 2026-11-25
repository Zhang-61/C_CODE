#include<stdio.h>
// #define M 1
// int main()
// {
//     #if M==1
//     printf("运行成功");
//     #elif M>1
//     printf("运行再次成功");
//     #else 
//     printf("运行了");
//     #endif
//     return 0;
// }

// #define TEST 985
// int main()
// {
//     #if defined(TEST)
//     printf("1.定义成功\n");
//     #endif
//     #ifdef  TEST
//     printf("2.定义成功\n");
//     #endif
//     return 0;
// }


// int main()
// {
//     #if !defined(apple)
//     printf("YES\n");
//     #endif
//     #ifndef apple
//     printf("Good\n");
//     #endif
//     return 0;
// }

#include<time.h>
#include<stdlib.h>
// int main()
// {
//     char name[7][10] = {
//         "张三","李四","王麻子","王五","伯牙","干将","富贵"
//     };
//     srand((unsigned int)time(NULL));
//     int index1 = 0;
//     int index2 = 0;
//     do{
//         index1 = rand()%7;
//         index2 = rand()%7;
//     }while(index1 == index2);
//     printf("第一个人：%s\n",name[index1]);
//     printf("第二个人：%s\n",name[index2]);
//     return 0;
// }