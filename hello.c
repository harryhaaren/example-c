#include <stdio.h>

static int t = 1;

int main()
{
    if (t)
        printf("on this line, this is a test\n");
    else
        printf("but not here, to see what happens\n");

    return 0;
}
