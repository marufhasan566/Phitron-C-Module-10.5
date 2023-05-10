#include <stdio.h>
#include <string.h>
int main()
{
    char c[1000];
    scanf("%s", c);
    // printf("%s", c);

    char C[strlen(c)];
    for (int i = strlen(c) - 1; i >= 0; i--)
    {
        // printf("%c", c[i]);
        C[strlen(c) - (i + 1)] = c[i];
        // C[i] = c[i];
    }
    C[strlen(c)] = '\0';

    // printf("%s\n", C);
    // printf("%d %d\n", strlen(C), strlen(c));
    if (strcmp(C, c) == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
