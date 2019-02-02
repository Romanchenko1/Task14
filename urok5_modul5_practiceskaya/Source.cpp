#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>
using namespace std;

void task1()
{
	//1.Дан квадратный массив из n элементов.Найти произведение элементов первой строки
	int A[4][4];
	int i, j;
	int sum = 1;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			A[i][j] = 1 + rand() % 5;
			printf("%d ", A[i][j]);
			if (i == 0)
				sum = sum * A[0][j];
		}
		printf("\n");
	}
	printf("%d\n", sum);
}



void task2()
{
	//2.Дана целочисленная квадратная матрица.Написать программу упорядочения ее строк по возрастанию сумм их элементов
	int A[3][3];
	int i, j;
	int sum = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			A[i][j] = 1 + rand() % 10;
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (A[i] < A[j + 1])
			{
			}
		}
		printf("\n");
	}
}


void task3()
{
	//3.Дана целочисленная матрица размера 5×10.Найти минимальное значение среди сумм элементов всех ее строк
	int mat[5][10];
	int min = 100;
	int i, j;
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mat[i][j] = 1 + rand() % 10;
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 10; j++)
		{
			sum = sum + mat[i][j];
		}
		if (sum < min)
		{
			min = sum;
		}
	}
	printf("минимальное значение->%d\n", sum);
}


void task4()
{
	//4.В произвольной матрице - отсортировать по убыванию элементы последовательности, расположенные после второго отрицательного числа.
	int mat[5][5];
	int i, j;
	int s;
	int k, r;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			mat[i][j] = -5 + rand() % 10;
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	for (k = 0; k < 5; k++)
	{
		for (r = 0; r < 5; r++)
		{
			for (i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					if (mat[i][j] > mat[k][r])
					{
						s = mat[i][j];
						mat[i][j] = mat[k][r];
						mat[k][r] = s;
					}
				}
			}
		}
	}
	printf("--------------------------------\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}


void task5()
{
	//5.Дан массив A(n, m).Удалить строки массива, не имеющие ни одного повторяющегося элемента
	int A[5][5];
	int i, j;
	int s = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			A[i][j] = 1 + rand() % 5;
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("-------------------------------------\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5 - 1; j++)
		{
			if (A[i][j] == A[i][j + 1])
			{
				s++;
			}
		}
		if (s == 0)
		{
			for (j = 0; j < 5; j++)
			{
				A[i][j] = 0;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
}


void task6()
{
	//6.Элементы матрицы A сделать с помощью генератора случайных чисел.Сделать новую матрицу B, в которой удалить с матрицы А ряд, в котором минимальный элемент среди элементов главной диагонали
	int A[5][5];
	int i, j;
	int min = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			A[i][j] = 1 + rand() % 20;
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n-------------------------------------\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (A[i][j] < min)
			{
				min = A[i][j];
			}
		}
		if (A[i][i] == min)
		{
			for (j = 0; j < 5; j++)
			{
				A[i][j] = 0;
			}
		}
		min = 100;
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
}


void task7()
{
	//8.Написать программу, которая в матрице чисел A(N, M) находит все элементы, равные числу, введенному с клавиатуры.Подсчитать число таких элементов
	int A[10][10];
	int i, j;
	int s;
	int p = 0;
	printf("Введите число->");
	scanf_s("%d", &s);
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			A[i][j] = 1 + rand() % 100;
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (A[i][j] == s)
			{
				p++;
				printf("Найдено %d элементов\n", p);
			}
			else
			{
				printf("Совпадений не найдено!\n");
			}
		}
	}
}


void task8()
{
//9.Дана целочисленная матрица размера 5х5.Заменить в данной матрице все отрицательные элементы первой строки числом 0.
	int A[5][5];
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			A[i][j] = -5 + rand() % 20;
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n==========================\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (A[i][j]<0)
			{
				A[i][j] = 0;
			}
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
}



void task9()
{
//11.Дана целочисленная прямоугольная матрица размера M•N.Сформировать одномерный массив
//состоящий из элементов, лежащих в интервале[1, 20].Найти среднеарифметическое  полученного одномерного массива
	const int N = 10;
	int n, m, i, j;
	do
	{
		n = 0 + rand() % 20;
	} while (n < 1 || N < n);
	do
	{
		m = 0 + rand() % 20;
	} while (m < 1 || N < m);

	int a[N][N];
	int b[N*N], k = 0;
	b[0] = 0;

	for (int i = 0; i < n; ++i) 
	{
		for (int j = 0; j < m; ++j) 
		{

			a[i][j] = rand() % 100;
			printf("%d ", a[i][j]);
			if (1 <= a[i][j] && a[i][j] <= 10)
			{
				b[k] = a[i][j];
				++k;
			}
		}
		printf("\n");
	}
	printf("\n================================\n");
	unsigned long long p = 1;
	for (int i = 0; i < k; ++i) 
	{
		printf("%d", b[i]);
		p = (p + b[i]) / 10;
	}
	printf("Среднее арифметическое->%d\n", p);
}



void task10()
{
//12.Дана матрица целых чисел размера NxM.Вывести номер строки, содержащей минимальное число одинаковых элементов
	int A[5][5];
	int i, j, n;
	int m = 0;
	int min = 200;
	for ( i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			A[i][j] = 1 + rand() % 100;
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n===============================\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (A[i][j]==A[i][j++])
			{
				m++;
				if (m<min)
				{
					n = i;
				}
			}
		}
	}
	printf("%d\n", n);
}


void task11()
{
//14.Сформируйте массив L(I, J) с помощью датчика случайных чисел
//Увеличить каждый элемент массива в 3 раза и поменяйте знак на противоположный.Массив выведите на экран в виде таблицы
	int l[5][8];
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 8; j++)
		{
			l[i][j] = 1 + rand() % 100;
			printf("%d ", l[i][j]);
		}
		printf("\n");
	}
	printf("\n===============================\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 8; j++)
		{
			l[i][j] = l[i][j] * 3;
			l[i][j] = -l[i][j];
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%d ", l[i][j]);
		}
		printf("\n");
	}
	printf("\n===============================\n");
}





int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int task;
	int flag;
start:
	printf("Введите номер задания->");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1: {task1(); }break;
	case 2: {task2(); }break;
	case 3: {task3(); }break;
	case 4: {task4(); }break;
	case 5: {task5(); }break;
	case 6: {task6(); }break;
	case 7: {task7(); }break;
	case 8: {task8(); }break;
	case 9: {task9(); }break;
	case 10: {task10(); }break;
	case 11: {task11(); }break;
	default:
		break;
	}
	printf("Чтобы продолжить нажмите 1->");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}