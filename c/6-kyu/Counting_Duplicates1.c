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
			if ((text[i] > 47 && text[i] < 58 && text[i] == text[p]) || 
				(text[i] > 64 && text[i] < 91 && text[i] + 32 == text[p] || 
			 	text[i] == text[p]) || 
				(text[i] > 95 && text[i] < 123 && text[i] - 32 == text[p] || 
			 	text[i] == text[p]))
			{
				c = 0;
				for (int cb = 0; cb < 62; cb++)
				{
					if (buffer[cb] == text[i] && text[i] > 46 && text[i] < 58)
					{
						buffer[cb] = 32;
						res++;
					}	
					if ((buffer[cb] == text[i] || buffer[cb] == text[i] - 32) 
							&& text[i] > 95 && text[i] < 123)
					{
						buffer[cb] = 32;
						c++;
					}
					if ((buffer[cb] == text[i] || buffer[cb] == text[i] + 32)
							&& text[i] > 64 && text[i] < 91)
					{
						buffer[cb] = 32;
						c++;
					}
				}
				res = (c / 2) + res;
			}
			p++;
		}
		i++;
	}
	return (res);
}	
