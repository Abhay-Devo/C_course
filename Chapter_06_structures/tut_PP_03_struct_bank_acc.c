// create a struct representing a bank account of a customer. what field did you use and why?

#include <stdio.h>

typedef struct bank_acc
{
    int acc_num;
    int p_num;
    float balance;
} acc;

int main(int argc, char const *argv[])
{
    acc harry, rohan, shivam;

    // Intializing all the bank fields
    // for (int i = 0; i < 3; i++)
    // {
    printf("Enter the Account number of custormer Harry:");
    scanf("%d", &harry.acc_num);
    printf("Enter the Phone number of custormer Harry:");
    scanf("%d", &harry.p_num);
    printf("Enter the Balance in the account of custormer Harry:");
    scanf("%d", &harry.balance);

    // }

    // for (int i = 0; i < 3; i++)
    // {
    printf("The Account number of customer Harry is: %d\n", harry.acc_num);
    printf("The Phone number of customer Harry is: %d\n", harry.p_num);
    printf("Total balance in Account of customer Harry is: %d\n", harry.balance);

    // }

    return 0;
}