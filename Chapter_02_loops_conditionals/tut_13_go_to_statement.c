/* GO TO statement is used to come out of nested loop (throw out program from multiple loops),
   You can use in any other place as well but it's generally avoided due to confusion
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n",i);
        for (int j = 5; j < 9; j++)
        {
            printf("%d\n Enter 0 to exit the nested loop:",j);
            scanf("%d",&num);
            if (num==0)
            {
                goto end;
            }
            // else
            // {
            //     break;
            // }
            
        }
        
    }
    end:{
        printf("to check working of go to statement: 1\n");
        printf("to check working of go to statement: 2");
    }
    return 0;
}
