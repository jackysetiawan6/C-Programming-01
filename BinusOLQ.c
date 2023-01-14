#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//AddOn Functions
int cmpfunc(const void * a, const void * b) { return ( *(int*)a - *(int*)b ); }

//15 Agustus 2022
void prob1A(), prob1B(), prob1C(), prob1D(), prob1E(), prob1F();

//22 Agustus 2022
void prob2A(), prob2B(), prob2C(), prob2D(), prob2E(), prob2F();

//29 Agustus 2022
void prob3A(), prob3B(), prob3C(), prob3D(), prob3E(), prob3F();

//05 Septembber 2022
void prob4A(), prob4B(), prob4C(), prob4D(), prob4E(), prob4F();

//12 September 2022
void prob5A(), prob5B(), prob5C(), prob5D(), prob5E(), prob5F();

int main() { prob5F(); return 0; }

void prob1A()
{
	printf("Hello Binusian!\n");
}

void prob1B()
{
	char input[101]; gets(input);
	
	printf("Happy Birthday to %s.\n", input);
}

void prob1C()
{
	char first[21], second[21], third[21];
	
	scanf("%s %s %s", first, second, third);
	
	printf("%s %s %s\n", third, second, first);
}

void prob1D()
{
	int first, second;
	
	scanf("%d %d", &first, &second);
	
	printf("%d\n", first % second);
}

void prob1E()
{
	int first, second, lines;
	
	scanf("%d", &lines);
	
	for (lines = lines; lines > 0; lines--)
	{
		scanf("%d %d", &first, &second);
	
		printf("%d\n", (first / second) << second);
	}
}

void prob1F()
{
	int first, second, lines; char operation, equal;
	
	for (lines = 3; lines > 0; lines--)
	{
		scanf("%d %c %d %c", &first, &operation, &second, &equal);
	
		printf("%d\n", first + second);
	}
}

void prob2A()
{
	int a, b, c, d;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	printf((long long int)(a * b) == c - d ? "True\n" : "False\n");
}

void prob2B()
{
	int a, b, c; scanf("%d %d %d", &a, &b, &c);
	
	if (a > b && a > c)
	{
		printf("Daging\n%s", b > c ? "Sayur\nTelur\n" : "Telur\nSayur\n");
	}
	else if (b > a && b > c)
	{
		printf("Sayur\n%s", a > c ? "Daging\nTelur\n" : "Telur\nDaging\n");
	}
	else
	{
		printf("Telur\n%s", a > b ? "Daging\nSayur\n" : "Sayur\nDaging\n");
	}
}

void prob2C()
{
	int input, a, b, result, number = 1;
	
	scanf("%d", &input); int value = input;
	
	int views[input]; while (input-- > 0) { scanf("%d", &views[input]); }
	
	scanf("%d", &input);
	
	while (input-- > 0)
	{
		scanf("%d %d", &a, &b); result = 0;
		
		while (a <= b) { result += views[value - a]; a++; }
		
		printf("Case #%d: %d\n", number, result); number++;
	}
}

void prob2D()
{
	int input, i, j; scanf("%d", &input);
	
	for (i = 0; i < input; i++)
	{
		for (j = 0; j < input; j++) printf("*");
		
		printf("\n");
	}
}

void prob2E()
{
	int number, i;	scanf("%d", &number);
	
	int jojo, lili, bibi, value; double sum = 0;
	
	scanf("%d %d %d", &jojo, &lili, &bibi);
	
	sum += jojo + lili + bibi;
	
	for (i = 0; i < number; i++)
	{
		scanf("%d", &value); sum += value;
	}
	
	printf(jojo >= sum / (3 + number) ? "Jojo lolos\n" : "Jojo tidak lolos\n");
	
	printf(lili >= sum / (3 + number) ? "Lili lolos\n" : "Lili tidak lolos\n");
	
	printf(bibi >= sum / (3 + number) ? "Bibi lolos\n" : "Bibi tidak lolos\n");	
}

void prob2F()
{
	int input, i, j, k, value; scanf("%d", &input);
	
	for (i = 1; i <= input; i++)
	{
		scanf("%d", &value); printf("Case #%d:\n", i);
		
		for (j = 0; j < value; j++)
		{
			for (k = 0; k < value; k++)
			{
				printf(k > value - j - 2 ? (k + j) % 2 == 0 ? "*" : "#" : " ");
			}
			printf("\n");
		}
	}
}

