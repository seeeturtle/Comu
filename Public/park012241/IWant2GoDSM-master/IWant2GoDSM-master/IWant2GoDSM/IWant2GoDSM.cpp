// IWant2GoDSM.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int arr[12][12] = { 1, };
	int i = 0,j=0;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			arr[i][j] = arr[i - 1][j - 1]+arr[i-1][j];
		}
	}
	for (i = 1; i < 10; i++)
	{
		for (j =1; j <= i; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
    return 0;
}
