/* Calculate income tax paid by an employee to the
   goverment as per the tax slabs mentioned below:
   Income slabs                Tax
   2.5 - 5.0L                  5%
   5.0 - 10.0L                 20%
   Above 10.0L                 30%

   Not that there is no tax below the income of 2.5L
   Take income amount as an input from the user...*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float income, tax_amount, paid_tax;
    printf("Enter your annual income:");
    scanf("%f", &income);
    
    if (income < 250000)
    {
        printf("No tax to be paid");
    }
    else if (income >= 250000 && income <= 500000)
    {
        tax_amount = income - 250000;
        paid_tax = (tax_amount * 0.05);
        printf("You come under the 5%% tax slab, and you have to pay %.2fK tax", paid_tax);
    }
    else if (income >= 500000 && income <= 1000000)
    {
        tax_amount = income - 500000;
        paid_tax = (tax_amount * 0.2) + 12500;
        printf("You come under the 20%% tax slab, and you have to pay %.2fK tax", paid_tax);
    }
    else if (income >= 1000000)
    {
        tax_amount = income - 1000000;
        paid_tax = (tax_amount * 0.3) + (100000 + 12500);
        printf("You come under the 30%% tax slab, and you have to pay %.2fK tax", paid_tax);
    }
    else
    {
        printf("Please enter a valid input!!!");
    }
    printf("Do you want tax rebate under section 80C:");
    

    return 0;
}