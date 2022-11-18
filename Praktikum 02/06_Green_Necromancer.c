void Green_Necromancer(char* input)
{
	int val[6];
	read_six_numbers(input, &val);

	int i = 1;
	while (i < 5)
	{
		if (val[i] > 6)
			illegal_move();

		int j = i+1;
		while (j < 6)
			if (val[i] == val[j])
				illegal_move();

		i++;
	}

	int num[6] = [0x336, 0x2e5, 0xb8, 0x2ab, 0x3b8, 0x171];

	i = 0;
	while (i < 6)
		if (num[val[i]] > num[val[i+1]])
			illegal_move();
}