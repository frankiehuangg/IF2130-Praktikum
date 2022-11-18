#include <stdio.h>

int num[13] = {286, 150, 499, 135, 239, 323, 743, 822, 741, 184, 683, 952, 0};

int fun7(int a, int b)
{
	// printf("%d %d\n", a, num[b]);

	if (b > 12)
		return -1;

	int v = 0;
	if (num[b] > a)
	{
		// printf("a");
		v = fun7(a, 2*b+1);
		v = 2*v;
	}
	else if (num[b] != a)
	{
		// printf("b");
		v = fun7(a, 2*b+2);
		v = 2*v + 1;
	}

	// printf("%d\n", v);

	return v;
}

// 1 2 done

int main()
{
	// int a; scanf("%d", &a);
	// fun7(239,0);

	for (int i = 0; i <= 0x7e8; i++)
	{
		// printf("%d\n", i);
		if (fun7(i,0) == 2)
			printf("%d %d\n",i, fun7(i,0));
	}
}

// void Tanigox_Secret_Lair()
// {
// 	char* input;
// 	user_input(input);

// 	fun7(input,num[0]);
// }


// 0 1 2
// 1 3 4
// 2 5 6

