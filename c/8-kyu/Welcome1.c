#include <string.h>

const char*	greet(char* language)
{
	int	i;
	i = 0;
	char* database[][2] =
	{
		{"english", "Welcome"},
		{"czech", "Vitejte"},
		{"danish", "Velkomst"},
		{"dutch", "Welkom"},
		{"estonian", "Tere tulemast"},
		{"finnish", "Tervetuloa"},
		{"flemish", "Welgekomen"},
		{"french", "Bienvenue"},
		{"german", "Willkommen"},
		{"irish", "Failte"},
		{"italian", "Benvenuto"},
		{"latvian", "Gaidits"},
		{"lithuanian", "Laukiamas"},
		{"polish", "Witamy"},
		{"spanish", "Bienvenido"},
		{"swedish", "Valkommen"},
		{"welsh", "Croeso"}
	};
	if ( language )
	{
		while ( i < 17)
		{
			if ( !strcmp( language, database[i][0] ) )
				return database[i][1];
			i++;
		}
	}
	return database[0][1];
}
