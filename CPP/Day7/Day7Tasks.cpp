#include <conio.h>
#include <time.h>
#include <math.h>
#include "popoarr.h"

//----------------------------------------------------------------
int Sum_elements(int *arr, int N);
void task1(void) {
	puts("\n------------task1------------");

	const int N = 7;
	int arr[N] = {0};
	int sum = 0;

	puts("\nEnter number (max 6 of elements): ");
	Set_array_int_keyboard(arr, N);
	sum = Sum_elements(arr, N);
	printf("\nsum = %d", sum);
}
int Sum_elements(int *arr, int N) {
	int n = 0, sum = 0;
	do {
		sum += arr[n];
		++n;
	} while(n < N);
	return sum;
}
//----------------------------------------------------------------
void Print_backwards(int *arr, int N);
void task2(void) {
	puts("\n------------task2------------");

	const int N = 11;
	int arr[N] = {0};

	puts("\nEnter number (max 10 of elements): ");
	Set_array_int_keyboard(arr, N);
	Print_backwards(arr, N);
}
void Print_backwards(int *arr, int N) {
	for(int i = N-1; i >= 0; --i) {
		printf("%d ", arr[i]);
	}
}
//----------------------------------------------------------------
int Sum_even_elements(int *arr, int N);
void task3(void) {
	puts("\n------------task3------------");

	const int N = 11;
	int arr[N] = {0};
	int sum = 0;

	puts("\nEnter number (max 10 of elements): ");
	Set_array_int_keyboard(arr, N);
	sum = Sum_even_elements(arr, N);
	printf("\nsum = %d", sum);
}
int Sum_even_elements(int *arr, int N) {
	int sum = 0;
	for(int i = 0; i < N; i += 2) {
		sum += arr[i];
	}
	return sum;
}
//----------------------------------------------------------------
int Capacity_negat_elem(double *arr, int N);
double Sum_positive_elem(double *arr, int N);
double Prod_uneven_elem(double *arr, int N);
void task4(void) {
	puts("\n------------task4------------");

	const int N = 11;
	double arr[N] = {0};
	int capacity_negat_elem = 0;
	double sum_positive_elem = 0;
	double prod_uneven_elem = 0;

	//puts("\nEnter double arra");
	//Set_array_double_keyboard(arr, N);
	Set_array_double_mix(arr, N);
	Print_array_double(arr, N);

	capacity_negat_elem = Capacity_negat_elem(arr, N);
	sum_positive_elem = Sum_positive_elem(arr, N);
	prod_uneven_elem = Prod_uneven_elem(arr, N);
	
	printf("\ncapacity negative elements = %d\nsum positive elements = %.2lf\nproduct uneven elements = %.2lf", capacity_negat_elem, sum_positive_elem, prod_uneven_elem);
}
int Capacity_negat_elem(double *arr, int N) {
	int n = 0;
	for(int i = 0; i < N; ++i) {
		if(arr[i] < 0) {
			++n;
		}
	}
	return n;
}
double Sum_positive_elem(double *arr, int N) {
	double sum = 0;
	for(int i = 0; i < N; ++i) {
		if(arr[i] > 0) {
			sum += arr[i];
		}
	}
	return sum;
}
double Prod_uneven_elem(double *arr, int N) {
	double prod = 1;
	for(int i = 1; i < N; i += 2) {
		prod *= arr[i];
	}
	return prod;
}
//----------------------------------------------------------------
int Capacity(int *arr, int N, int num);
void task5(void) {
	puts("\n------------task5------------");

	const int N = 21;
	int arr[N] = {0};
	int num = 0, capacity = 0;

	Set_array_int_posit_from_0_to_num(arr, N, 5);
	Print_array_int(arr, N);

	num = 5;
	capacity = Capacity(arr, N, num);
	printf("\n%d: %d", num, capacity);
	num = 4;
	capacity = Capacity(arr, N, num);
	printf("\n%d: %d", num, capacity);
	num = 3;
	capacity = Capacity(arr, N, num);
	printf("\n%d: %d", num, capacity);
	num = 2;
	capacity = Capacity(arr, N, num);
	printf("\n%d: %d", num, capacity);
}
int Capacity(int *arr, int N, int num) {
	int cap = 0;
	for(int i = 0; i < N; ++i) {
		if(arr[i] == num) {
			++cap;
		}
	}
	return cap;
}
//----------------------------------------------------------------
void task6(void) {
	puts("\n------------task6------------");

	const int N = 11;
	int arr[N];
	int num;
	int pos;

	Set_array_int_mix(arr, N);
	Print_array_int(arr, N);

	puts("\nEnter the added element: ");
	Set_number(num);
	puts("Enter # position of the new element: ");
	Set_number(pos);

	if(pos >= N) {
		puts("\nIncorrected input");
		system("pause");
		return;
	}
	Add_element_in_position(arr, N, num, pos);
	Print_array_int(arr, N);
}
//----------------------------------------------------------------
void Swap_max_min(int *arr, int N, int max, int min);
void task7(void) {
	puts("\n------------task7------------");

	const int N = 21;
	int arr[N];
	int max, min;

	Set_array_int_mix(arr, N);
	Print_array_int(arr, N);

	max = Get_max_element_position(arr, N);
	min = Get_min_element_position(arr, N);

	printf("\nmax = %d, min = %d\n", max, min);

	Swap_max_min(arr, N, max, min);
	Print_array_int(arr, N);
}
void Swap_max_min(int *arr, int N, int i_max, int i_min) {
	int max = arr[i_max], min = arr[i_min];
	for(int i = 0; i < N; ++i) {
		if(arr[i] == max) {
			arr[i] = min;
		}
		if(arr[i] == min) {
			arr[i] = max;
		}
	}
}
//----------------------------------------------------------------
void Swap_elements(int *arr, int i, int j);
void task8(void) {
	puts("\n------------task8------------");

	const int N = 11;
	int arr[N];
	int i, j;

	Set_array_int_mix(arr, N);
	Print_array_int(arr, N);

	puts("Enter index of element");
	printf("1. ");
	Set_number(i);
	printf("2. ");
	Set_number(j);
	if(i < 0 || i > N-1 || j < 0 || j > N-1) {
		puts("\nIncorrected input");
		system("pause");
		return;
	}
	Swap_elements(arr, i, j);
	Print_array_int(arr, N);
}
void Swap_elements(int *arr, int i, int j) {
	int buf = arr[i];
	arr[i] = arr[j];
	arr[j] = buf;
}
//----------------------------------------------------------------
void task9(void) {
	puts("\n------------task9------------");

	const int N = 20;
	double arr[N] = {4.2,3.1,5.4,3,7,20.7,20.1,4.6,11,22.2,8,8.9,1.1,5.2,4.3,9,5,3.6,2.2,7.5};
	Print_array_double(arr, 20);

	puts("");
	Sort_arr_double(arr ,N, '>');
	Print_array_double(arr, N);
}
//----------------------------------------------------------------
void Sort_array(double *arr, int N);
void task10(void) {
	puts("\n------------task10------------");

	const int N = 20;
	double arr[N];

	Set_array_double_mix(arr, N);
	Print_array_double(arr, N);

	puts("");
	Sort_array(arr, N);
	Print_array_double(arr, N);
}
void Sort_array(double *arr, int N) {
	double y;
	int j;
	for(int i = 1; i < N/2; ++i) {
		y = arr[i];
		j = i - 1;
		while(y < arr[j] && j >= 0) {
			arr[j+1] = arr[j];
			--j;
		}
		arr[j+1] = y;
	}
	for(int i = N/2+1; i < N-1; ++i) {
		for(int j = N/2; j < N-(i-N/2); ++j) {
			if(arr[j] > arr[j+1]) {
				y = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = y;
			}
		}
	}
}
//----------------------------------------------------------------
double Max_distance(int *, int *, int, int &, int &, int &, int &);
void task11(void) {
	puts("\n------------task11------------");

	int *x, *y;
	int n, x1, y1, x2, y2;
	double l2 = 0;

	puts("\nEnter capacity points");
	Set_number(n);
	if(n < 1) {
		puts("Incorrected input");
		system("pause");
		return;
	}
	x = (int*)calloc(n, sizeof(int));
	if(!x) {
		puts("Error.");
		system("pause");
		exit(1);
	}
	y = (int*)calloc(n, sizeof(int));
	if(!y) {
		puts("Error.");
		system("pause");
		exit(1);
	}
	for(int i = 0; i < n; ++i) {
		printf("x%d: ", i+1);
		Set_number(x[i]);
		printf("y%d: ", i+1);
		Set_number(y[i]);
	}

	l2 = Max_distance(x, y, n, x1, y1, x2, y2);
	printf("\nx%d y%d\nx%d y%d\nl = %lf", x1, y1, x2, y2, l2);
}
double Max_distance(int *x, int *y, int n, int &x1, int &y1, int &x2, int &y2) {
	double l1 = 0, l2 = 0;
	for(int i = 0; i < n; ++i) {
		for(int j = i + 1; j < n; ++j) {
			l1 = sqrt(pow((double)x[i] - x[j], 2) + pow((double)y[i] - y[j], 2));
			if(l1 > l2) {
				l2 = l1;
				x1 = i+1;
				y1 = i+1;
				x2 = j+1;
				y2 = j+1;
			}
		}
	}
	return l2;
}
//----------------------------------------------------------------
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
		puts("Invalid input");
		system("pause");
		return;
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
							Sort_arr_int(arr, N, ch);
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
void Multiplic(int **, int **, int, int);
void task15(void) {
	puts("\n------------task15------------");

	int **arr1, **arr2;
	int n, m;
	
	printf("\nEnter size of matrix, N = ");
	Set_number(n);
	printf("\nEnter size of matrix, M = ");
	Set_number(m);

	if(n <= 0 && m <= 0) {
		puts("Invalid input.");
		system("pause");
		return;
	}

	arr1 = (int**)malloc(n * sizeof(int*));
	if(!(*arr1)) {
		puts("\nError.");
		system("pause");
		exit(1);
	}
	for(int i = 0; i < n; ++i) {
		arr1[i] = (int*)malloc(m * sizeof(int));
		if(!arr1[i]) {
			puts("\nError.");
			system("pause");
			exit(1);
		}
	}
	arr2 = (int**)malloc(n * sizeof(int*));
	if(!(*arr2)) {
		puts("\nError.");
		system("pause");
		exit(1);
	}
	for(int i = 0; i < n; ++i) {
		arr2[i] = (int*)malloc(m * sizeof(int));
		if(!arr2[i]) {
			puts("\nError.");
			system("pause");
			exit(1);
		}
	}

	Set_array_multi(arr1, n, m);
	Print_array_multi(arr1, n, m);
	puts("-----------------");
	Set_array_multi(arr2, n, m);
	Print_array_multi(arr2, n, m);
	puts("-------Multiplication-------");
	Multiplic(arr1, arr2, n ,m);
	Print_array_multi(arr1, n, m);
}
void Multiplic(int **arr1, int **arr2, int N, int M) {
	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < M; ++j) {
			arr1[i][j] *= arr2[i][j];
		}
	}
}
//----------------------------------------------------------------
void Find_0_and_count_sum_line(int **, int, int, int);
void Print_result(int, int);
void task16(void) {
	puts("\n------------task16------------");

	int **arr;
	int n, m;
	int num = 7, find_num = 0;
	
	printf("\nEnter size of matrix, N = ");
	Set_number(n);
	printf("\nEnter size of matrix, M = ");
	Set_number(m);

	if(n <= 0 && m <= 0) {
		puts("Invalid input.");
		system("pause");
		return;
	}

	arr = (int**)malloc(n * sizeof(int*));
	if(!(*arr)) {
		puts("\nError.");
		system("pause");
		exit(1);
	}
	for(int i = 0; i < n; ++i) {
		arr[i] = (int*)malloc(m * sizeof(int));
		if(!arr[i]) {
			puts("\nError.");
			system("pause");
			exit(1);
		}
	}

	Set_array_multi_from_0_to_int(arr, n, m, num);
	Print_array_multi(arr, n, m);
	Find_0_and_count_sum_line(arr, n, m, find_num);
}
void Find_0_and_count_sum_line(int **arr, int N, int M, int find_num) {
	int k = 0, sum = 0;
	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < M; ++j) {
			if(arr[i][j] == find_num) {
				k = i;
				for(int l = 0; l < M; ++l) {
					sum += arr[k][l];
				}
				Print_result(k, sum);
				sum = 0;
			}
		}
	}
}
void Print_result(int k, int sum) {
	printf("\nsum [%d][] = %d", k, sum);
}
//----------------------------------------------------------------
int Prod_between_first_and_last_negative(int **, int, int);
void task17(void) {
	puts("\n------------task17------------");

	int **arr;
	int n, m, prod;
	
	printf("\nEnter size of matrix, N = ");
	Set_number(n);
	printf("\nEnter size of matrix, M = ");
	Set_number(m);

	if(n <= 0 && m <= 0) {
		puts("Invalid input.");
		system("pause");
		return;
	}

	arr = (int**)malloc(n * sizeof(int*));
	if(!(*arr)) {
		puts("\nError.");
		system("pause");
		exit(1);
	}
	for(int i = 0; i < n; ++i) {
		arr[i] = (int*)malloc(m * sizeof(int));
		if(!arr[i]) {
			puts("\nError.");
			system("pause");
			exit(1);
		}
	}

	Set_array_multi(arr, n, m);
	Print_array_multi(arr, n, m);
	prod = Prod_between_first_and_last_negative(arr, n, m);
	printf("\nproduct = %d", prod);
}
int Prod_between_first_and_last_negative(int **arr, int N, int M) {
	int prod = 1;
	int i_first = -1, j_first = -1, i_last = -1, j_last = -1;
	for(int i = 0; i < N && i_first < 0; ++i) {
		for(int j = 0; j < M && j_first < 0; ++j) {
			if(arr[i][j] < 0) {
				i_first = i;
				j_first = j;
			}
		}
	}
	for(int i = N-1; i >= 0 && i_last < 0; --i) {
		for(int j = M-1; j >= 0 && j_last < 0; --j) {
			if(arr[i][j] < 0) {
				i_last = i;
				j_last = j;
			}
		}
	}
	int k = 0;
	for(int i = i_first; i < N; ++i) {
		for(int j = j_first; j < M; ++j) {
			if(i == i_last && j == j_last) {
				if(k == 1) {
					return 0;
				} else {
					return prod/arr[i_first][j_first];
				}
			}
			prod *= arr[i][j];
			++k;
		}
	}
}
//----------------------------------------------------------------
void Find_sedlovaya_point(int **, int, int);
void Print_point(int **, int, int);
void task18(void) {
	puts("\n------------task18------------");

	int n = 3, m = 4;
	int **arr;

	arr = (int**)calloc(n, sizeof(int*));
	if(!arr) {
		puts("\nError.");
		system("pause");
		exit(1);
	}
	for(int i = 0; i < n; ++i) {
		*(arr + i) = (int*)calloc(m, sizeof(int));
		if(!*(arr + i)) {
			puts("\nError.");
			system("pause");
			exit(1);
		}
	}
	//Set_array_multi_from_0_to_int(arr, n, m, 15);
	for(int i = 0; i < n; ++i) {
		Set_array_int_keyboard(arr[i], m);
	}
	Print_array_multi(arr, n, m);
	Find_sedlovaya_point(arr, n, m);
}
void Find_sedlovaya_point(int **arr, int N, int M) {
	int k = 0, l = 0, b = 0;
	for(int i = 0; i < N; ++i) {
		k = i, l = 0;
		for(int j = 0; j < M; ++j) {
			if(arr[k][l] > arr[i][j]) {
				k = i;
				l = j;
			}
		}
		for(int p = 0; p < N; ++p) {
			if(arr[k][l] >= arr[p][l]) {
				++b;
			} else {
				break;
			}
			if(b == N) {
				Print_point(arr, k, l);
				return;
			}
		}
	}
}
void Print_point(int **arr, int k, int l) {
	printf("\n[%d][%d] %d", k, l, arr[k][l]);
}

void main(void) {
	srand(time(NULL));
	
	task1();
	task2();
	task3();
	task4();
	task5();
	task6();
	task7();
	task8();
	task9();
	task10();
	task11();
	task12();
	task13();
	task14();
	task15();
	task16();
	task17();
	task18();


	_getch();
	return;
}