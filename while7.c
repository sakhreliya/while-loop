#include <stdio.h>
main()
{
    int y = 2000;
    printf("Leap years:\n");

    while (y <= 3000) 
	{
        if (y % 4 == 0 && y % 100 != 0)
		{
            printf("%d\n", y);
        }
        y++;
    }
}

