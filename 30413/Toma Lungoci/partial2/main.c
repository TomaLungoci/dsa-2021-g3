#include <stdio.h>
#include <stdlib.h>
#define N 3 //matrix size here
#define M 3


int c=0; //counter

int validate(int i, int j)
{
    if( i>=N || j>=M || i==-1 || j==-1) //make sure in matrix
        return 0;
    return 1;
}
void findNumberOfWays ( int i, int j)
{
    if(i==0 && j==M-1)
    {
        c++;
    }
    if (validate(i, j)==1)
    {
        findNumberOfWays( i-1, j); //go up
        findNumberOfWays( i, j+1); //go diag
        findNumberOfWays( i-1, j+1);//go left
    }


}

int main()
{
    //backtracking approach, search for all possible solutions and validate with a afunction
    findNumberOfWays( N-1, 0);
    printf("%d", c);

    return 0;
}
