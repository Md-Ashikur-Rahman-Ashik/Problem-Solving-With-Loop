// #include <stdio.h>

// int main()
// {
//     int count, num, i, digit = 0;

//     scanf("%d", &count);

//     for (i = 1; i <= count; i++)
//     {
//         /* code */
//         scanf("%d", &num);

//         for (i = 0; i <= num; i++)
//         {
//             /* code */
//             if (digit >= 0)
//             {
//                 digit = num % 10;
//                 printf("Mod is : %d\n", digit);
//                 num = num / 10;
//                 if(num < 10){

//                 }
//                 printf("%d ", digit);
//             }
//             else
//             {
//                 break;
//             }
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num, i, digit, count;

//     scanf("%d", &count);

//     for (i = 1; i <= count; i++)
//     {
//         scanf("%d", &num);

//         if (num == 0)
//         {
//             /* code */
//             printf("%d\n", num);
//         }

//         for (; num != 0;)
//         {
//             digit = num % 10;
//             printf("%d ", digit);

//             if (num / 10 < 10)
//             {
//                 num = num / 10;
//                 printf("%d\n", num);
//                 break;
//             }
//             else
//             {
//                 num = num / 10;
//             }
//         }
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int testcase, num, i;

    scanf("%d", &testcase);

    for (i = 1; i <= testcase; i++)
    {
        /* code */
        scanf("%d", &num);

        do
        {
            printf("%d ", num % 10);
            num /= 10;
        } while (num != 0);
        printf("\n");
    }
    return 0;
}