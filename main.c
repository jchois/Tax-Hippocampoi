#include "hippocampoi.h"

int main(void)
{
	optionSelector();
	return (0);
}

void optionSelector(void)
{
	int option;

	printf("==============================\n");
	printf("=         HIPPOCAMPOI        =\n");
	printf("==============================\n");
	printf("Select an option:\n");
	printf("1 - List taxis.\n");
	printf("2 - Taxi service.\n");
	printf("3 - Request for taxis.\n");
	printf("4 - Exit\n");
	printf(">>> ");
	scanf("%d", &option);
        slct(option);
	printf("==============================\n");
	printf("==============================\n");
}

void slct(int opt)
{
	switch (opt)
	{
	case 1:
		printf(">>> Option 1 selected.\n");
		break;
	case 2:
		printf(">>> Option 2 selected.\n");
		break;
	case 3:
		printf(">>> Option 3 selected.\n");
		break;
	case 4:
		printf (">>> Program is over.\n");
		exit(1);
	default:
		printf(">>> Please select a valid option.\n");
		optionSelector();
	}
}
