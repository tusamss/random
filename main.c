#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Randum (void);  //�H����Ʋ��ͰƵ{�� 
void Bubble (void);	 //�w���ƧǰƵ{�� 

int ANS[5];

int main (void)
{
	printf("����10~50�����ƶü�:"); //��ܴ��� 
	Randum();
	printf("\n");
	printf("�Ѥp��j�Ƨǫ�:");  //��ܴ��� 
	Bubble();
	return 0;
} 

void Randum (void)//�H����Ʋ��ͰƵ{�� 
{
	int Check=0;  //�ŧi �ˬd�ܼ� 
	int i,j;
	srand(time(NULL));  //��l�H����� 
	ANS[0]=(rand()%41)+10; //�]�w�Ĥ@��ü� 
	for( i =1;i<=4;i++)		//�����ƪ�for�j���� 
	{
		Check=0;			 
		ANS[i]=(rand()%41)+10;//�]�w�ü� 
		for(Check=0;Check<i;Check++)//�˹�O�_��e���ܼƦ��L���Ƥ�for�j�� 
		{
			if(ANS[i]==ANS[Check])		//�����Ʈɰ��� 
			{
				ANS[i]=(rand()%41)+10; //�A�����@�Ӷü� 
				Check=-1;//�lfor�j�魫�s���d�@�� 
			}
		}
	}
	for(j =0;j<=4;j++)  //�N���X������ ��ܥX�� 
		printf("%d ",ANS[j]);
}

void Bubble (void) //�w���ƧǰƵ{�� 
{
	int Temp,i,j;
		for( i = 0; i < 5; i++) 
	{
        for( j= i; j < 5; j++) 
		{
            if( ANS[j] < ANS[i] )//�p�e�@�ӼƤ�U�@�Ӥj�N�洫 
			{
                Temp = ANS[j];   
                ANS[j] = ANS[i];
                ANS[i] = Temp;
            }
        }
    }
    for( i =0;i<=4;i++)	 //�N���X������ ��ܥX�� 
		printf("%d ",ANS[i]);
}


