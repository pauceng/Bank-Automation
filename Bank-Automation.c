#include "stdio.h"
#include "stdlib.h"
#include "math.h"
//
int choice = 0;

void CustomerTable(int );
void GeneralMenu(int );

struct customer
{
	char name;
	char surname;
	char adress;
	char email;
	int tephone[10];
}table[200];

main() {
	printf("Wellcome to the BANK AUTOMATION\n");
	GeneralMenu();
	printf("What is your choice ? :\n", );
	scanf("%d" ,&choice);
	GeneralMenu(choice);
}
//
void GeneralMenu(int choice) {
	switch (choice) {
		case 1:
			printf("\t1.User Table\n"); break; 
			CustomerTable();
		case 2:
			printf("\t2.Customer Table\n"); break; 
		case 3:
			printf("\t3.Account Table\n"); break; 
		case 4:
			printf("\t4.Transfer Money\n"); break;
		case 5:
			printf("\t5.> EXIT <\n"); break; 
	}
}
//
void CustomerTable() {
	printf("Wellcome You now in Customer Table\n");
}