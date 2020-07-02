int  countBits(unsigned value)
{
	int res;

	res = 0;
	while (value > 0)
	{
		if (value % 2 == 1)
			res++;
		value = value / 2;
	}
	return (res);
}
