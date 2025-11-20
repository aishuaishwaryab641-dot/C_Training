#include <stdio.h>
#include <string.h>
void main ()
{

    
    char name [10] = "Aishwarya";
    char new[100] = "Hello";
    printf("%c", name[7]); //access
    printf("Length of string is %d\n", strlen(name));

    //concatenation
    strcat(new, name); // new = Hello+Aishwarya
    printf("%s", new);
    // search for a char in string!
    printf("%c", strstr(new, "Hello" )); //0
}