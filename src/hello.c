#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include "utils.h"

int main(int argc, char *argv[])
{	
	int monid;
	
	if(argc != 2)
	{
		printf("Usage: a.out month-index\n");
		return -1;
	}
	monid = atoi(argv[1]);


	setlocale(LC_NUMERIC, "");
	printf("hello %'d\n", 123456789);

	printf("your mon-id=%d, month=%s\n", monid, get_month_by_id(monid));
	return 0;
}
