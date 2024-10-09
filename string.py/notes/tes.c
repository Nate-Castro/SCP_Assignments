 #include <stdio.h>
char sibs[2][20] = {"Eliana", "Juliette"};
int i;
int main(){
    while(i<10){
        printf("%s\n", sibs[i]);
        i++;
    }
    return 0;
}