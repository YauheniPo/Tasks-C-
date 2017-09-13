#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>


char * addLine(char *, char *);
char * dobav(char *, char *);

void main(void){
	/*Задача 6. Написать функцию присвоения строк.
Прототип функции char* prisv(char*,char*); т.е. присвоить вторую строку первой и вернуть первую строку.*/
	/*const int N = 30;
	char str1 [N];
	printf("Please enter a line: ");
	fflush(stdin);
	gets(str1);
	char *str2 = "Bortnik";
	if (strlen(str2)>strlen(str1)){
		printf("You may lose data, second line is too long");
	}
	else{
		addLine(str1, str2);
	}
	printf("New string: ");
	puts(str1);
	printf("%c", str1[9]);
	_getch();*/

/*Задача 7. Написать функцию добавления строк.
Прототип функции char* dobav(char*,char*); т.е. добавить вторую строку первой и вернуть первую строку.*/
	/*const int m = 50;
	const int x = 20;
	char str3[m] = "HELLO";
	char str4[x];
	gets(str4);
	if (strlen(str3) + strlen (str4)<m){
		dobav(str3,str4);
	}
	else{
		printf("You may lose data, second line is too long");
	}
	printf("New string: ");
	puts(str3);
	_getch();*/

	/*Задача 22. Задачу 12 из предыдущего дня переделать следующим образом:
1. Массив выделить динамически.
2. Удаление заданного числа из массива (переопределить размер массива).
3. Добавление чисел в массив (переопределить размер массива).*/

	//int * str5;
	//int p = 5;
	//str5 = (int*)malloc(p*sizeof(int));
	////gets(str5);
	//int g = _msize(str5);
	//printf("%d", g);
	//char * str6;
	//str6 = (int*)realloc(str5, 10*sizeof(int));
	//free(str5);
	////hghputs(str5);
	//int l = _msize(str5);
	////l = sizeof(str5)/sizeof(int);
	//printf("%d", l);


	//-----------------
	//int** str7;
	//str7 = (int **)calloc(3, sizeof(int*));
	//for (int i = 0; i<3; ++i){
	//	*(str7+i) = (int *) calloc(4, sizeof(int));
	//}
	////srand(time(NULL));
	//*(*(str7) + 3) = 1;
	//str7[2][1] = 2;

	//printf("%d", str7[0][3]);
	//printf("%d", str7[2][1]);

	/*Задача 20. Ввести массив строк, в который записываются целые числа, преобразовать их в массив чисел и вывести массив чисел.*/
	//char ** str8;
	//str8 = (char**)malloc(3*sizeof(int*));
	//
	//for (int i = 0; i<3; ++i){
	//	*(str8+i) = (char*) malloc(4*sizeof(char));
	//	for (int s = 0; s<4; ++s){
	//		scanf("%c",(*(str8 +i)+ s));
	//	//gets(*(str8+i));
	//	}
	//}
	//for (int f = 0; f<3; ++f){
	//	for (int s = 0; s<4; ++s){
	//		printf("%c", *(*(str8 +f) +s));
	//	}
	//}

	//int** arr;
	//arr = (int**)malloc(3*sizeof(int*));
	//for (int t = 0; t<3; ++t){
	//	*(arr+t) = (int*) malloc(4*sizeof(int));
	//	for (int z = 0; z<4; ++z){
	//		*(*(arr + t) + z) = *(*(str8 +t) +z)-48;
	//	}
	//}
	//printf("new array");
	//for (int a = 0; a<3; ++a){
	//	for (int b = 0; b<4; ++b){
	//		printf("%d\n", *(*(arr +a) +b));
	//	}
	//}
	char *i;
	i = (char*)malloc(3 * sizeof(char));
	puts(i);
	i[3] = '\0';
	puts(i);
	printf("%d\n", strlen(i));
	printf("%c\n", i[0]);





	_getch();

}

char * addLine(char * str1, char * str2){
	int n = strlen(str2);
	for (int i = 0; i<n; ++i){
		str1[i] = *(str2+i);
	}
	str1[n] = '\0';
	return str1;
}

char * dobav(char * str3, char * str4){
	int k = strlen(str3);
	int l = strlen(str4);
	for (int i = k, v = 0; v<l; ++i, ++v){
		str3[i] = *(str4 + v);
	}
	str3[k+l+1] = '\0';
	return str3;
}