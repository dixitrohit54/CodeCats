/*Create star triangle pattern in C by using nested for loop.
*       *
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
*       *
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<9;j++)
        {
            if(j==i||j==8-i)
                printf("*");
            else
            printf(" ");
        }
     printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<9;j++)
        {
            if(j==3-i||j==5+i)
                printf("*");
            else
                printf(" ");

        }
        printf("\n");
    }
    return 0;
}
