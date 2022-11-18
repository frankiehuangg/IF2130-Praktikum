#include <stdio.h>

int func4(int eax, int edx, unsigned ecx)
{
	int esi = ecx;
	esi = esi - edx;

	int ebx;
	if (esi < 0)
		ebx = -1;
	else
		ebx = 0;

	ebx = ebx + esi;
	ebx = ebx / 2;
	ebx = ebx + edx;

	if (ebx > eax)
	{
		ecx = ebx-1;
		eax = func4(eax,edx,ecx);
		ebx = ebx + eax;
	}
	else if (ebx < eax)
	{
		edx = ebx + 1;
		eax = func4(eax,edx,ecx);
		ebx = ebx + eax;
	}

	printf("%d %d\n", ebx, eax);

	eax = ebx;

	return eax;
}