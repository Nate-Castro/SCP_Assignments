//Nathaniel Castro Silly Sentences C

#include <stdio.h>
#include <string.h>

int main(){
    char noun[20];
    char verb[20];
    char bed[20];
    char sent[100000] = "You and your ";

printf("Give a noun: \n");
scanf("%s", noun);
printf("Give a verb: \n");
scanf("%s", verb);
printf("Give a bed: \n");
scanf("%s", bed);

strcat(sent, noun);
strcat(sent, " go out to ");
strcat(sent, verb);
strcat(sent, " to buy a ");
strcat(sent, bed);

printf(sent);

    return 0;
}