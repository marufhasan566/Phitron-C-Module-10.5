#include <stdio.h>
#include <string.h>
int main()
{
    char a[11]; // to store the null value I had to give the string size 11 instead of 10 otherwise it will give error in codeforces.
    char b[11];
    scanf("%s %s", a, b);
    printf("%d %d\n", strlen(a), strlen(b));
    printf("%s%s\n", a, b);

    char temp;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s", a, b);
    return 0;
}
