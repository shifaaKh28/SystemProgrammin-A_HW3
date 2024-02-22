#include "StrList.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100//maximum number of words 

int main(){
    int option;
    char data[MAX];
    StrList* list = StrList_alloc();

    while(1){
        if (scanf("%d", &option) != 1) {
            printf("Invalid choice. Please enter a valid option.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        switch (option) {
            case 1: {
                int count;
                if (scanf("%d", &count) != 1) {
                    printf("Invalid input.\n");
                    break;
                }
                for (int i = 0; i < count; i++) {
                    if (scanf("%s", data) != 1) {
                        printf("Invalid input.\n");
                        break;
                    }
                    StrList_insertLast(list, strdup(data)); // Copy data before insertion
                }
                break;
            }
            case 2: {
                int index;
                if (scanf("%d", &index) != 1) {
                    printf("Invalid input.\n");
                    break;
                }
                if (scanf("%s", data) != 1) {
                    printf("Invalid input.\n");
                    break;
                }
                StrList_insertAt(list, strdup(data), index); // Copy data before insertion
                break;
            }
            case 3:
                StrList_print(list);
                break;
            case 4:
                printf("%zu\n", StrList_size(list));
                break;
            case 5: {
                int index;
                if (scanf("%d", &index) != 1) {
                    printf("Invalid input.\n");
                    break;
                }
                StrList_printAt(list, index);
                break;
            }
            case 6:
                printf("%d\n", StrList_printLen(list));
                break;
            case 7:
                if (scanf("%s", data) != 1) {
                    printf("Invalid input.\n");
                    break;
                }
                printf("%d\n", StrList_count(list, data));
                break;
            case 8:
                if (scanf("%s", data) != 1) {
                    printf("Invalid input.\n");
                    break;
                }
                StrList_remove(list, data);
                break;
            case 9: {
                int index;
                if (scanf("%d", &index) != 1) {
                    printf("Invalid input.\n");
                    break;
                }
                StrList_removeAt(list, index);
                break;
            }
            case 10:
                StrList_reverse(list);
                break;
            case 11:
                StrList_free(list);
                return 0;
            case 12:
                StrList_sort(list);
                break;
            case 13:
                printf("%s\n", StrList_isSorted(list) ? "true" : "false");
                break;
            case 0:
                StrList_free(list);
                return 0;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
                break;
        }
    }
    return 0;
}
