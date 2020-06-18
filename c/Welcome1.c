#include <stdlib.h>
char*	greet(const char *language)
{
	char	*str;
	int	x;
	int	n;

	str = (char*)malloc(sizeof(char) * 10);
	char	*arrayl[] =
	{
		"english", "czech", "danish", "dutch", "estonian",
		"finnish", "flemish", "french", "german", "irish",
		"italian", "latvian", "lithuanian", "polish", "spanish",
		"swedish", "welsh"
	};
	char	*arrayg[] = 
	{
		"Welcome", "Vitejte", "Velkomst", "Welkom", "Tere tulemast",
		"Tervetuloa", "Welgekomen", "Bienvenue", "Willkommen", "Failte",
	       	"Benvenuto", "Gaidits", "Laukiamas", "Witamy", "Bienvenido", 
		"Valkommen", "Croeso"
	};
	n = 0;
	while (n < 17)
	{
		x = 0;
		while (language[x] == arrayl[n][x] && language[x] != 0)
			x++;
		if (language[x] == 0 && arrayl[n][x] == 0)
			return (arrayg[n]);
		n++;
	}
	return ("Welcome");
}
