#include <stdlib.h>

char*	get_strings(const char *city)
{
	int x;
	int q;
	int i;
	int p;
	int r;
	char *str;

	str = (char*)malloc(sizeof(char) * 200);
	x = 0;
	i = 0;
	while (city[x] != 0)
	{
		q = 0;
		while (str[q] != city[x] && str[q] != 0 && str[q] != city[x] + 32)
			q++;
		if (((city[x] > 64 && city[x] < 91) || (city[x] > 96 && city[x] < 123)) 
				&& str[q] == 0)
		{
			if (city[x] > 64 && city[x] < 91)
				str[i] = city[x] + 32;
			else 
				str[i] = city[x];
			str[i + 1] = ':';
			str[i + 2] = '*';
			str[i + 3] = ',';
			str[i + 4] = 0;
			p = x + 1;
			r = i + 3;
			while (city[p] != 0)
			{
				if (city[p] == str[i] || city[p] + 32 == str[i])
				{
					str[r] = '*';
					r++;
					str[r] = ',';
					str[r + 1] = 0;
				}
				p++;
			}
			if (i + 3 < r)
				i = r + 1;
			else
				i = i + 4;
		}
		x++;
	}
	str[r] = 0;
	return (str);
}
