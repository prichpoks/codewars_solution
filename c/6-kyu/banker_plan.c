int	fortune(int f0, double p, int c0, int n, double i)
{
	while (n > 1)
	{
		f0 = f0 + f0 * (p / 100) - c0;
		c0 = c0 + c0 * (i / 100);
		n--;
	}
	if (f0 < 0)
		return (0);
	return(1);
}
