/* Write a C program that simulates a simple ATM machine. The program should:
    Ask for a PIN.
        If the PIN is correct, allow the user to:
            Check balance.
            Withdraw money.
            Deposit money.
        If the PIN is incorrect,
            block the user after 
            3 incorrect attempts.

Goal: Practice conditionals, loops, and user input...*/

#include <stdio.h>

void title()
{
    printf("\n");
    printf("======== ATM MENU =========\n");

    printf("0.  To Exit:\n");
    printf("1.  To set up the atm pin:\n");
    printf("2.  To check balance:\n");
    printf("3.  To withdraw maoney:\n");
    printf("4.  To deposit money:\n");
    printf("\n");
    
}

int pin_check(int perm_pin)
{
    int temp_pin;

    for (int i = 0; i < 3; i++)
    {
        printf("Please enter your current pin, to access those features:");
        scanf("%d", &temp_pin);

        if (perm_pin == temp_pin)
        {
            return 1;
        }
        else
        {
            printf("Please enter correct pin!!!, remaining chances: %d\n", (2 - i));
        }
    }
    return 2;
}

int internal_task(int task_inp, int tot_money)
{

    int withdraw, deposit;

    switch (task_inp)
    {
    case 2:
        printf("Your current account balance is:%d\n", tot_money);
        break;

    case 3:
        printf("Please enter how much money you want to with draw:");
        scanf("%d", &withdraw);
        if (withdraw > (tot_money))
        {
            printf("Insufficient balance!\n");
            printf("Total balance in the account: %d\n", tot_money);
            break;
        }
        tot_money = tot_money - withdraw;
        printf("You have withdraw %drs, total balance remained: %d\n", withdraw, tot_money);

        break;
    case 4:

        printf("Please enter how much money you want to deposit:");
        scanf("%d", &deposit);
        tot_money = tot_money + deposit;
        printf("You have deposited %drs, total balance: %d\n", deposit, tot_money);
        break;

    default:
        break;
    }

    return tot_money;
}

int main(int argc, char const *argv[])
{
    int exit = 1;
    int task_inp;
    int perm_pin;
    int tot_money = 0;

    while (exit != 0)
    {
        title();

        // input to what to do
        printf("Enter your choice:");
        scanf("%d", &task_inp);

        // setting up the pin
        if (task_inp == 1)
        {
            printf("setup a new pin:");
            scanf("%d", &perm_pin);
            printf("PIN has been updated successfully.\n\n");
            continue;
        }

        else if (task_inp == 2 || task_inp == 3 || task_inp == 4)
        {

            // function to check if the pin is right or wrong
            int result = pin_check(perm_pin);
            if (result == 1)
            {
                tot_money = internal_task(task_inp, tot_money);
            }
            else
            {
                printf("You have exhausted your incorrect attempts!!!\n");
            }
        }
        else if (task_inp == 0)
        {
            exit = task_inp;
        }

        else
        {
            printf("Please enter a valid input!!!");
        }
    }

    return 0;
}