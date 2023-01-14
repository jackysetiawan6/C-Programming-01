#include <stdio.h>
#include <string.h>
#include <ctype.h>

//24 Agustus 2022
void prob1A(), prob1B(), prob1C();

//31 Agustus 2022
void prob2A(), prob2B(), prob2C();

//07 September 2022
void prob3A(), prob3B(), prob3C();

//14 September 2022
void prob4A(), prob4B(), prob4C();

//21 September 2022
void prob5A(), prob5B(), prob5C(), prob5D(), prob5E(), prob5F();

int main() { prob5C(); return 0; }

void prob1A()
{
	int input; scanf("%d", &input);
	
	printf("%d plus %d is %d\n", input, input, input + input);
	
	printf("minus one is %d\n", input + input - 1);
}

void prob1B()
{
	int a, b; scanf("%d %d", &a, &b);
	
	printf("%d\n%d\n%d\n%d\n%d\n", a + b, a - b, a * b, a / b, a % b);
}

void prob1C()
{
	while (1)
	{
		int input, i, sum = 0; scanf("%d", &input); int values[input];
	
		for (i = 0; i < input; i++)
		{
			scanf("%d", &values[i]);
			
			sum = i < input - 1 ? sum + values[i] : sum;
		}
		printf("%.2lf\n", (double)(2 * sum + values[input - 1]));
	}
}

void prob2A()
{
	int input, i; scanf("%d", &input);
	
	for (i = 0; i < input; i++)
	{
		int a, b; scanf("%d %d", &a, &b);
		
		printf("Case #%d: %s\n", i + 1, a > b ? "Go-Jo" : "Bi-Pay");
	}
}

void prob2B()
{
	long long int input, i, j; scanf("%lld", &input);
	
	for (i = 0; i < input; i++)
	{
		long long int value, sum = 0; scanf("%lld", &value);
		
		for (j = 0; j < value; j++)
		{
			long long int number; scanf("%lld", &number); sum += number;
		}
		printf("Case #%lld: %lld\n", i + 1, sum);
	}
}

void prob2C()
{
	int size, step, i, j; scanf("%d %d", &size, &step);
	
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++) printf("#");
		
		printf("\n");
	}
	printf("\n");
	
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++) printf((i + 1) % step == 0 ? "#" : ".");
		
		printf("\n");
	}
	printf("\n");
	
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++) printf((j + 1) % step == 0 ? "#" : ".");
		
		printf("\n");
	}
}

void prob3A()
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

void prob3B()
{
	int input, i, j; scanf("%d", &input);
	
	for (i = 0; i < input; i++)
	{
		int number; scanf("%d", &number);
		
		long long int values[2 * number], count = 0;
		
		for (j = 0; j < 2 * number; j++)
		{
			scanf("%lld", &values[j]);
			
			if (j >= number) if (values[j - number] < values[j]) count++;
		}
		printf("Case #%d: %lld\n", i + 1, count);
	}
}

void prob3C()
{
	int input, i, j; scanf("%d", &input);
	
	for (i = 0; i < input; i++)
	{
		int number; scanf("%d", &number);
		
		int result[number]; memset(result, 0, sizeof(result));
		
		for (j = 0; j < number * number; j++)
		{
			int value; scanf("%d", &value);

			result[j % number] += value;
		}
		printf("Case #%d:", i + 1);
		
		for (j = 0; j < number; j++) printf(" %d", result[j]);
		
		printf("\n");
	}
}

void prob4A()
{
	int input[3], i; char string[3][101];
	
	for (i = 0; i < 3; i++) scanf("%d %s", &input[i], string[i]);

	for (i = 0; i < 3; i++) printf("%c%c\n", string[i][input[i] - 1], string[i][0]);
}

