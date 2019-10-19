#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j <= i - 1; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j >= i)
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= 9; i++){
//		for (j = 1; j <= i; j++){
//			printf("%d*%d=%d\t", j, i, j*i);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int year = 0, count = 0;
//	for (year = 1000; year <= 2000; year++){
//		if ((year % 400 == 0 || year % 4 == 0 && year % 100 != 0)){
//			count++;
//			printf("%d\t", year);
//		}
//	}
//	printf("\n");
//	printf("count=%d\n", count);
//	system("pause");
//
//}