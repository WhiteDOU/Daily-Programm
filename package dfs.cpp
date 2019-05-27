void dfs(int index, int sumW, int sumC)
{
	if (index == n)
	{
		if (sumW <= V && sumC > maxValue)
			maxValue = sumC;
	}
	dfs(index + 1, sumW, sumC);
	if (sumW + w[index] <= V)
	{
		if (sumC + c[index] > maxValue)
			maxValue = sumC + c[index];
		dfs(index + 1, sumW + w[index], sumC + c[index]);
	}
	

}

