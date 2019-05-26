int merge(int a[], int l1, int r1, int l2, int r2)
{
	int i = l1;
	int j = l2;
	int temp[maxn], index = 0;

	while (i <= r1 && j <= r2)
	{
		if (a[i] <= a[j])
			temp[index++] = a[i++];
		else
			temp[index++] = a[j++];
	}
	while (i <= r1)
		temp[index++] = a[i++];
	while (j <= r2)
		temp[index++] = a[j++];
	for (int i = 0; i < index; ++i)
	{
		a[l1 + i] = temp[i];
	}
}

void mergeSort(int a[], int left, int right)
{
	if (left < right)
	{
		int mid = (left + right) >> 1;
		mergeSort(a, left, mid);
		mergeSort(a, mid + 1, right);
		merge(a, left, mid, mid + 1, right);
	}
}