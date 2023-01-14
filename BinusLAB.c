#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

void lab01(), lab02(), lab03(), lab04(), lab05(), crud();

void crud11();

int main() { crud11(); return 0; }

void lab01()
{
	int i; system("cls");
	printf("Simple Input\\Output Program\n");
	printf("===========================\n");
	printf("Welcome to \"Algorithm and Programming\"\n");
	printf("======================================\n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
	char name[101]; printf("Enter your name: "); gets(name);
	int age; 		printf("Enter your age : "); scanf("%d", &age);
	for (i = 0; i < strlen(name) + 4; i++) printf("=");
	printf("\nHi, %s\n", name);
	for (i = 0; i < strlen(name) + 4; i++) printf("=");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
	double first, second;
	printf("\n\n");
	printf("Enter the first number : "); scanf("%lf", &first);
	printf("Enter the second number: "); scanf("%lf", &second);
	for (i = 0; i < 24; i++) printf("=");
	printf("\nArithmetic calculations:\n");
	printf("           %.2lf + %.2lf = %.2lf\n", first, second, first + second);
	printf("           %.2lf - %.2lf = %.2lf\n", first, second, first - second);
	printf("           %.2lf * %.2lf = %.2lf\n", first, second, first * second);
	printf("           %.2lf / %.2lf = %.2lf\n", first, second, first / second);
	printf("           %.2lf %% %.2lf = %d\n", first, second, (int)first % (int)second);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
}

void lab02()
{
	int input; double value; int *y = &input; system("cls");
	printf("Operators\n");
	printf("=========\n");
	printf("Input your Favorite Number: "); scanf("%d", &input);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
	value = 2 * input + 3; printf("Result 1 = %d\n", (int)value);
	value = value / 3 - 4; printf("Result 2 = %.2lf\n", value);
	value *= value; printf("Result 3 = %.2lf\n", value);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
	printf("Y = X\n");
	printf(*y >= 10 ? "Y is bigger or equals 10\n" : "Y is smaller than 10\n");
	printf(((int)(*y)) % 2 == 0 ? "Y is even\n" : "Y is odd\n");
	printf("\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
}

void lab03()
{
	int i, j; system("cls");
	while (1)
	{
		printf("Shape Printer\n");
		printf("=============\n");
		printf("1. Rectangle\n");
		printf("2. Right Triangle (90 degree Triangle)\n");
		printf("3. Equilateral Triangle\n");
		printf("4. Exit\n");
		printf(">> ");
		char input = getch(); system("cls");
		switch (input)
		{
			case '1':
				{
					int width = 0, height = 0;
					while (width <= 0)
					{
						printf("Input Rectangle\'s Width [must be more than 0]: ");
						scanf("%d", &width);
					}
					while (height <= 0)
					{
						printf("Input Rectangle\'s Height [must be more than 0]: ");
						scanf("%d", &height);
					}
					printf("Result:\n");
					for (i = 0; i < height; i++)
					{
						for (j = 0; j < width; j++) { printf("*"); }
						printf("\n");
					}
				}
				break;
			case '2':
				{
					int size = 0;
					while (size <= 0)
					{
						printf("Input Right Triangle\'s Size [must be more than 0]: ");
						scanf("%d", &size);
					}
					printf("Result:\n");
					for (i = 0; i < size; i++)
					{
						for (j = 0; j < size; j++)
						{
							printf(j >= size - (i + 1) ? "*" : " ");
						}
						printf("\n");
					}
				}
				break;
			case '3':
				{
					int size = 0;
					while (size <= 0 || size % 2 == 0)
					{
						printf("Input Equilateral Triangle\'s Size [must be more than 0 and odd number]: ");
						scanf("%d", &size);
					}
					printf("Result:\n");
					for (i = 0; i < (size + 1) / 2; i++)
					{
						for (j = 0; j < ((size + 1) / 2) + i; j++)
						{
							printf(j >= (size / 2) - i ? "*" : " ");
						}
						printf("\n");
					}
				}
				break;
			case '4':
				printf("Thank you for using this app!");
				exit(0); break;
			default:
				printf("You must input a valid menu number!");
				break;
		}
		printf("\n");
	}
}

void lab04()
{
	int item = 0, i, j;
	while (1)
	{
		system("cls");
		char name[20][20]; long long int price[20];
		printf("My Wishlist                                 \n");
		printf("============================================\n");
		printf("| No | Item Name            | Item Price   |\n");
		printf("============================================\n");
		if (item == 0) printf("| Need you to fill it :)                   |\n");
		else
		{
			for (i = 0; i < item; i++)
			{
				printf("| %02d | %-20s | Rp.%-9d |\n", i + 1, name[i], price[i]);
			}
		}
		printf("============================================\n");
		printf("1. Add Item                                 \n");
		printf("2. Delete Item                              \n");
		printf("3. Exit                                     \n");
		printf(">> "); char input = getch();
		switch (input)
		{
			case '1':
				printf("Input item name : "); gets(name[i]);
				printf(">> Input item price: "); scanf("%lld", &price[i]);
				i++; getchar();
				break;
			case '2':
				if (item == 0) { printf("There is no data! Please add some!"); break; }
				int number;
				printf("Input item number: "); scanf("%d", &number);
				for (i = number; i < item; i++)
				{
					strcpy(name[i - 1], name[i]); price[i - 1] = price[i];
				}
				item--; getchar();
				break;
			case '3':
				printf("Thank you for using this app!");
				exit(0); break;
			default:
				printf("You must input a valid menu number!");
				break;
		}
		printf("\n");
	}
}

void lab05()
{
	int i, index = 0, result[5];
	char data[5][3][20] = {
							{ "christ0208", "Christopher", "chris@gmail.com" },
							{ "jordywa   ", "Jordy      ", "jordy@gmail.com" },
							{ "haku      ", "Haku       ", "haku@gmail.com " },
							{ "elior     ", "Eleanor    ", "el@gmail.com   " },
							{ "cleo      ", "Cleo Deus  ", "cleo@gmail.com " }
						  };
	while (1)
	{
		// system("cls");
		int count = 0, members[5];
		printf("Friendster CLI   \n");
		printf("=================\n");
		printf("1. Add New Friend\n");
		printf("2. Unfriend      \n");
		printf("3. Exit          \n");
		printf(">> "); char input = getch();
		switch (input)
		{
			case '1':
				printf("Enter a keyword to search a friend [must not be empty]: ");
				char keyword[21]; scanf("%s", keyword);
				for (i = 0; i < 5; i++)
				{
					if (strcmpi(data[i][0], keyword) == 0 || strstr(strlwr(data[i][1]), strlwr(keyword)) != NULL)
					{
						printf("%d. | %-10s | %-11s | %-15s |\n", count + 1, data[i][0], data[i][1], data[i][2]);
						members[count] = i; count++;
					}
				}
				if (count == 1)
				{
					printf("Do you want to add this user as your friend? [yes/no]: ");
					char status[5]; scanf("%s", status);
					if (strcmpi(status, "yes") == 0) { result[index] = members[0]; index++; }
				}
				else if (count > 1)
				{
					printf("Pick number which friend you want to add [type \'0\' to cancel add friend]: ");
					int value; scanf("%d", &value);
					if (value != 0) { result[index] = members[value - 1]; index++; }
				}
				break;
			case '2':
				printf("Current friend list:\n");
				for (i = 0; i < index; i++)
				{
					printf("%d. | %-10s | %-11s | %-15s |\n", i + 1, data[result[i]][0], data[result[i]][1], data[result[i]][2]);
				}
				printf("Enter the index number to remove friend [type \'0\' to cancel]: ");
				int value; scanf("%d", &value);
				if (value != 0)
				{
					for (i = value; i < index; i++) result[i - 1] = result[i];
					index--;
				}
				break;
			case '3':
				printf("Thank you for using this app!");
				exit(0); break;
			default:
				printf("You must input a valid menu number!");
				break;
		}
		printf("\n");
	}
}

void crud11()
{
	srand(time(0));
	int input = 0, index = 0;
	char chars[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ID[1000][30] = {}, NAME[1000][30] = {}, TYPE[1000][30] = {}, PRICE[1000][30] = {};
	while (input != 4)
	{
		system("cls");
		printf(" _                                     \n");
		printf("| |                                    \n");
		printf("| |      ___  _ _ _  ___  ___  ____    \n");
		printf("| |     / _ \\| | | |/___)/ _ \\|  _ \\\n");
		printf("| |____| |_| | | | |___ | |_| | | | |  \n");
		printf("|_______)___/\\_____(___/ \\___/|_| |_|\n");
		printf("\n");
		if (!index) printf("No products...\n");
		else
		{
			printf("+-----+------------+---------------------------+-----------------+----------------------+\n");
			printf("| No. | ID         | Name                      | Type            | Price                |\n");
			printf("+-----+------------+---------------------------+-----------------+----------------------+\n");
			for (int i = 0; i < index; i++)
			{
				printf("| %03d | %-10s | %-25s | %-15s | IDR%17s |\n", i + 1, ID[i], NAME[i], TYPE[i], PRICE[i]);
			}
			printf("+-----+------------+---------------------------+-----------------+----------------------+\n");
		}
		printf("\n");
		printf("1. Create Product\n");
		printf("2. Update Product\n");
		printf("3. Delete Product\n");
		printf("4. Exit          \n");
		printf(">> "); scanf("%d", &input); getchar();
		switch (input)
		{
			case 1:
				{
					system("cls"); int status = 0;
					printf("+-------------+\n");
					printf("| Create Menu |\n");
					printf("+-------------+\n");
					printf("\n");
					while (strlen(NAME[index]) < 1)
					{
						printf("Product Name [not empty]: "); gets(NAME[index]);
					}
					while (strcmp(TYPE[index], "Food") && strcmp(TYPE[index], "Beverage") && strcmp(TYPE[index], "Cosmetic") && strcmp(TYPE[index], "Others"))
					{
						printf("Product Type [ Food | Beverage | Cosmetic | Others ] (case sensitive): "); gets(TYPE[index]);
					}
					while (atoi(PRICE[index]) < 1 || !status)
					{
						printf("Product Price [more than 0]: "); gets(PRICE[index]);
						for (int i = 0; i < strlen(PRICE[index]); i++)
						{
							if (!isdigit(PRICE[index][i]))
							{
								status = 0; break;
							}
							else status = 1;
						}
					}
					for (int i = 0; i < 10; i++) ID[index][i] = chars[rand() % 62];
					index++;
					printf("Create Product Success!\n");
					printf("Press enter to continue..."); getchar();
				}
				break;
			case 2:
				{
					if (index > 0)
					{
						system("cls"); int status = 0, choice = 0;
						printf("+-------------+\n");
						printf("| Update Menu |\n");
						printf("+-------------+\n");
						printf("\n");
						printf("+-----+------------+---------------------------+-----------------+----------------------+\n");
						printf("| No. | ID         | Name                      | Type            | Price                |\n");
						printf("+-----+------------+---------------------------+-----------------+----------------------+\n");
						for (int i = 0; i < index; i++)
						{
							printf("| %03d | %-10s | %-25s | %-15s | IDR%17s |\n", i + 1, ID[i], NAME[i], TYPE[i], PRICE[i]);
						}
						printf("+-----+------------+---------------------------+-----------------+----------------------+\n");
						while (choice < 1 || choice > index)
						{
							printf("Input Product Number [1..%d]: ", index); scanf("%d", &choice); getchar();
						}
						strcpy(NAME[choice - 1], ""); strcpy(TYPE[choice - 1], ""); strcpy(PRICE[choice - 1], "");
						while (strlen(NAME[choice - 1]) < 1)
						{
							printf("Product Name [not empty]: "); gets(NAME[choice - 1]);
						}
						while (strcmp(TYPE[choice - 1], "Food") && strcmp(TYPE[choice - 1], "Beverage") && strcmp(TYPE[choice - 1], "Cosmetic") && strcmp(TYPE[choice - 1], "Others"))
						{
							printf("Product Type [ Food | Beverage | Cosmetic | Others ] (case sensitive): "); gets(TYPE[choice - 1]);
						}
						while (atoi(PRICE[choice - 1]) < 1 || !status)
						{
							printf("Product Price [more than 0]: "); gets(PRICE[choice - 1]);
							for (int i = 0; i < strlen(PRICE[choice - 1]); i++)
							{
								if (!isdigit(PRICE[choice - 1][i]))
								{
									status = 0; break;
								}
								else status = 1;
							}
						}
						printf("Update Product Success!\n");
						printf("Press enter to continue..."); getchar();
					}
				}
				break;
			case 3:
				{
					if (index > 0)
					{
						system("cls"); int status = 0, choice = 0;
						printf("+-------------+\n");
						printf("| Delete Menu |\n");
						printf("+-------------+\n");
						printf("\n");
						printf("+-----+------------+---------------------------+-----------------+----------------------+\n");
						printf("| No. | ID         | Name                      | Type            | Price                |\n");
						printf("+-----+------------+---------------------------+-----------------+----------------------+\n");
						for (int i = 0; i < index; i++)
						{
							printf("| %03d | %-10s | %-25s | %-15s | IDR%17s |\n", i + 1, ID[i], NAME[i], TYPE[i], PRICE[i]);
						}
						printf("+-----+------------+---------------------------+-----------------+----------------------+\n");
						while (choice < 1 || choice > index)
						{
							printf("Input Product Number [1..%d]: ", index); scanf("%d", &choice); getchar();
						}
						for (int i = choice - 1; i < index; i++)
						{
							strcpy(ID[i], ID[i + 1]); strcpy(NAME[i], NAME[i + 1]);
							strcpy(TYPE[i], TYPE[i + 1]); strcpy(PRICE[i], PRICE[i + 1]);
						}
						index--;
						printf("Delete Product Success!\n");
						printf("Press enter to continue..."); getchar();
					}
				}
				break;
			default: break;
		}
	}
	printf("Thank you for using this app!\n");
}

void crud()
{
	int choice = 0, item = 0, i;
	char ID[1000][30] = {}, NAME[1000][30] = {};
	double PRICE[1000] = {};
	while (choice != 4)
	{
		system("cls");
		printf("Electronics!              \n");
		printf("==========================\n");
		printf("1. Insert Electronic Stock\n");
		printf("2. Update Electronic      \n");
		printf("3. Sell Electronic        \n");
		printf("4. Exit                   \n");
		printf(">> "); scanf("%d", &choice); getchar();
		switch (choice)
		{
			case 1:
				{
					while (strlen(ID[item]) != 3 || !isdigit(ID[item][0]) || !isdigit(ID[item][1]) || !isdigit(ID[item][2]))
					{
						printf(">> Input Item Id [must be numeric with exactly 3 digits]: "); gets(ID[item]);
					}
					while (strlen(NAME[item]) < 5 || strlen(NAME[item]) > 25)
					{
						printf(">> Input Item name [5-25 characters]: "); gets(NAME[item]);
					}
					while (PRICE[item] <= 0 || PRICE[item] > 5000000)
					{
						printf(">> Input Item price [not more than 5M]: "); scanf("%lf", &PRICE[item]); getchar();
					}
					item++;
					printf("Item successfully inserted!\n");
					printf("Press any key to continue..."); getch();
					printf("\n");
				}
				break;
			case 2:
				{
					if (!item)
					{
						printf("There is no item yet...   \n");
						printf("Press any key to continue..."); getch();
						printf("\n");
					}
					else
					{
						printf("=============================================================\n");
						printf("| No. | Id     | Name                      | Price          |\n");
						printf("=============================================================\n");
						for (i = 0; i < item; i++)
						{
							printf("| %03d | ETC%s | %-25s | Rp. %-10.2lf |\n", i + 1, ID[i], NAME[i], PRICE[i]);
						}
						printf("=============================================================\n");
						int input = -1;
						while (input < 0 || input > item)
						{
							printf("Which item you want to update? [0 to exit] [1..%d]: ", item);
							scanf("%d", &input); getchar();
						}
						if (input != 0)
						{
							strcpy(ID[input - 1], ""); strcpy(NAME[input - 1], ""); PRICE[input - 1] = 0;
							while (strlen(ID[input - 1]) != 3 || !isdigit(ID[input - 1][0]) || !isdigit(ID[input - 1][1]) || !isdigit(ID[input - 1][2]))
							{
								printf(">> Input Item Id [must be numeric with exactly 3 digits]: "); gets(ID[input - 1]);
							}
							while (strlen(NAME[input - 1]) < 5 || strlen(NAME[input - 1]) > 25)
							{
								printf(">> Input Item name [5-25 characters]: "); gets(NAME[input - 1]);
							}
							while (PRICE[input - 1] <= 0 || PRICE[input - 1] > 5000000)
							{
								printf(">> Input Item price [not more than 5M]: "); scanf("%lf", &PRICE[input - 1]); getchar();
							}
							printf("Item successfully updated!\n");
							printf("Press any key to continue..."); getch();
							printf("\n");
						}
					}
				}
				break;
			case 3:
				{
					if (!item)
					{
						printf("There is no item yet...   \n");
						printf("Press any key to continue..."); getch();
						printf("\n");
					}
					else
					{
						printf("=============================================================\n");
						printf("| No. | Id     | Name                      | Price          |\n");
						printf("=============================================================\n");
						for (i = 0; i < item; i++)
						{
							printf("| %03d | ETC%s | %-25s | Rp. %-10.2lf |\n", i + 1, ID[i], NAME[i], PRICE[i]);
						}
						printf("=============================================================\n");
						int input = -1; char choice[5] = {};
						while (input < 0 || input > item)
						{
							printf("Which item you want to sell? [0 to exit] [1..%d]: ", item);
							scanf("%d", &input); getchar();
						}
						if (input != 0)
						{
							srand(time(NULL));
							if ((rand() % 100) + 1 <= 30)
							{
								printf("##########################\n");
								printf("Customer got discount 25%%!\n");
								printf("##########################\n\n");
								PRICE[input - 1] *= 0.75;
							}
							printf("ETC%s Item Detail\n", ID[input - 1]);
							printf("====================\n");
							printf("Item Name : %s\n", NAME[input - 1]);
							printf("Item Price: %.2lf\n", PRICE[input - 1]);
							printf("Are you sure you want to sell this? [yes|no]: "); gets(choice);
							if (strcmpi(choice, "yes") == 0)
							{
								for (i = input; i <= item; i++)
								{
									strcpy(ID[i - 1], ID[i]);
									strcpy(NAME[i - 1], NAME[i]);
									PRICE[i - 1] = PRICE[i];
								}
								item--;
								printf("Item successfully sold!\n");
							}
							else if (strcmpi(choice, "no") == 0)
							{
								printf("Cancel selling!\n");
							}
							printf("Press any key to continue..."); getch();
							printf("\n");
						}
					}
				}
				break;
			default: break;
		}
	}
	printf("Thank you for using this app!\n");
}