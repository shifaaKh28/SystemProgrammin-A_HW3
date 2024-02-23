// #include "StrList.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define MAX 100//maximum number of words 

// int main(){
//     int option;
//     char data[MAX];
//     StrList* list = StrList_alloc();

//     while(1){
//         if (scanf("%d", &option) != 1) {
//             printf("Invalid choice. Please enter a valid option.\n");
//             while (getchar() != '\n'); // Clear input buffer
//             continue;
//         }

//         switch (option) {
//             case 1: {
//                 int count;
//                 if (scanf("%d", &count) != 1) {
//                     printf("Invalid input.\n");
//                     break;
//                 }
//                 for (int i = 0; i < count; i++) {
//                     if (scanf("%s", data) != 1) {
//                         printf("Invalid input.\n");
//                         break;
//                     }
//                     StrList_insertLast(list, strdup(data)); // Copy data before insertion
//                 }
//                 break;
//             }
//             case 2: {
//                 int index;
//                 if (scanf("%d", &index) != 1) {
//                     printf("Invalid input.\n");
//                     break;
//                 }
//                 if (scanf("%s", data) != 1) {
//                     printf("Invalid input.\n");
//                     break;
//                 }
//                 StrList_insertAt(list, strdup(data), index); // Copy data before insertion
//                 break;
//             }
//             case 3:
//                 StrList_print(list);
//                 break;
//             case 4:
//                 printf("%zu\n", StrList_size(list));
//                 break;
//             case 5: {
//                 int index;
//                 if (scanf("%d", &index) != 1) {
//                     printf("Invalid input.\n");
//                     break;
//                 }
//                 StrList_printAt(list, index);
//                 break;
//             }
//             case 6:
//                 printf("%d\n", StrList_printLen(list));
//                 break;
//             case 7:
//                 if (scanf("%s", data) != 1) {
//                     printf("Invalid input.\n");
//                     break;
//                 }
//                 printf("%d\n", StrList_count(list, data));
//                 break;
//             case 8:
//                 if (scanf("%s", data) != 1) {
//                     printf("Invalid input.\n");
//                     break;
//                 }
//                 StrList_remove(list, data);
//                 break;
//             case 9: {
//                 int index;
//                 if (scanf("%d", &index) != 1) {
//                     printf("Invalid input.\n");
//                     break;
//                 }
//                 StrList_removeAt(list, index);
//                 break;
//             }
//             case 10:
//                 StrList_reverse(list);
//                 break;
//             case 11:
//                 StrList_free(list);
//                 return 0;
//             case 12:
//                 StrList_sort(list);
//                 break;
//             case 13:
//                 printf("%s\n", StrList_isSorted(list) ? "true" : "false");
//                 break;
//             case 0:
//                 StrList_free(list);
//                 return 0;
//             default:
//                 printf("Invalid choice. Please enter a valid option.\n");
//                 break;
// #include "StrList.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define MAX 100//maximum number of words 

// int main(){
//     int option;
//     char data[MAX];
//     StrList* list = StrList_alloc();

//     while(1){
//         if (scanf("%d", &option) != 1) {
//             printf("Invalid choice. Please enter a valid option.\n");
//             while (getchar() != '\n'); // Clear input buffer
//             continue;
//         }

//         switch (option) {
//             case 1: {
//                 int count;
//                 if (scanf("%d", &count) != 1) {
//                     printf("Invalid input.\n");
//                     break;
//                 }
//                 for (int i = 0; i < count; i++) {
//                     if (scanf("%s", data) != 1) {
//                         printf("Invalid input.\n");
//                         break;
//                     }
//                     StrList_insertLast(list, strdup(data)); // Copy data before insertion
//                 }
//                 break;
//             }
//             case 2: {
//                 int index;
//                 if (scanf("%d", &index) != 1) {
//                     printf("Invalid input.\n");
//                     break;
//                 }
//                 if (scanf("%s", data) != 1) {
//                     printf("Invalid input.\n");
//                     break;
//                 }
//                 StrList_insertAt(list, strdup(data), index); // Copy data before insertion
//                 break;
//             }
//             case 3:
//                 StrList_print(list);
//                 break;
//             case 4:
//                 printf("%zu\n", StrList_size(list));
//                 break;
//             case 5: {
//                 int index;
//                 if (scanf("%d", &index) != 1) {
//                     printf("Invalid input.\n");
//                     break;
//                 }
//                 StrList_printAt(list, index);
//                 break;
//             }
//             case 6:
//                 printf("%d\n", StrList_printLen(list));
//                 break;
//             case 7:
//                 if (scanf("%s", data) != 1) {
//                     printf("Invalid input.\n");
//                     break;
//                 }
//                 printf("%d\n", StrList_count(list, data));
//                 break;
//             case 8:
//                 if (scanf("%s", data) != 1) {
//                     printf("Invalid input.\n");
//                     break;
//                 }
//                 StrList_remove(list, data);
//                 break;
//             case 9: {
//                 int index;
//                 if (scanf("%d", &index) != 1) {
//                     printf("Invalid input.\n");
//                     break;
//                 }
//                 StrList_removeAt(list, index);
//                 break;
//             }
//             case 10:
//                 StrList_reverse(list);
//                 break;
//             case 11:
//                 StrList_free(list);
//                 return 0;
//             case 12:
//                 StrList_sort(list);
//                 break;
//             case 13:
//                 printf("%s\n", StrList_isSorted(list) ? "true" : "false");
//                 break;
//             case 0:
//                 StrList_free(list);
//                 return 0;
//             default:
//                 printf("Invalid choice. Please enter a valid option.\n");
//                 break;
//         }
//     }
//     return 0;
// }
#include <stdio.h>
#include "StrList.h"

