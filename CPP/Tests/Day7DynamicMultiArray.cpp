#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

////�������� ������������� ������� ������� �������
//void Create_array_multi(int **arr, int &N, int &M) {
//	N = 3, M = 4; //����� ������� = N, ����� ����� = M
//	//����� � � ����� ������ ����� �������
//	arr = new int*[N]; //�������� ���������� �����
//    for (int i = 0; i < N; ++i) 
//		arr[i] = new int[M]; //������ �������� M � ������ ������
//}

//������������� ������� ���������� ����������
void Array_init(int **arr, int N, int M) {
	srand(time(NULL));
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
            arr[i][j] = rand() % 100 - 50; //��������� �������� � ��������� ������ �������
		}
	}
}
//������ �������
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
	int **arr_multi; //��� �������� ���������� ������� ������ ��������� �� ���������
	int n = 3, m = 4; //����� ������� = n, ����� ����� = m
	//����� � � ����� ������ ����� �������

	//�������� ������������� ������� ������� �������
	arr_multi = new int*[n]; //�������� ���������� �����
	for (int i = 0; i < n; ++i) {
		arr_multi[i] = new int[m]; //������ �������� M � ������ ������
	}
	
	//Create_array_multi(&arr_multi, n, m); //������� �������� �������
	
	Array_init(arr_multi, n, m); //������� ���������� �������
	Print_array(arr_multi, n, m); //������� ������
	
	_getch();
	return;
}