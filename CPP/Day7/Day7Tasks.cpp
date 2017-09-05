#include "popoarr.h"
#include <conio.h>
#include <time.h>

void Print_menu(void);

void main(void) {
	char ch;
	const int N = 8;
	int arr[N];
	int i_max, i_min, max, min;

	srand(time(NULL));

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

	_getch();
	return;
}

void Print_menu(void) {
	puts("1. Create array.");
	puts("2. Print array.");
	puts("3. Search max element.");
	puts("4. Search min element.");
	puts("5. Sorting array.");
	puts("0. Exit.");
}