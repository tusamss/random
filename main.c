#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Randum (void);
void Bubble (void);

int ANS[5];

int main (void)
{
	printf("五個10~50不重複亂數:");
	Randum();
	printf("\n");
	printf("由小到大排序後:");
	Bubble();
	return 0;
} 

void Randum (void)
{
	int Check=0;
	int i,j;
	srand(time(NULL));
	ANS[0]=(rand()%41)+10;
	for( i =1;i<=4;i++)
	{
		Check=0;
		ANS[i]=(rand()%41)+10;
		for(Check=0;Check<i;Check++)
		{
			if(ANS[i]==ANS[Check])
			{
				ANS[i]=(rand()%41)+10;
				Check=-1;
			}
		}
	}
	for(j =0;j<=4;j++)
		printf("%d ",ANS[j]);
}

void Bubble (void)
{
	int Temp,i,j;
		for( i = 0; i < 5; i++) 
	{
        for( j= i; j < 5; j++) 
		{
            if( ANS[j] < ANS[i] ) 
			{
                Temp = ANS[j];
                ANS[j] = ANS[i];
                ANS[i] = Temp;
            }
        }
    }
    for( i =0;i<=4;i++)
		printf("%d ",ANS[i]);
}


