//Nathaniel Castro Time of Day C

#include <stdio.h>
int time;


int main(){
    printf("What time is it for you?: ");
    scanf("%d\n", &time);

        if (time <= 11){
            printf("Good morning\n");
        
        }else if (time >= 12, time <= 20){
            printf("Good afternoon\n");
        }else if (time >= 20){
            printf("Good night\n");
        }


    return 0;
}