#include <stdio.h>

int main(void) {
	// your code goes here
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("Largest: ");
    if(a>=b && a>=c)
    {
        printf("%d",a);
    }
    else if(b>=c)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",c);
    }
}

