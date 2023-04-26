#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* positive_or_negative - prints the given integer is positive, negative or zero
*/
void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else
printf("%d is zero\n", i);
}
