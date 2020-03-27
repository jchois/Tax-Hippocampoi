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
	printf("==============================\n");
	printf("==============================\n");
}
