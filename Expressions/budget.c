#include <stdio.h>

int main(void){
    float income, rent, utilities, groceries, transportation, expenses, total, savings;
    float prent, putilities, pgroceries, ptransportation, pexpenses, psavings;
    printf("Hello user, welcom to your budget calculator.\n");
    printf("How much do you make each month?: ");
    scanf("%f", &income);
    printf("How much is your rent?: ");     //Go to 11:00 on code with me video
    scanf("%f", &rent);
    printf("How much is your utilities?: ");
    scanf("%f", &utilities);
    printf("How much is your groceries?: ");
    scanf("%f", &groceries);
    printf("How much is your transportation?: ");
    scanf("%f", &transportation);
    expenses = rent + utilities + groceries + transportation;
    savings = income * .2;
    total = income - savings - expenses;
    printf("Your monthly income is: $%.2f\n", income);
    printf("Your monthly expenses are: $%.2f\n", expenses);
    printf("Your monthly savings is: $%.2f\n", savings);
    printf("You have $%.2f\n", total);
    prent = rent/income * 100;
    putilities = utilities/income * 100;
    pgroceries = groceries/income * 100;
    ptransportation = transportation/income * 100;
    pexpenses = expenses/income * 100;
    psavings = savings/income * 100;

    return 0;
};