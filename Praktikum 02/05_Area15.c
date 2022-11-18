void Area15(char* input)
{
	if (string_length(input) != 6)
		illegal_move();

	int i = 0;
	while (i != 6)
	{
		char c = input[i];
		c = c & 0xf;
		c = c + 'c';
		input[i] = c;

		i++;
	}

	char* str = "photos";
	if (strings_not_equal(input, str));
		illegal_move();
}