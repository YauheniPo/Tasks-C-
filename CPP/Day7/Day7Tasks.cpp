void Set_array_double_keyboard(double arr[], int N) {
	for(int i = 0; i < N; ++i) {
		printf("[%d] = ", i);
		scanf("%lf", arr + i);
		fflush(stdin);
	}
}
void Set_array_double_posit(double arr[], int N) {
	for(int i = 0; i < N; ++i) {
		srand(time(NULL));
		*(arr + 1) = 0 + rand() % (100 - 0 + 1);
	}
}
void Set_array_double_mix(double arr[], int N) {
	for(int i = 0; i < N; ++i) {
		srand(time(NULL));
		*(arr + i) = rand() % 100 - 50;
	}
}
void Print_array_double(double arr[], int N) {
	for(int i = 0; i < N; ++i) {
		printf("[%d] = %.2lf ", i, arr[i]);
	}
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
		srand(time(NULL));
		*(arr + i) = 0 + rand() % (100 - 0 + 1);
	}
}
void Set_array_int_mix(int arr[], int N) {
	for(int i = 0; i < N; ++i) {
		srand(time(NULL));
		*(arr + i) = rand() % 100 - 50;
	}
}
void Print_array_int(int arr[], int N) {
	for(int i = 0; i < N; ++i) {
		printf("[%d] = %d ", i, arr[i]);
	}
}