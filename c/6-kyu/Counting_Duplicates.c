int	duplicate_count(const char *text)
{
	int i;
	int p;
	int res;
	int c;

	i = 0;
	res = 0;
	char buffer[63] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	while (text[i] != 0)
	{
		p = i + 1;
		while (text[p] != 0)
		{
			c = 0;
			if (text[i] > 47 && text[i] < 58 && text[i] == text[p])
			{
				for (int cb = 52; cb < 62; cb++)
				{
					if (buffer[cb] == text[i])
					{
						buffer[cb] = 32;
						res++;
					}	
				}
			}
			if ((text[i] == text[p] || text[i] - 32 == text[p]) &&
					text[i] > 96 && text[i] < 123)
			{
				for (int cb = 0; cb < 52; cb++)
				{
					if (buffer[cb] == text[i] || buffer[cb] == text[i] - 32)
					{
						buffer[cb] = 32;
						c = 1;
					}
				}
			}
			res = res + c;
			c = 0;
			if ((text[i] == text[p] || text[i] + 32 == text[p]) &&
					text[i] > 64 && text[i] < 91)
			{
				for (int cb = 0; cb < 52; cb++)
				{
					if (buffer[cb] == text[i] || buffer[cb] == text[i] + 32)
					{
						buffer[cb] = 32;
						c = 1;
					}
				}
			}
			res = res + c;
			p++;
		}
		i++;
	}
	return (res);
}
