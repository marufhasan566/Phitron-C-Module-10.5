#include <stdio.h>
#include <string.h>
int main()
{
    char c[1000];
    scanf("%s", c);
    int i = 0, j = strlen(c) - 1, temp;
    int answer = 1;
    while (i < j)
    {
        if (c[i] != c[j])
        {
            answer = 0;
            break;
        }
        else
        {
            temp = c[i];
            c[i] = c[j];
            if (c[i] != c[j])
            {
                answer = 0;
                break;
            }
            i++;
            j--;
        }
    }
    // printf("%s", c);
    if (answer == 1)
    {
        printf("YES");
    }
    if (answer == 0)
    {
        printf("NO");
    }

    return 0;
}