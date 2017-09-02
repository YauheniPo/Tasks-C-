#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

////Создание динамического массива нужного размера
//void Create_array_multi(int **arr, int &N, int &M) {
//	N = 3, M = 4; //число колонок = N, число строк = M
//	//можно и с клавы задать любые размеры
//	arr = new int*[N]; //задается количество строк
//    for (int i = 0; i < N; ++i) 
//		arr[i] = new int[M]; //массив размером M в каждой строке
//}

//Инициализация массива случайными значениями
void Array_init(int **arr, int N, int M) {
	srand(time(NULL));
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
            arr[i][j] = rand() % 100 - 50; //Случайное значение в очередную ячейку массива
		}
	}
}
//Печать массива
void Print_array(int **arr, int N, int M) {
	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < M; ++j) {
			printf("[%d][%d] = %-4d ", i, j, arr[i][j]);
		}
		printf("\n");
	}
}
void main()
{
	int **arr_multi; //Для создания двумерного массива удобен указатель на указатель
	int n = 3, m = 4; //число колонок = n, число строк = m
	//можно и с клавы задать любые размеры

	//Создание динамического массива нужного размера
	arr_multi = new int*[n]; //задается количество строк
	for (int i = 0; i < n; ++i) {
		arr_multi[i] = new int[m]; //массив размером M в каждой строке
	}
	
	//Create_array_multi(&arr_multi, n, m); //Функция создания массива
	
	Array_init(arr_multi, n, m); //Функция заполнения массива
	Print_array(arr_multi, n, m); //Функция печати
	
	_getch();
	return;
}