void prob3A()
{
	int row, col, i, j; scanf("%d %d", &row, &col); int values[row][col];
	
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++) scanf("%d", &values[i][j]);
	}
	int number, a, b, c; scanf("%d", &number);
	
	for (i = 0; i < number; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		
		values[a - 1][b - 1] = c;
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d%s", values[i][j], j == col - 1 ? "\n" : " ");
		}
	}
}

void prob3B()
{
	int input, i, temp; scanf("%d", &input);
	
	int position[input], values[input];
	
	for (i = 0; i < input; i++) scanf("%d", &position[i]);
	
	for (i = 0; i < input; i++) scanf("%d", &values[position[i]]);
	
	for (i = 0; i < input; i++)
	{
		printf("%d%s", values[i], i == input - 1 ? "\n" : " ");
	}
}

void prob3C()
{
	int input, i, j; scanf("%d", &input); int values[input];
	
	for (i = 0; i < input; i++) scanf("%d", &values[i]);
	
	int number; scanf("%d", &number);
	
	for (i = 0; i < number; i++)
	{
		int a, b; scanf("%d %d", &a, &b);
		
		values[a - 1] = b;
		
		printf("Case #%d: ", i + 1);
		
		for (j = 0; j < input; j++) printf("%d%s", values[j], j == input - 1 ? "\n" : " ");
	}
}

void prob3D()
{
	long long int input, i, j; scanf("%lld", &input);
	
	for (i = 0; i < input; i++)
	{
		long long int number, sum = 0, count = 0; scanf("%lld", &number);
		
		long long int values[number];
		
		for (j = 0; j < number; j++) { scanf("%lld", &values[j]); sum += values[j]; }
		
		for (j = 0; j < number; j++) { count = values[j] >= sum ? count + 1 : count; }
		
		printf("Case #%lld: %lld\n%lld\n", i + 1, sum, count);
	}
}

void prob3E()
{
	int freq[200005], value, i, j;

    int input; scanf("%d", &input);
    
    for (i = 1; i <= input; i++)
	{
        int number, printed = 0, max = -1; scanf("%d", &number);
        
		memset(freq, 0, sizeof(freq));
		
        for(j = 0; j < number; j++)
		{
            scanf("%d", &value);
            
			freq[value]++;
            
			if (max < freq[value]) max = freq[value];
        }
        printf("Case #%d: %d\n", i, max);
        
        for (j = 1; j <= 200000; j++)
		{
            if (max == freq[j])
			{
                printf("%s%d", printed == 0 ? "" : " ", j);
                
				printed++;
            }
        }
        printf("\n");
    }
}

void prob3F()
{
	int input, value, i, j; scanf("%d", &input);
	
	for (i = 0; i < input; i++)
	{
		int number; scanf("%d", &number); int values[number];
		
		for (j = 0; j < number; j++) scanf("%d", &values[j]);
		
		qsort(values, number, sizeof(int), cmpfunc);
		
		printf("Case #%d: %d\n", i + 1, values[number - 1] + values[number - 2]);
	}
}

void prob4A()
{
	int input, i, j; scanf("%d", &input); getchar();
	
	for (i = 0; i < input; i++)
	{
		char string[10001]; gets(string);
		
		printf("Case %d: ", i + 1);
		
		for (j = strlen(string) - 1; j >= 0; j--) printf("%d", string[j] % 2);
		
		printf("\n");
	}
}

void prob4B()
{
	int input, i, j; scanf("%d", &input); getchar();
	
	for (i = 0; i < input; i++)
	{
		char string[10001]; gets(string);
		
		printf("Case %d: ", i + 1);
		
		for (j = 0; j < strlen(string); j++) printf("%d%s", string[j], j == strlen(string) - 1 ? "" : "-");
		
		printf("\n");
	}
}

void prob4C()
{
	int input, i, j, k; scanf("%d", &input); getchar();
	
	for (i = 0; i < input; i++)
	{
		char string[10001]; gets(string);
		
		printf("Case #%d : ", i + 1);
		
		for (j = strlen(string) - 1; j >= 0; j--)
		{
			printf("%c", string[j]);
		}
		printf("\n");
	}
}

void prob4D()
{
	int input, number, i; scanf("%d %d", &input, &number); getchar();
	
	char string[1001]; gets(string);
	
	for (i = 0; i < number; i++)
	{
		int index; scanf("%d", &index);
		
		string[index] = (int)string[index] > 96 ? (char)(string[index] - 32) : (char)(string[index] + 32);
	}
	printf("%s\n", string);
}

