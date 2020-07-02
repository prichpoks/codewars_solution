
long	arr_plus_arr(int *a,  int *b, int na, int nb)
{
	long int res;
	int count;

	res = 0;
	count = 0;
	while (count < na)
	{
		res = res + a[count];
		count++;
	}
	count = 0;
	while (count < nb)
	{
		res = res + b[count]
		count++;
	}
	return (res);
}
