int _putchar(char c);

void print_alphabet(void)
{
	int i;
	char letter = 'a';

	for (i = 0; i < 26; i++)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
