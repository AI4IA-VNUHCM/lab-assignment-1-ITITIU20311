/*
4.	Write a program to display a hollow triangle by asterisks (*) on the screen.
The input will be the height of the triangle and the thickness of the borders.
Ex:
 ____________________________________
| Input: 7 2                         |
| Output:                            |
|             *                      |
|           * * *                    |
|         * *   * *                  |
|       * *       * *                |
|     * *           * *              |
|   * * * * * * * * * * *            |
| * * * * * * * * * * * * *          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int height = atoi(argv[1]);
	int border = atoi(argv[2]);
	//Your codes here
	for(int i=1;i<=border;i++)
	{
        for(int j=1; j<= height-i ; j++ )
            {
                printf("  ");
            }
        for (int k = 0; k<=2*i-2; k++)
        {
            printf(" *");
        }
        printf("\n");
	}
	for(int i=border+1;i<=height-border;i++)
	{//in dau cach
		for(int j=1; j<= height-i ; j++ )
            {
                printf("  ");
            }
	//in sao
		for (int k = 1; k<=border; k++)
		{
			printf(" *");
		}
	// in dau cach o giua
		for (int l = 0;l <=2*i-2-2*border; l++)
		{
			printf("  ");
		}
	//in sao lan 2
		for (int m = 1; m <= border; m++)
		{
			printf(" *");
		}
		printf("\n");
		
	}
	for(int i=height-border+1 ; i <=height ; i++)
    {
        for(int j=1; j<= height-i ; j++ )
            {
                printf("  ");
            }
        for (int k = 0; k<=2*i-2; k++)
        {
            printf(" *");
        }
        printf("\n");
    }


	return 0;
}