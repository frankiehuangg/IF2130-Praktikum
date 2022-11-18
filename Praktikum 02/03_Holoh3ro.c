void Holoh3ro(char* input)
{
	int num1, num2;
	int amt = sscanf(input, "%d %d", &num1, &num2);

	if (amt <= 1)
		illegal_move();

	if (num1 > 7)
		illegal_move();

	switch(num1)
	{
	case 0:
		if (num2 != -908)
			illegal_move();
	case 1:
		if (num2 != -1816)
			illegal_move();
	case 2:
		if (num2 != -1416)
			illegal_move();
	case 3:
		illegal_move();
	case 4:
		illegal_move();
	case 5:
		illegal_move();
	case 6:
		illegal_move();
	case 7:
		illegal_move();
	}
}