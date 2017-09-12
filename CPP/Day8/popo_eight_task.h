#include <stdio.h>
#include <stdlib.h>

void Set_number(int&x); 

void Set_char(char&ch);

void Set_array_double_keyboard(double arr[], int N);

void Set_array_double_posit(double arr[], int N);

void Set_array_double_mix(double arr[], int N);

void Print_array_double(double arr[], int N);

void Set_array_int_keyboard(int arr[], int N);

void Set_array_int_posit(int arr[], int N);

void Set_array_int_posit_from_0_to_num(int arr[], int N, int num);

void Set_array_int_mix(int arr[], int N);

void Print_array_int(int arr[], int N);

void Set_array_multi(int **arr, int N, int M);

void Set_array_multi_from_0_to_int(int **arr, int N, int M, int num);

void Print_array_multi(int **arr, int N, int M);

int Get_max_element_position(int arr[], int N);

int Get_min_element_position(int arr[], int N);

void Sort_arr_int(int *arr, int N, char ch);

void Sort_arr_double(double *arr, int N, char ch);

int Delete_value(int arr[], int n, int del_val);

void Add_element_in_position(int *arr, int N, int num, int pos);