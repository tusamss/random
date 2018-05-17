#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randum (void);
void bubble (void);

int ANS[5];

int main (void)
{
	printf("五個10~50不重複亂數:");
	randum();
	printf("\n");
	printf("由小到大排序後:");
	bubble();
	return 0;
} 

void randum (void)
{
	int check=0;
	int i,j;
	srand(time(NULL));
	ANS[0]=(rand()%41)+10;
	for( i =1;i<=4;i++)
	{
		check=0;
		ANS[i]=(rand()%41)+10;
		for(check=0;check<i;check++)
		{
			if(ANS[i]==ANS[check])
			{
				ANS[i]=(rand()%41)+10;
				check=-1;
			}
		}
	}
	for(j =0;j<=4;j++)
		printf("%d ",ANS[j]);
}

void bubble (void)
{
	int temp,i,j;
		for( i = 0; i < 5; i++) 
	{
        for( j= i; j < 5; j++) 
		{
            if( ANS[j] < ANS[i] ) 
			{
                temp = ANS[j];
                ANS[j] = ANS[i];
                ANS[i] = temp;
            }
        }
    }
    for( i =0;i<=4;i++)
		printf("%d ",ANS[i]);
}