/**
 * This function gets the user input into a string and return it.
 * Note: if something went wrong it will return NULL pointer.
*/
char* get_string_from_user(){
    int cap = 5;
    char* str = (char*)malloc(sizeof(char)*cap);
    char input;
    int index = 0;
    while((input = getchar()) != ' ' && input != '\n'){
        str[index++] = input;  // Adding the char to the end of the current chars.
        if(index == cap){ // Means we ran out of space in allocated memory
            cap += 5;
            char* tmp = (char*)realloc(str, sizeof(char)*cap);
            if(tmp == NULL){
                free(str);
                return NULL;
            }
            str = tmp;
        }
    }
    // Adding '\0':
    if(index == cap){  // Means we have no room for the 0 indicator.
        char* tmp = (char*)realloc(str, sizeof(char)*(cap+1));
        if(tmp == NULL){
            free(str);
            return NULL;
        }
        str = tmp;
    }
    str[index] = '\0';
    return str;

}

int main(){
    StrList* strlist = StrList_alloc();
    int choice = 0;
    // printf("enter your choice: ");
    scanf(" %d", &choice);

    while(choice != 0){ // Checks whether the scaf worked and if the user input was 0:

        if (choice == 1){  // Means the user wants to input strings to the StrList:
            // printf("\nenter how many strings you want to insert: ");
            int amount;  // How many strings the user wants to enter.
            scanf(" %d", &amount);
            while (getchar() != '\n');  // Consumong all scanf's leftovers.
            // printf("\nenter the strings: ");
            for(int i=0; i<amount; i++){  // Getting the strings:
                char* str = get_string_from_user();
                if(str == NULL){
                    StrList_free(strlist);
                    return 1;
                }
                StrList_insertLast(strlist, str);  // Inserting to the list
                // printf("\nthe %d string added to the list.", i+1);
            }
        }

        if (choice == 2){  // Means the user wants to input a string in a specific index in the StrList:
            int index;
            if(scanf(" %d", &index) == 0){
                continue;
            }
            while (getchar() != '\n');  // Consumong all scanf's leftovers.
            char* str = get_string_from_user();
            if(str == NULL){
                continue;
            }
            StrList_insertAt(strlist, str, index);
        }

        if(choice == 3){  // Means the user wants to print the StrList:
            StrList_print(strlist);
        }

        if(choice == 4){  // Means the user wants to print the StrList's length:
            size_t size = StrList_size(strlist);
            printf("%zu\n", size);
        }

        if(choice == 5){  // Means the user wants to print the string in index:
            int index;
            if(scanf(" %d", &index) == 0){
                continue;
            }
            StrList_printAt(strlist, index);
        }

        if(choice == 6){  // Means the user wants to print the chars amount of all the list:
            printf("%d\n", StrList_printLen(strlist));
        }

        if (choice == 7){  // Means the user wants to print how many times given string is in the list:
            while (getchar() != '\n');  // Consumong all scanf's leftovers.
            char* str = get_string_from_user();
            if(str == NULL){
                continue;
            }
            printf("%d\n", StrList_count(strlist, str));
        }

        if(choice == 8){  // Means the user wants to remove all the appearences of the given string from the list:
            while (getchar() != '\n');  // Consumong all scanf's leftovers.
            char* str = get_string_from_user();
            if(str == NULL){
                continue;
            }
            StrList_remove(strlist, str);
        }

        if(choice == 9){  // Means the user wants to remove the string in the given index:
            int index;
            if(scanf(" %d", &index) == 0){
                continue;
            }
            StrList_removeAt(strlist, index);
        }

        if(choice == 10){  // Means the user wants to reverse the list:
            StrList_reverse(strlist);
        }

        if(choice == 11){  // Means the user wants to remove all nodes from the list:
            size_t size = StrList_size(strlist);
            for(size_t i=0; i<size; i++){
                StrList_removeAt(strlist, 0);
	        }
        }

        if(choice == 12){  // Means the user wants to sort the list by lexicographic order:
            StrList_sort(strlist);
        }

        if(choice == 13){  // Means the user wants to kmow if the list is sorted:
            int bool = StrList_isSorted(strlist);
            if(bool == 1){
                printf("true\n");
            }
            else{
                printf("false\n");
            }
        }

        scanf(" %d", &choice);
    }
    StrList_free(strlist);
    return 0;
}

//         }
//     }
//     return 0;
// }
