
void dfs(int index, int nowK, int sum, int sumSqu)
{
	if (nowK == k && sum == x)
	{
		if (sumSqu > maxSumSque)
		{
			maxSumSque = sumSqu;
			ans = temp;
		}
		return;
	}
	if (index == n || nowK > k ||sum > x)
		return;
	temp.push_back(a[index]);
	dfs(index+1,nowK+1,sum+a[index],sumSqu+a[index] * a[index]);
	temp.pop_back();
	dfs(index+1,nowK,sum,sumSqu);
}