void prob4E()
{
	int input, i, j; scanf("%d", &input); getchar();
	
	for (i = 0; i < input; i++)
	{
		int wrong = 0; char string[1001]; gets(string);
		
		for (j = 0; j < strlen(string); j++)
		{
			if (string[j] != string[strlen(string) - 1 - j])
			{
				printf("Case #%d: Nah, it\'s not a palindrome\n", i + 1);
				
				wrong = 1; break;
			}
		}
		printf(wrong == 1 ? "" : "Case #%d: Yay, it\'s a palindrome\n", i + 1);
	}
}

void prob4F()
{
	int i, j; char input[10001]; gets(input);
	
	char modifier[10][2] = {
							 {'I', '1'}, {'R', '2'}, {'E', '3'}, {'A', '4'}, {'S', '5'},
							 {'G', '6'}, {'T', '7'}, {'B', '8'}, {'P', '9'}, {'O', '0'}
						   };
	
	for (i = 0; i < strlen(input); i++)
	{
		for (j = 0; j < 10; j++)
		{
			input[i] = toupper(input[i]) == modifier[j][0] ? modifier[j][1] : toupper(input[i]);
		}
	}
	printf("%s\n", input);
}

void prob5A()
{
	char str1[21], str2[21], str3[21], str4[21], str5[21], str6[21];

	scanf("%s %s %s", str1, str2, str3);

	scanf("%s %s %s", str4, str5, str6);

	printf("%sszs %sszs %sszs\n", str1, str2, str3);

	printf("%sszs %sszs %sszs\n", str4, str5, str6);
}

void prob5B()
{
	char string[1000001]; gets(string); int occurences[26];
	
	memset(occurences, 0, sizeof(occurences));

	int i, vowel = 0, consonant = 0;

	for (i = 0; i < strlen(string); i++)
	{
		occurences[string[i] - 97]++;

		if (string[i] != ' ')
		{
			if ((string[i] == 'a' || string[i] == 'i' || string[i] == 'u' || string[i] == 'e' || string[i] == 'o') && occurences[string[i] - 97] == 1) vowel++;

			else if (occurences[string[i] - 97] == 1) consonant++;	
		}
	}
	printf("Vocal: %d\nConsonant: %d\n", vowel, consonant);
}

void prob5C()
{
	int i, j; char input[10001]; gets(input);
	
	char modifier[10][2] = {
							 {'1', 'I'}, {'2', 'R'}, {'3', 'E'}, {'4', 'A'}, {'5', 'S'},
							 {'6', 'G'}, {'7', 'T'}, {'8', 'B'}, {'9', 'P'}, {'0', 'O'}
						   };
	
	for (i = 0; i < strlen(input); i++)
	{
		for (j = 0; j < 10; j++)
		{
			input[i] = input[i] == modifier[j][0] ? tolower(modifier[j][1]) : tolower(input[i]);
		}
	}
	printf("%s\n", input);
}

void prob5D()
{
	int number, value, result = 0, i; scanf("%d", &number);
	
	int values[number + 1]; memset(values, 0, sizeof(values));

	for (i = 0; i < number * number; i++) { scanf("%d", &value); values[value]++; }

	for (i = 1; i < number + 1; i++) result = values[i] < number ? result + 1 : result;

	printf("%d\n", result);
}

void prob5E()
{
	int input, i, j; scanf("%d", &input); getchar();

	for (i = 0; i < input; i++)
	{
		char string[1001]; gets(string); int values[strlen(string)];

		for (j = 0; j < strlen(string); j++)
		{
			values[j] = (int)string[j];

			string[j] = string[j] >= 'U' ? 'U' : string[j] >= 'O' ? 'O' : string[j] >= 'I' ? 'I' : string[j] >= 'E' ? 'E' : 'A';

			values[j] -= (int)string[j];
		}
		printf("Case #%d:\n%s\n", i + 1, string);

		for (j = 0; j < strlen(string); j++) printf("%d", values[j]);

		printf("\n");
	}
}

void prob5F()
{
	int input, i, j; scanf("%d", &input);

	for (i = 0; i < input; i++)
	{
		int number; scanf("%d", &number); int values[2 * number];

		for (j = 0; j < 2 * number; j++) scanf("%d", &values[j]);

		printf("Case #%d:", i + 1);

		for (j = number; j < 2 * number; j++) printf(" %d", values[j - number] - values[j]);

		printf("\n");
	}
}