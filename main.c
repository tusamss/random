#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randum (void);
void bubble (void);

int A[5];

int main (void)
{
	randum();
	printf("\n");
	bubble();
	return 0;
} 

void randum (void)
{
	int check=0;
	int i,j;
	srand(time(NULL));
	A[0]=(rand()%41)+10;
	for( i =1;i<=4;i++)
	{
		A[i]=(rand()%41)+10;
	}
	while((A[1]==A[0]))
		A[1]=(rand()%41)+10;
	while(((A[2]==A[0])||(A[2]==A[1])))
		A[2]=(rand()%41)+10;
	while(((A[3]==A[0])||(A[3]==A[1])||(A[3]==A[2])))
		A[3]=(rand()%41)+10;
	while(((A[4]==A[0])||(A[4]==A[1])||(A[4]==A[2])||(A[4]==A[3])))
		A[4]=(rand()%41)+10;			
	for( j =0;j<=4;j++)
	{
		printf("%d ",A[j]);
	}
}

void bubble (void)
{
	int temp,c,k,l;
	for( c = 0; c < 5; c++) 
	{
        for(  k= c; k < 5; k++) 
		{
            if( A[k] < A[c] ) 
			{
                temp = A[k];
                A[k] = A[c];
                A[c] = temp;
            }
        }
    }
    for( l =0;l<=4;l++)
	{
		printf("%d ",A[l]);
	}	
}
