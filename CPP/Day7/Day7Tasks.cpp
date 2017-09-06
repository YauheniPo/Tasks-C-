#include <conio.h>
#include <time.h>
#include "popoarr.h"

void Print_menu(void);
void task12(void) {
	puts("\n------------task12------------");

	char ch;
	int N;
	int *arr;
	int i_max, i_min, max, min;

	printf("\nEnter capacity of elements: ");
	Set_number(N);
	if(N <= 0) {
		puts("Error");
		system("pause");
		exit(1);
	}
	
	arr = (int*)malloc(N * sizeof(int));
	if(!arr) {
		puts("Error");
		exit(1);
	}

	Print_menu();
	do {
		fflush(stdin);
		printf("\nEnter: ");
		scanf("%c", &ch);
		if(ch == '1') {
			Set_array_int_posit(arr, N);
			puts("Array created");
		}
		else if(ch == '0')
			puts("Bye!");
		else if(*arr < -50)
			puts("Try again. Please enter 1.");
		else
			switch(ch){
				case '2':
					Print_array_int(arr, N);
					break;
				case '3':
					i_max = Get_max_element_position(arr, N);
					printf("max element: [%d] = %d\n", i_max, *(arr + i_max));
					break;
				case '4':
					i_min = Get_min_element_position(arr, N);
					printf("min element: [%d] = %d\n", i_min, *(arr + i_min));
					break;
				case '5':
					printf("Enter '<' for sorting asc. or '>' for sorting desc.: ");
					fflush(stdin);
					scanf("%c", &ch);
					switch(ch) {
						case '<':
						case '>':
							Sort_arr(arr, N, ch);
							Print_array_int(arr, N);
							break;
						default:
							puts("Try again");
							Print_menu();
							break;
					}
					break;
				default:
					puts("Try again. Please enter 1.");
					break;
			}
	} while(ch != '0');

	free(arr);
	arr = NULL;
}
void Print_menu(void) {
	puts("1. Create array.");
	puts("2. Print array.");
	puts("3. Search max element.");
	puts("4. Search min element.");
	puts("5. Sorting array.");
	puts("0. Exit.");
}
//----------------------------------------------------------------
void Print_array_multi_method(int arr[][6], int);
void Set_array_multi_method(int arr[][6], int);
void task13(void) {
	puts("\n------------task13------------");
	
	const int N = 6, M = 6;
	int arr[N][M];
	int i_max = 0, j_max = 0, i_min = N-1, j_min = M-1;

	Set_array_multi_method(arr, N);
	Print_array_multi_method(arr, N);
	int sum_diag = arr[0][M-1]; 
	
	for(int i = N-1, k = 0; k < N-1 && i > 0; --i, ++k) {
		for(int j = 0, m = M-1; j < M-k && m >= M-i; ++j, --m) {
			if(arr[k][j] > arr[i_max][j_max]) {
				i_max = k;
				j_max = j + 1;
			}
			if(arr[i][m] < arr[i_min][j_min]) {
				i_min = i;
				j_min = m - 1;
			}
		}
		sum_diag += arr[i][k];
	}
	printf("[%d][%d]\n", i_max, j_max);
	printf("[%d][%d]\n", i_min, j_min);
	printf("%d", sum_diag);
}
void Set_array_multi_method(int arr[][6], int N) {
	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < 6; ++j) {
			*(*(arr + i) + j) = rand() % 100 - 50;
		}
	}
}
void Print_array_multi_method(int arr[][6], int N) {
	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < 6; ++j) {
			printf("[%d][%d] = %-4d ", i, j, *(*(arr + i) + j));
		}
		printf("\n");
	}
}
//----------------------------------------------------------------
void Print_array_multi_method2(int arr[][3], int N);
void task14(void) {
	puts("\n------------task14------------");
	
	const int N = 4, M = 3;
	int arr[N][M], y[M] = {0};
	int k1, buf;

	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < M; ++j) {
			*(*(arr + i) + j) = rand() % 100 - 50;
			y[j] += arr[i][j];
		}
	}
	Print_array_int(y, M);
	Print_array_multi_method2(arr, N);

	printf("\n");

	for(int k = M/2; k > 0; k /= 2) {
		do {
			k1 = 0;
			for(int i = 0, j = k; j < M; ++i, ++j) {
				if(y[i] > y[j]) {
					buf = y[i];
					y[i] = y[j];
					y[j] = buf;
					++k1;
					for(int t = 0; t < N; ++t) {
						buf = arr[t][i];
						arr[t][i] = arr[t][j];
						arr[t][j] = buf;
					}
				}
			}
		} while(k1);
	}

	Print_array_int(y, M);
	Print_array_multi_method2(arr, N);
}
void Print_array_multi_method2(int arr[][3], int N) {
	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < 3; ++j) {
			printf("[%d][%d] = %-4d ", i, j, *(*(arr + i) + j));
		}
		printf("\n");
	}
}
//----------------------------------------------------------------

void main(void) {
	srand(time(NULL));
	
	task12();
	task13();
	task14();

	_getch();
	return;
}