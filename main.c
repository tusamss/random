#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Randum (void);  //隨機函數產生副程式 
void Bubble (void);	 //泡末排序副程式 

int ANS[5];

int main (void)
{
	printf("五個10~50不重複亂數:"); //顯示提式 
	Randum();
	printf("\n");
	printf("由小到大排序後:");  //顯示提式 
	Bubble();
	return 0;
} 

void Randum (void)//隨機函數產生副程式 
{
	int Check=0;  //宣告 檢查變數 
	int i,j;
	srand(time(NULL));  //初始隨機函數 
	ANS[0]=(rand()%41)+10; //設定第一格亂數 
	for( i =1;i<=4;i++)		//不重複的for迴圈函數 
	{
		Check=0;			 
		ANS[i]=(rand()%41)+10;//設定亂數 
		for(Check=0;Check<i;Check++)//檢察是否跟前面變數有無重複之for迴圈 
		{
			if(ANS[i]==ANS[Check])		//當有重複時執行 
			{
				ANS[i]=(rand()%41)+10; //再重取一個亂數 
				Check=-1;//始for迴圈重新遣查一次 
			}
		}
	}
	for(j =0;j<=4;j++)  //將取出的答案 顯示出來 
		printf("%d ",ANS[j]);
}

void Bubble (void) //泡末排序副程式 
{
	int Temp,i,j;
		for( i = 0; i < 5; i++) 
	{
        for( j= i; j < 5; j++) 
		{
            if( ANS[j] < ANS[i] )//如前一個數比下一個大就交換 
			{
                Temp = ANS[j];   
                ANS[j] = ANS[i];
                ANS[i] = Temp;
            }
        }
    }
    for( i =0;i<=4;i++)	 //將取出的答案 顯示出來 
		printf("%d ",ANS[i]);
}


