void Holoro(char* input)
{
	int val[6];
	int i = 0;

	read_six_numbers(input, &val);

	if (val[i] != 163)
		illegal_move();

	while (i < 5)
	{
		int x = (val[i] / 2) ^ val[i];
		if (val[i+1] != x)
			illegal_move();
		i++;
	}
}