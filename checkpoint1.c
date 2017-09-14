/*******************************************************************************
48430 Embedded C - Assignment 1
Names: Sanjeet Sharma, Sathira Wickramanayaka, Basuru Sooriyaarachchi
Student ID: 11742501
Date of submission: 15/09/2017
*******************************************************************************/

/*******************************************************************************
List of header files
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*******************************************************************************
List preprocessing directives
*******************************************************************************/
#define MAX_PASSWORD_SIZE 30
#define MAX_ACCOUNT_SIZE 20
#define MAX_USERNAME_SIZE 15


/*******************************************************************************
List structs
*******************************************************************************/
struct accountdata
{
        char account[MAX_ACCOUNT_SIZE];
        char username[MAX_USERNAME_SIZE];
        char password [MAX_PASSWORD_SIZE];
        struct accountdata* nextp;
};
typedef struct accountdata accountdata_t;

/*******************************************************************************
Function prototypes
*******************************************************************************/
void printMenu();
void inputPassData(accountdata_t* adp, char account[], char username[],
                   char password[]);

/*******************************************************************************
Main
*******************************************************************************/
int main(void)
{

}
