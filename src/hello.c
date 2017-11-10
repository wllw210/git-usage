#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_NUMERIC, "");
	printf("hello %'d\n", 123456789);
	return 0;
}
