#include <stdio.h>
#include <string.h>
int main()
{
    char c[1000];
    scanf("%s", c);
    int i = 0, j = strlen(c) - 1, temp;
    // int is_palindrome = 1;
    while (i < j)
    {
        temp = c[i];
        c[i] = c[j];
        i++;
        j--;
    }
    printf("%s", c);

    return 0;
}