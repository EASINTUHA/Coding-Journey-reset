#include <stdio.h>
#include <string.h>
 
int main () {

    char x[] = "Hello";
    char y[] = "world";
    
    // declare string y with "World"
    
    // concatenate the two strings
    strcat(x,y);
    // print the final string
    printf("%s", x);

}
