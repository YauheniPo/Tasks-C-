#include "popoarr.h"
#include <conio.h>
#include <time.h>
#include <string.h>
#include <malloc.h>
#include <math.h>

char* Integers1_9(int);
char* Tens(int);
char* From_20_to_10(int);
void task17(void) {
	puts("----task17----");

	const int N = 20;
	char str[N];
	char *word;
	char text[101] = "\0";

	int value, thousands, hundreds, tens, number, part_without_hundreds;

	while(1) {
		text[0] = '\0';
		value = 0;
		printf("\nEnter number [1000-9999]: ");
		gets(str);
		int len = strlen(str);
		if(len > N - 1) {
			puts("\nInvalid input.");
			return;
		}
		for(int i = 0; i < len; ++i) {
			if(str[i] < 48 || str[i] > 57) {
				puts("\nInvalid input.");
				return;
			}
			value = value * 10 + (str[i] - 48);
		}
		thousands = value / 1000;
		hundreds = (value % 1000) / 100;
		part_without_hundreds = value % 100;
		tens = part_without_hundreds / 10;
		number = value % 10;

		if(value >= 1000 && value <= 9999) {
			word = Integers1_9(thousands);
			strcat(text, word);
			strcat(text, " thousand ");
			if(hundreds != 0) {
				word = Integers1_9(hundreds);
				strcat(text, word);
				strcat(text, " hundred ");
			}
			if(tens >= 2){
				word = Tens(tens);
				strcat(text, word);
				word = Integers1_9(number);
				strcat(text, word);
			} else {
				word = Integers1_9(part_without_hundreds);
				strcat(text, word);
				word = From_20_to_10(part_without_hundreds);
				strcat(text, word);
			}
			puts(text);
		} else {
			puts("Incorrect value");
			break;
		}
	}
}
char* Integers1_9(int number) {
	switch(number) {
	case 1:
		return "one";
	case 2:
		return "two";
	case 3:
		return "three";
	case 4:
		return "four";
	case 5:
		return "five";
	case 6:
		return "six";
	case 7:
		return "seven";
	case 8:
		return "eight";
	case 9:
		return "nine";
	default:
		return "";
	}
}
char* Tens(int number) {
	switch(number) {
	case 2:
		return "twenty ";
	case 3:
		return "thirty ";
	case 4:
		return "forty ";
	case 5:
		return "fifty ";
	case 6:
		return "sixty ";
	case 7:
		return "seventy ";
	case 8:
		return "eighty ";
	case 9:
		return "ninety ";
	default:
		return "";
	}
}
char* From_20_to_10(int number) {
	switch(number) {
	case 10:
		return "ten";
	case 11:
		return "eleven";
	case 12:
		return "twelve";
	case 13:
		return "thirteen";
	case 14:
		return "fourteen";
	case 15:
		return "fifteen";
	case 16:
		return "sixteen";
	case 17:
		return "seventeen";
	case 18:
		return "eighteen";
	case 19:
		return "nineteen";
	default:
		return "";
	}
}

