#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define CHARMAX 50
#define MAXBOOKS 100


struct book_details {

    char title[CHARMAX];
    char author[CHARMAX];
    int id;
    int quantity;

};

void add_books(struct book_details book[], int *count); 
void view_allbooks(struct book_details book[], int count);
void borrow_book(struct book_details book[], int count);
void return_book(struct book_details book[], int count);
void search_title(struct book_details book[], int count);
void search_author(struct book_details book[], int count);

char buffer[CHARMAX];
char temp[CHARMAX];

int main () {

    struct book_details book[MAXBOOKS];
    int count = 0;


    int choice;

    do{

        printf("\n================= LIBRARY MANAGEMENT SYSTEM ==================\n");
        printf("1. Add New Books To A Library \n");
        printf("2. View All Books \n");
        printf("3. Isuue (Borrow) A Book \n");
        printf("4. Return A Book \n");
        printf("5. Search Book By Title \n");
        printf("6. Search Book By Author \n");
        printf("7. Exit \n");

        printf("Enter Your Choise : ");
        fgets(buffer, CHARMAX, stdin);
        buffer[strcspn(buffer, "\n")] = '\0';
        choice = atoi(buffer);

        switch(choice) {

            case 1 :

                printf("How Many Books Do You Want To Add? ");
                fgets(buffer, CHARMAX, stdin);
                buffer[strcspn(buffer, "\n")] = '\0';
                int n = atoi(buffer);

                for(int i = 0; i < n; i++) {

                    add_books(book,&count);

                }
                
                break;

            case 2 :

                view_allbooks(book, count);
                break;

            case 3 :

                borrow_book(book, count); 
                break;

            case 4 :

                return_book(book, count);
                break;

            case 5 :

                search_title(book, count);    
                break;

            case 6 :

                search_author(book, count);
                break;

            case 7 :

                printf("=========== Exiting Program ========== \n");
                break;

            default :

                printf("Invalid Choice Try Again !\n");
                break;
        }


    } while(choice != 7);
