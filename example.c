#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include "terminal_colors.h"

int main ()
{
    while (1)
    {
        set_tmcolor (30 + rand() % 8);
        printf ("OMG COLORS! ");
    }
}
