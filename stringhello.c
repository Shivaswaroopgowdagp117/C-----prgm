#include <stdio.h>

void display(const char *s) 
{
    printf("%s\n", s);
}

int main() 
{
    char message[] = "Hello world";  // Create a character array to hold the string

    display(message);  // Pass the address of message to display

    return 0;
}