/*
void integers1_9(int);
void task17(void) {
	puts("----task17----");

	const int N = 5;
	char str[N];

	int value, thousands, hundreds, tens, number, part_without_hundreds;

	while(1) {
		value = 0;
		printf("\nEnter number [1000-9999]: ");
		gets(str);
		int len = strlen(str);
		if(len > N - 1) {
			puts("\nInvalid input.");
			return;
		}
		for(int i = 0; i < len; ++i) {
			if(str[i] < 48 || str[i] > 57) {
				puts("\nInvalid input.");
				return;
			}
			value = value * 10 + (str[i] - 48);
		}
		thousands = value / 1000;
		hundreds = (value % 1000) / 100;
		part_without_hundreds = value % 100;
		tens = part_without_hundreds / 10;
		number = value % 10;
		if(value >= 1000 && value <= 9999) {
			integers1_9(thousands);
			printf("thousand ");
			integers1_9(hundreds);
			printf("hundred ");
			if(tens >= 2){
				switch(tens) {
				case 2:
					printf("twenty ");
					break;
				case 3:
					printf("thirty ");
					break;
				case 4:
					printf("forty ");
					break;
				case 5:
					printf("fifty ");
					break;
				case 6:
					printf("sixty ");
					break;
				case 7:
					printf("seventy ");
					break;
				case 8:
					printf("eighty ");
					break;
				case 9:
					printf("ninety ");
					break;
				}
				integers1_9(number);
			} else {
				integers1_9(part_without_hundreds);
				switch(part_without_hundreds) {
				case 10:
					printf("ten");
					break;
				case 11:
					printf("eleven");
					break;
				case 12:
					printf("twelve");
					break;
				case 13:
					printf("thirteen");
					break;
				case 14:
					printf("fourteen");
					break;
				case 15:
					printf("fifteen");
					break;
				case 16:
					printf("sixteen");
					break;
				case 17:
					printf("seventeen");
					break;
				case 18:
					printf("eighteen");
					break;
				case 19:
					printf("nineteen");
					break;
				}
			}
		} else {
			puts("Incorrect value");
			break;
		}
	}
}
void integers1_9(int number) {
	switch(number) {
	case 1:
		printf("one ");
		break;
	case 2:
		printf("two ");
		break;
	case 3:
		printf("three ");
		break;
	case 4:
		printf("four ");
		break;
	case 5:
		printf("five ");
		break;
	case 6:
		printf("six ");
		break;
	case 7:
		printf("seven ");
		break;
	case 8:
		printf("eight ");
		break;
	case 9:
		printf("nine ");
		break;
	default:
		break;
	}
}
*/
//----------------------------------------------------------------
void task18(void) {
	puts("\n------------task18------------");
	
	const int N = 101;
	char str[N];
	int i = 0;
	int sum = 0;

	printf("Enter number [0-100]: ");
	gets(str);
	int len = strlen(str);
	if(len > N - 1) {
		puts("\nInvalid input.");
		return;
	}
	while(str[i]) {
		if(str[i] < 48 || str[i] > 57) {
			puts("\nInvalid input.");
			return;
		}
		sum += str[i] - 48;
		++i;
	}
	printf("%\nsum = %d", sum);
}
//----------------------------------------------------------------
void task19(void) {
	puts("\n------------task19------------");
	
	const int N = 101;
	char str[N];
	int len;
	char ch[128] = {0};

	printf("Enter string [0-100]: ");
	gets(str);
	len = strlen(str);
	if(len > N - 1) {
		puts("\nInvalid input.");
		return;
	}
	
	for(int i = 0; i < len; ++i) {
		++ch[str[i] + 0];
	}
	for(int i = 32; i < sizeof(ch)/sizeof(char); ++i) {
		if(ch[i]){
			printf("\n%c - %d", i, ch[i]);
		}
	}
}
//----------------------------------------------------------------
void task20(void) {
	puts("\n------------task20------------");
	
	const int N = 4, M = 6;
	char arr_str[N][M];
	int **arr_int;
	
	arr_int = (int**)malloc(N * sizeof(int*));
	if(!arr_int) {
		puts("Error");
		exit(1);
	}

	printf("Enter 4 integers from 4 numbers:\n");
	for(int i = 0; i < N; ++i) {
		printf("%d: ", i+1);
		gets(*(arr_str + i));
		int len = strlen(arr_str[i]);
		if(len > (M-1)) {
			puts("\nInvalid input.");
			return;
		}
		arr_int[i] = (int*)malloc(len * sizeof(int));
		if(!arr_int[i]) {
			puts("Error");
			exit(1);
		}
		for(int j = 0; j < len; ++j) {
			arr_int[i][j] = arr_str[i][j] - 48;
		}
	}	
	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < _msize(arr_int[i])/sizeof(int); ++j) {
			printf("%d", arr_int[i][j]);
		}
		printf("\n");
	}
	for(int i = 0; i < N; ++i) {
		free(arr_int[i]);
		arr_int[i] = NULL;
	}
	free(arr_int);
	arr_int = NULL;
}
//----------------------------------------------------------------
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
bool Is_palindrome(char *, int);
void task23(void) {
	puts("\n------------task22------------");

	char str[21];
	int len;
	bool b;

	printf("\nEnter a word (1-20 chars): ");
	gets(str);
	len = strlen(str);
	if(len > 20) {
		puts("Error");
		return;
	}
	b = Is_palindrome(str, len);
	if(b) {
		puts("It is a palindrome");
	} else {
		puts("It is not a palondrome");
	}
}
bool Is_palindrome(char *str, int len) {
	for(int i = 0, j = len - 1; j - i >= 1; ++i, --j) {
		if(str[i] != str[j]) {
			return 0;
		}
	}
	return 1;
}
void main(void) {
	srand(time(NULL));
	
	task17();
	task18();
	task19();
	task20();
	task21();
	task22();
	task23();

	_getch();
	return;
}

//�������� ��� ����������� � ������������ �������, ������ ������ �� �������� � �������������
//���� ������������ ������������ � �����������
//