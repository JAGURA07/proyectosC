#include <stdio.h>
int main(){
    int i,sum=0;
    i=1;
    while(i<=100)
        {
            i=i+1;
printf("\n %d",i);
        sum = sum +i;
        i++;
    }
    printf("\nLa suma total es: %d ",sum);
}

