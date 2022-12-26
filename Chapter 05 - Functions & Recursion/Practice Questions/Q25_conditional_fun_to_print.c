// Q25 (Q28): Write a function that prints Namaste if user is Indian & Bonjour if the user is French. [04:06:50]

#include <stdio.h>
void printGreeting(char ch);

int main()
{
    char country;
    printf("Inter the first letter of your country : ");
    scanf("%s", &country);

    printGreeting(country);

    return 0;
}

void printGreeting(char ch)
{
    if (ch == 'i' || ch == 'I')
    {
        printf("Namaste");
    }
    else if (ch == 'f' || ch == 'F')
    {
        printf("Bonjour");
    }
    else
    {
        printf("Invalid Input");
    }
}

// Done