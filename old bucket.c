void bucket_sort1() {
	int n, bucket[11], i, b, j;
	for (i = 0; i <= 11; i++)
		bucket[i] = 0;   //��ʼ��
	printf("��������Ҫ���뼸������");
	scanf("%d", &n);
	getchar();
	printf("����������");
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &b);
		bucket[b]++; //����+����

	}


	printf("����������");
	for (i = 0; i <= n; i++)
	{
		for (j = 1; j <= bucket[i]; j++)
			printf("%d", i);
	}
}