 #include <stdio.h>
char sibs[2][20] = {" Eliana", "Juliette"};
int i;
int main(){
    while(i<2){
        printf("Hello %s\n", sibs[i]);
        i++;
    }
    return 0;
}