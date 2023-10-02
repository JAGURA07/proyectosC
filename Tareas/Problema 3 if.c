#include <stdio.h>
#include <math.h>
main (void){
int x;
char resp;
resp='s';
while (resp=='s' || resp== 'S'){
        system("cls");
printf("\nIntroduce tu numero:\n");
scanf("%d",&x);
if (x%2==0){
    x=(x*3)+1;
printf("\n%d",x);

}
else {
    x=(x/2)+1;
    printf("\n%d",x);
}
printf("\nOtra vez? R=s/n");
resp= getch ();
}
}
