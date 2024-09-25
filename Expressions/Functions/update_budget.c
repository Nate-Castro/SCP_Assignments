#include <stdio.h>
float income, rent, untilities, grocceries, transportation, savings, expenses, spend;

float input(char type[], float var){
    printf("Monthly is:\n", type);
    scanf("%f", &var);
    return var;
}


void percent(char type[], int amount){
    int per = amount/income * 100;

    printf("Your %s is %d%% of your income.\n", type, per);
}


int main(void){
printf("This is a budget calculator. \n");
income = input("income", income);
rent = input("rent", rent);
untilities = input("utilities", untilities);
grocceries = input("groceries", grocceries);
transportation = input("transportation", transportation);
savings = income * .2;
expenses = rent + untilities + grocceries + transportation + savings;
spend = income - expenses - savings;
printf("You make $%.2f\n", income);
printf("You make $%.2f\n", expenses);
printf("You make $%.2f\n", savings);
printf("Your spending money is $%.2f\n", spend);

percent("rent", rent);
percent("untilities", untilities);
percent("groceries", grocceries);
percent("transportation.", transportation);
percent("expenses",expenses);
percent("savings", savings);
percent("spending", spend);

  return 0;
}