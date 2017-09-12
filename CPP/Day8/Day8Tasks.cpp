#include <conio.h>
#include <time.h>
#include <string.h>
#include <malloc.h>
#include <math.h>
#include "popo_eight_task.h"

void Print(char*, int);
void task1(void) {
	puts("\n------------task1------------");

	const int N = 101;
	char text[N];
	int len;

	puts("Enter text: ");
	gets(text);
	len = strlen(text);
	if(len > N-1){
		puts("\nInvalid input.");
		return;
	}
	Print(text, len);
}
void Print(char *str, int len) {
	int i = 0;
	while(i < len) {
		printf("\n%c", str[i]);
		++i;
	}
}
//----------------------------------------------------------------
void Ñonversely_string(char*, int);
void task2(void) {
	puts("\n------------task2------------");

	const int N = 101;
	char text[N];
	int len;

	puts("Enter text: ");
	gets(text);
	len = strlen(text);
	if(len > N-1){
		puts("\nInvalid input.");
		return;
	}

	Ñonversely_string(text, len);
	puts(text);
}
void Ñonversely_string(char *text, int len) {
	int i = 0;
	char buf;
	while(i < len/2) {
		buf = text[i];
		text[i] = text[len - 1 - i];
		text[len - 1 - i] = buf;
		++i;
	}
}
//----------------------------------------------------------------
void Replace_char(char*, int, char);
void task3(void) {
	puts("\n------------task3------------");

	const int N = 101;
	char text[N];
	int len;
	char ch;

	puts("Enter text: ");
	gets(text);
	len = strlen(text);
	if(len > N-1){
		puts("\nInvalid input.");
		return;
	}

	puts("Enter character: ");
	Set_char(ch);

	Replace_char(text, len, ch);
	puts(text);
}
void Replace_char(char *text, int len, char ch) {
	int i = 0;
	while(i < len) {
		if(text[i] == ch || text[i] == (ch-32)) {
			text[i] = '!';
		}
		++i;
	}
}
//----------------------------------------------------------------
int Count_char(char*, int, char);
void Change_chars(char*, int);
void task4(void) {
	puts("\n------------task4------------");

	const int N = 101;
	char text[N];
	int len, k = 0;
	char ch;

	puts("Enter text: ");
	gets(text);
	len = strlen(text);
	if(len > N-1){
		puts("\nInvalid input.");
		return;
	}

	puts("Enter character: ");
	Set_char(ch);

	k = Count_char(text, len, ch);
	Change_chars(text, len);
	printf("\n'%c' - %d\n", ch, k);
	puts(text);
}
int Count_char(char *text, int len, char ch) {
	int k = 0, i = 0;
	while(i < len) {
		if(text[i] == ch || text[i] == (ch-32)) {
			++k;
		}
		++i;
	}
	return k;
}
void Change_chars(char *text, int len) {
	int i = 0, j = 0, m = 0;
	char buf;
	while(i < len) {
		if(text[i] != ' ' && !(m%2)) {
			++m;
			j = i;
			buf = text[i];
		}
		if(text[i+1] == ' ') {
			--m;
			text[j] = text[i];
			text[i] = buf;
		}
		++i;
	}
}
//----------------------------------------------------------------
int Count_words(char*, int);
void task5(void) {
	puts("\n------------task5------------");

	const int N = 101;
	char text[N];
	int len, k = 0;

	puts("Enter text: ");
	gets(text);
	len = strlen(text);
	if(len > N-1){
		puts("\nInvalid input.");
		return;
	}
	k = Count_words(text, len);
	printf("\n%d words", k);
}
int Count_words(char *text, int len) {
	int k = 0, i = 0;
	if(text[i] != ' ' && text[i] != '\0') {
		++k;
		++i;
	}
	while(i < len-1) {
		if(text[i] == ' ') {
			if(text[i+1] != ' ') {
				++k;
			}
		}
		++i;
	}
	return k;
}
//----------------------------------------------------------------
char* Prisv(char *, char *);
void task6(void) {
	puts("\n------------task6------------");

	const int N = 11, M = 11;
	char str1[N], str2[M];
	int len1, len2;

	puts("Enter string 1: ");
	gets(str1);
	len1 = strlen(str1);
	if(len1 > N-1){
		puts("\nInvalid input.");
		return;
	}
	puts("Enter string 2: ");
	gets(str2);
	len2 = strlen(str2);
	if(len2 > M-1){
		puts("\nInvalid input.");
		return;
	}
	Prisv(str1, str2);
	puts(str1);
}
char* Prisv(char *str1, char *str2) {
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	for(int i = 0; i <= len2; ++i) {
		str1[i] = str2[i];
	}
	return str1;
}
//----------------------------------------------------------------
char* Dobav(char *, char *);
void task7(void) {
	puts("\n------------task7------------");

	const int N = 101;
	char str1[N];
	char str2[20];
	int len1, len2;

	puts("Enter string 1: ");
	gets(str1);
	len1 = strlen(str1);
	if(len1 > N-1){
		puts("\nInvalid input.");
		return;
	}
	puts("Enter string 2: ");
	gets(str2);
	len2 = strlen(str2);
	if(len2 > 20-1 && len1+len2 > N-1){
		puts("\nInvalid input.");
		return;
	}
	Dobav(str1, str2);
	puts(str1);
}
char* Dobav(char *str1, char *str2) {
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	for(int i = len1, j = 0; j <= len2; ++j, ++i) {
		str1[i] = str2[j];
	}
	return str1;
}
//----------------------------------------------------------------
int Dlina(char*);
void task8(void) {
	puts("\n------------task8------------");

	const int N = 11;
	char str[N];
	int len;

	puts("Enter string (max 10): ");
	gets(str);
	len = Dlina(str);
	if(len > N-1){
		puts("\nInvalid input.");
	}
	printf("\nlength = %d", len);
}
int Dlina(char *str) {
	int i = 0;
	while(str[i]) {
		++i;
	}
	return i;
}
//----------------------------------------------------------------
int Srav(char*, char*);
void task9(void) {
	puts("\n------------task9------------");

	char x[20], y[20];
	int len;
	int srav; 

	puts("Enter first string: ");
	gets(x);
	len = strlen(x);
	if(len > 20-1){
		puts("\nInvalid input.");
		return;
	}
	puts("Enter second string: ");
	gets(y);
	len = strlen(y);
	if(len > 20-1){
		puts("\nInvalid input.");
		return;
	}
	srav = Srav(x, y);
	printf("\n1 - str1>str2, 0 - str=str2, -1 - str1<str2\nTotal: %d", srav);
}
int Srav(char *str1, char *str2) {
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int i = 0, k = 0;
	while(str1[i] && str2[i]) {
		if(str1[i] > str2[i]) {
			k += 2;
			return 1;
		} else if(str1[i] < str2[i]) {
			++k;
			return -1;
		}
		++i;
	}
	if(len1 == len2) {
		return k;
	}
	if(i == len1) {
		return 1;
	} else {
		return -1;
	}
}
//----------------------------------------------------------------
void task10(void) {
	puts("\n------------task10------------");

	char x[20], y[20], z[20], t[80] = "\0";
	int len;

	puts("Enter name: ");
	gets(x);
	len = strlen(x);
	if(len > 20-1){
		puts("\nInvalid input.");
		return;
	}
	puts("Enter surname: ");
	gets(y);
	len = strlen(y);
	if(len > 20-1){
		puts("\nInvalid input.");
		return;
	}
	puts("Enter patronymic: ");
	gets(z);
	len = strlen(z);
	if(len > 20-1){
		puts("\nInvalid input.");
		return;
	}
	strcat(strcat(strcat(strcat(strcat(t, x), " "), y), " "), z);
	puts(t);
}
//----------------------------------------------------------------
void Delete_first(char*, int);
void Delete_last(char*, int);
void Delete_center(char*, int);
void task11(void) {
	puts("\n------------task11------------");

	const int N = 101;
	char str[N];
	int len;

	puts("Enter string: ");
	gets(str);
	len = strlen(str);
	if(len > N-1){
		puts("\nInvalid input.");
		return;
	}
	if(len < 10) {
		Delete_first(str, len);
	} else if(len > 10) {
		Delete_last(str, len);
	} else {
		Delete_center(str, len);
	}
	puts(str);
}
void Delete_first(char *str, int n) {
	for(int i = 2, j = 0; i <= n; ++i, ++j) {
		str[j] = str[i];
	}
}
void Delete_last(char *str, int n) {
	str[n-2] = str[n];
}
void Delete_center(char *str, int n) {
	for(int i = n/2; i < n; ++i) {
		str[i] = str[i+1];
	}
}
//----------------------------------------------------------------
void task12(void) {
	puts("\n------------task12------------");

	const int N = 101;
	char str[N];
	char word[N];
	char *ptr;
	int len_str, len_word, k = 0;

	puts("Enter string: ");
	gets(str);
	len_str = strlen(str);
	puts("Enter word: ");
	gets(word);
	len_word = strlen(word);
	if(len_str > N-1 && len_str < len_word){
		puts("\nInvalid input.");
		return;
	}
	ptr = strstr(str, word);
	while(ptr) {
		++k;
		ptr = strstr(ptr += len_word, word);
	}
	printf("n = %d", k);
}
//----------------------------------------------------------------
void Print_even(char*, int);
void task13(void) {
	puts("\n------------task13------------");

	const int N = 101;
	char str[N];
	int len;

	puts("Enter number: ");
	gets(str);
	len = strlen(str);
	if(len != N-1) {
		puts("\nInvalid input.");
		return;
	}
	Print_even(str, len);
}
void Print_even(char *str, int n) {
	for(int i = 0; i < n; ++i) {
		if(!(str[i] % 2)) {
			printf("%d  ", (str[i]-48));
		}
	}
}
//----------------------------------------------------------------
void Prod_number(char *, int, int&);
void task14(void) {
	puts("\n------------task14------------");

	const int N = 101;
	char str[N];
	int len, num = 1;

	puts("Enter number: ");
	gets(str);
	len = strlen(str);
	if(len != N-1) {
		puts("\nInvalid input.");
		return;
	}

	Prod_number(str, len, num);
	printf("\n%d", num);
}
void Prod_number(char *str, int n, int &num) {
	for(int i = 0; i < n; ++i) {
		num *= (str[i] - 48);
	}
}
//----------------------------------------------------------------
void Print_num(char*, int);
void task15(void) {
	puts("\n------------task15------------");

	const int N = 101;
	char str[N];
	int len;

	puts("Enter number: ");
	gets(str);
	len = strlen(str);
	if(len != N-1) {
		puts("\nInvalid input.");
		return;
	}
	Print_num(str, len);
}
void Print_num(char *str, int n) {
	for(int i = 0; i < n; ++i) {
		printf("%d  ", (str[i]-48));
	}
}
//----------------------------------------------------------------
int Get_int_to_str(char *atr, int n_start, int n_end);
void Cut_str(char*, int, int, char*);
char* Get_str_month(int);
void task16(void) {
	puts("\n------------task16------------");

	const int N = 11;
	char data[N] = {0};
	int len;
	int day = 0, month = 0, year = 0;
	char d[3], m[3], y[5];
	char text[100] = "\0";
	
	puts("Enter data _ _/_ _/_ _ _ _: ");
	gets(data);
	len = strlen(data);
	if(len != N-1) {
		puts("\nInvalid input.");
		return;
	}
	day = Get_int_to_str(data, 0, 1);
	month = Get_int_to_str(data, 3, 4);
	year = Get_int_to_str(data, 6, 9);
	if(day < 1 && day > 31 && month < 1 && month > 12) {
		puts("\nInvalid input.");
		return;
	}

	Cut_str(data, 0, 1, d);
	Cut_str(data, 6, N-1, y);
	strcat(strcat(strcat(strcat(strcat(strcat(text, d), " "), Get_str_month(month)), " "), y), "\0");
	puts(text);
}
int Get_int_to_str(char *str, int start, int end) {
	int num = 0, k = 10;
	for(int i = start, j = 0; i <= end; ++i, ++j) {
		num = num * k + (str[i] - 48);
	}
	return num;
}
void Cut_str(char *str, int start, int end, char *s) {
	for(int i = 0, j = start; j <= end; ++i, ++j) {
		s[i] = str[j];
	}
	s[end - start + 1] = '\0';
}
char* Get_str_month(int month) {
	switch(month) {
	case 1:
		return "January";
	case 2:
		return "February";
	case 3:
		return "March";
	case 4:
		return "April";
	case 5:
		return "May";
	case 6:
		return "June";
	case 7:
		return "July";
	case 8:
		return "August";
	case 9:
		return "September";
	case 10:
		return "October";
	case 11:
		return "November";
	case 12:
		return "December";
	}
}
//----------------------------------------------------------------
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
							Sort_arr_int(arr, N, ch);
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
	task19();
	task20();
	task21();
	task22();
	task23();

	_getch();
	return;
}