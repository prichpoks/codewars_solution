int	cycle(int n)
{
	int count, res;
	
	if (n % 2 == 0 || n % 5 == 0)
		return (-1);
	res = 1;
	count = 10 % n; 
	while (count > 1)
	{
		res++;
		count = count * 10 % n;
	}
	return (res);
}
