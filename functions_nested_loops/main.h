int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	int i;
	char letter = 'a';

	for (i = 0; i < 26; i++)
	{
		_putchar(letter);
		letter++;
	}
}
