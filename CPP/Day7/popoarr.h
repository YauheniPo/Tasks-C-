#include <stdio.h>
#include <stdlib.h>

void Set_array_double_keyboard(double arr[], int N) {
	for(int i = 0; i < N; ++i) {
		printf("[%d] = ", i);
		scanf("%lf", arr + i);
		fflush(stdin);
	}
}
void Set_array_double_posit(double arr[], int N) {
	for(int i = 0; i < N; ++i) {
		*(arr + 1) = 0 + rand() % (100 - 0 + 1);
	}
}
void Set_array_double_mix(double arr[], int N) {
	for(int i = 0; i < N; ++i) {
		*(arr + i) = rand() % 100 - 50;
	}
}
void Print_array_double(double arr[], int N) {
	for(int i = 0; i < N; ++i) {
		printf("[%d] = %.2lf ", i, arr[i]);
	}
	printf("\n");
}
void Set_array_int_keyboard(int arr[], int N) {
	for(int i = 0; i < N; ++i) {
		printf("[%d] = ", i);
		scanf("%d", arr + i);
		fflush(stdin);
	}
}
void Set_array_int_posit(int arr[], int N) {
	for(int i = 0; i < N; ++i) {
		*(arr + i) = 0 + rand() % (100 - 0 + 1);
	}
}
void Set_array_int_mix(int arr[], int N) {
	for(int i = 0; i < N; ++i) {
		*(arr + i) = rand() % 100 - 50;
	}
}
void Print_array_int(int arr[], int N) {
	for(int i = 0; i < N; ++i) {
		printf("[%d] = %d ", i, arr[i]);
	}
	printf("\n");
}
int Get_max_element_position(int arr[], int N) {
	int i_max = 0;
	for(int i = 0; i < N-1; ++i) {
		if(arr[i_max] < arr[i+1]) {
			i_max = i + 1;
		}
	}
	return i_max;
}
int Get_min_element_position(int arr[], int N) {
	int i_min = 0;
	for(int i = 0; i < N-1; ++i) {
		if(arr[i_min] > arr[i+1]) {
			i_min = i + 1;
		}
	}
	return i_min;
}
void Sort_arr(int *arr, int N, char ch) {
	int buf;
	int k1;
	for(int k = N/2; k > 0; k /= 2) {
		do {
			k1 = 0;
			for(int i = 0, j = k; j < N; ++i, ++j) {
				switch(ch) {
				case '>':
					if(arr[i] < arr[j]) {
						buf = arr[i];
						arr[i] = arr[j];
						arr[j] = buf;
						++k1;
					}
					break;
				default:
					if(arr[i] > arr[j]) {
						buf = arr[i];
						arr[i] = arr[j];
						arr[j] = buf;
						++k1;
					}
					break;
				}	
			}
		} while(k1);
	}
}