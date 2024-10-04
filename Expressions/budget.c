#include <stdio.h>

int main(void){
    float income, rent, utilities, groceries, transportation, savings, spend, expenses;
    printf("This is a budget calculator. \n How much do you make a month?\n"); 
    scanf("%f", income); 
    printf("How much does your rent cost?\n");
    scanf("%f", rent); 
    printf("How much do your utilities cost?\n");
    scanf("%f", utilities);
    printf("How much do your groceries cost?\n");
    scanf("%f", groceries);
    printf("How much does your transportation cost?\n");
    scanf("%f", transportation);
    printf("How much do you save?\n");
    scanf("%f", savings);
    printf("How much do you spend?\n");
    scanf("%f", spend);
    printf("How much do your expenses cost?\n");
    scanf("%f", expenses);
    printf("You make %f\n", income); 
    return 0;
}