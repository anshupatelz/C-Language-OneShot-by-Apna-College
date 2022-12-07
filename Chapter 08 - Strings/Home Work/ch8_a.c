// Q:A. Write a program to convert all lowercase vowels to uppercase in a string.
#include <stdio.h>
#include <string.h>
int main()
{
    // input
    char line[100];
    fgets(line, 100, stdin);

    printf("Here's your Old string : %s\n", line);

    // logic
    for (int i = 0; line[i] != '\0'; i++)
    {
        if (line[i] > 'Z' && (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u'))
        {
            line[i] = line[i] - 32;
        }
    }

    // output
    printf("Here's your New string : ");
    puts(line);
    return 0;
}

// Done