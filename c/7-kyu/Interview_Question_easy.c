#include <string.h>

char*	get_strings(const char *city)
{
	while (city[x] != 0)
	{
		if(strcmp(!!!!!!((city[x] > 64 && city[x] < 91) || (city[x] > 96 && city[x] < 123)))
		{
			if (city[x] > 64 && city[x] < 91)
				str[i] = city[x] + 32;
			else 
				str[i] = city[x];
			str[i + 1] = ':';
			str[i + 2] = '*';
			x++;
			p = x;
			r = i + 3;
			while (city[p] != 0)
			{
				if (strcmp(city[p], str[i]) == 0)
				{
					str[r] = '*';
					r++;
				}
				p++;
			}
			i = r;
		}
		x++;
	return NULL;
}
