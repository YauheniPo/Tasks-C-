#include "popoarr.h"
#include <conio.h>
#include <time.h>

void task21(void) {
	puts("\n------------task21------------");

	int **arr;
	int N;
	int sum_elem = 0, prod = 1;

	printf("\nEnter capacity of elements: ");
	Set_number(N);
	arr = (int**)malloc(N * sizeof(int*));
	for(int i = 0; i < N; ++i) {
		arr[i] = (int*)malloc(N * sizeof(int));
	}
	Set_array_multi(arr, N, N);
	Print_array_multi(arr, N, N);
	for(int i = 1; i < N; ++i) {
		for(int j = 1; j <= i; ++j) {
			sum_elem += arr[i][N-j];
			prod *= arr[i][N-j];
		}
	}
	printf("\nsum = %d prod = %d", sum_elem, prod);

}
//----------------------------------------------------------------
void Print_menu(void);
void task22(void) {
	puts("\n------------task22------------");

	char ch;
	int N, num, k;
	int *arr, *arr1;
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
		printf("\nEnter: ");
		Set_char(ch);
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
					Set_char(ch);
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
				case '6':
					printf("Enter number to delete: ");
					Set_number(num);
					k = Delete_value(arr, N, num);
					if(!k) {
						puts("There are no such element\n");
						break;
					} else {
						arr1 = (int*)realloc(arr, (N-k) * sizeof(int));
						if(!arr1) {
							puts("Error.");
							exit(1);
						} else {
							arr = arr1;
							N = N - k;
						}
						break;
					}
				case '7':
					printf("Enter number to add: ");
					Set_number(num);
					arr1 = (int*)realloc(arr, (N+1) * sizeof(int));
					if(!arr1) {
						puts("Error.");
						exit(1);
					} else {
						arr = arr1;
						N = N + 1;
						arr[N-1] = num;
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
	puts("6. Delete element.");
	puts("7. Add element.");
	puts("0. Exit.");
}
//----------------------------------------------------------------

void main(void) {
	srand(time(NULL));

	task21();
	task22();

	_getch();
	return;
}
