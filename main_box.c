#include<stdio.h>//203
#pragma warning(disable:4996)
//�����������о����㷨��ʵ���㷨ʹ��
//author:mzq
int main(void) {
	int a = 0;
	printf("welcome to algorithms box\n");
	printf("this box will introduce some good algorithms to u!\n");
	printf("1.Ͱ����Bucket sort\n2.ð������Bubble sort\n3,��������Quick sort\n");
	printf("press the number u want\n");
	scanf("%d", &a);
	
	getchar();
	switch (a)
	{
	case 1:  bucket_sort();
	case 2:  bubble_main();
	case 3:  Qsort_main();

	default:
		break;
	}

	return 0;
}
