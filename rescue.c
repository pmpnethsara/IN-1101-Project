#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define CHARMAX 50

char buffer[CHARMAX];

int main () {



    int choice;

    do{

        printf("\n================= RESCUE COORDINATION SYSTEM ==================\n");
        printf("1. victim registry \n");
        printf("2. Rescue Teams \n");
        printf("3. Supply Management \n");
        printf("4. Shelter Camps \n");
        printf("5. Incident Reports \n");
        printf("6. Exit \n");

        printf("Enter Your Choise : ");
        fgets(buffer, CHARMAX, stdin);
        buffer[strcspn(buffer, "\n")] = '\0';
        choice = atoi(buffer);

        switch(choice) {

            case 1 :

                
                break;

            case 2 :

                
                break;

            case 3 :

                 
                break;

            case 4 :

               
                break;

            case 5 :

                   
                break;

            case 6 :

                printf("=========== Exiting Program ========== \n");
                break;

            default :

                printf("Invalid Choice Try Again !\n");
                break;
        }


    } while(choice != 6);