void prob4B()
{
	int input, i, j; scanf("%d", &input); getchar();

	for (i = 0; i < input; i++)
	{
		char string[1001]; gets(string);

		printf("Case #%d: ", i + 1);

		for (j = strlen(string) - 1; j >= 0; j--)
		{
			printf("%c", (int)string[j] > 96 ? (int)string[j] - 32 : (int)string[j] + 32);
		}
		printf("\n");
	}
}

void prob4C()
{
	int input, i, j; scanf("%d", &input); getchar();

	for (i = 0; i < input; i++)
	{
		int result = 0, alphabet[150] = {};
		
		char string[100001]; gets(string); int length = strlen(string);

		for (j = 0; j < (int)length; j++)
		{
			if (alphabet[string[j]] == 0)
			{
				result++; alphabet[string[j]]++;
			}
		}
		printf("Case #%d: %s\n", i + 1, result % 2 == 0 ? "Breakable" : "Unbreakable");
	}
}

void prob5A()
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

void prob5B()
{
	int input, i, j; scanf("%d", &input);

	for (i = 1; i <= input; i++)
	{
		int number; scanf("%d", &number); int values[number];

		for (j = 0; j < number; j++) scanf("%d", &values[j]);

		int bibi, lili; scanf("%d %d", &bibi, &lili);

		printf("Case #%d : %s\n", i, values[bibi - 1] > values[lili - 1] ? "Bibi" : values[bibi - 1] < values[lili - 1] ? "Lili" : "Draw");
	}
}

void prob5C()
{
	int input, i; scanf("%lld", &input);
	
	long long int result = 0, min = 100001;

	for (i = 0; i < input; i++)
	{
		int value; scanf("%d", &value);
		
		result += value;

		if (value <= min && value %2 != 0) min = value;
	}
	if (result % 2 != 0) result -= min;

	printf("%lld\n", result);
}

void prob5D()
{
	int input, i, j, k, l; scanf("%d", &input);

	for (i = 1; i <= input; i++)
	{
		int number, sample; scanf("%d %d", &number, &sample);
		
		int sampling = number - sample + 1, maxsample = sample * sample;
		
		double matrix[number + 1][number + 1], result = 0;

		for (j = 1; j <= number; j++)
		{
			for (k = 1; k <= number; k++) scanf("%lf", &matrix[j][k]);
		}
		for (j = 1; j <= number; j++)
		{
			for (k = 1; k <= number; k++)
			{
				matrix[j][k] = k == 0 ? matrix[j][k] : matrix[j][k] + matrix[j][k - 1];
			}
		}
		for (j = 1; j <= number; j++)
		{
			for (k = 1; k <= number; k++)
			{
				matrix[k][j] = k == 0 ? matrix[k][j] : matrix[k][j] + matrix[k - 1][j];
			}
		}
		for (j = 1; j <= sampling; j++)
		{
			for (k = 1; k <= sampling; k++)
			{
				int newJ = j + sample - 1, newK = k + sample - 1;

				result = matrix[newJ][newK] - matrix[newJ][k - 1] + matrix[j - 1][k - 1] - matrix[j - 1][newK];

				printf("%s%.2lf", k == 1 ? "" : " ", result / maxsample);
			}
			printf("\n");
		}
	}
}

void prob5E()
{
	int input, i; scanf("%d", &input);

	for (i = 1; i <= input; i++)
	{
		int first, second, result = 0, tenth = 1;
		
		scanf("%d %d", &first, &second);

		while (first != 0 || second != 0)
		{
			result += ((first + second) % 10) * tenth;

			first /= 10; second /= 10; tenth *= 10;
		}
		printf("Case #%d : %d\n", i, result);
	}
}

void prob5F()
{
	int input, i, j; scanf("%d", &input);

	for (i = 1; i <= input; i++)
	{
		int number; scanf("%d", &number);

		for (j = 1; j <= number; j++)
		{
			if ((j % 3 == 0 || j % 5 == 0) && j % 15 != 0)
			{
				printf("%d Jojo\n", j);
			}
			else printf("%d Lili\n", j);
		}
	}
}