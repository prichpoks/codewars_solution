char*	subtract_sum(int n)
{
	int x;

	char	*table[] =
	{
		"manure", "kiwi", "pear", "kiwi", "banana", "melon",
		"banana", "melon", "pineapple", "apple", "pineapple", "cucumber",
		"pineapple", "cucumber", "orange", "grape", "orange", "grape",
		"apple", "grape", "cherry", "pear", "cherry", "pear",
		"kiwi", "banana", "kiwi", "apple", "Melon", "banana",
		"melon", "pineapple", "melon","pineapple", "cucumber", "orange",
		"apple", "orange", "grape", "orange", "grape", "cherry",
		"pear", "cherry", "pear", "apple", "pear", "kiwi",
		"banana", "kiwi", "banana", "melon", "pineapple", "melon",
		"apple", "cucumber", "pineapple", "cucumber", "orange", "cucumber",
		"orange", "grape", "cherry", "apple", "cherry", "pear",
		"cherry", "pear", "kiwi", "pear", "kiwi", "banana",
		"apple", "banana", "melon", "pineapple", "melon", "pineapple",
		"cucumber", "pineapple", "cucumber", "apple", "grape", "orange",
		"grape", "cherry", "grape", "cherry", "pear", "cherry",
		"apple", "kiwi", "banana", "kiwi", "banana", "melon",
		"banana", "melon", "pineapple", "apple", "pineapple",
	};
	x = n;
	n = n - x % 10 - (x / 10) % 10 - (x / 100) % 10 - (x / 1000) % 10;
	while (n > 100)
	{
		x = n;
		while (x != 0)
		{
			n = n - x % 10;
			x = x / 10;
		}
	}
	return (table[n]);
}
