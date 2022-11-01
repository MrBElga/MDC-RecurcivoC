#include <stdio.h>
#include <stdlib.h>

int mdc(int x,int y){
    if(x==y)
        return y;
    else if(x<y)
        return mdc(y,x);
    else if(x>y)
        return mdc(x-y,y);
}


int main(void){
    int n,n2,i;

    printf("digite o primeiro numero: ");
    scanf("%d",&n);
    printf("digite o segundoo numero: ");
    scanf("%d",&n2);
    i=mdc(n,n2);

    printf("mdc de %d e %d igual a %d",n,n2,i);
    return 0;
}
