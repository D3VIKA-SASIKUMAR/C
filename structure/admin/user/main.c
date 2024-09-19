#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//book struct
struct Book {
    char name[100];
    char author[100];
    float price;
};


//Userstruct
struct User {
    char name[100];
    int age;
    char place[100];
    char username[100];
    char password[100];
};


struct Book books[100];
int bookCount = 0;
struct User users[100];
int userCount = 0;

//function declaration
void userMenu();
void updateBook();
void deleteBook();
void userRegistration();
void userLogin();
void searchBook();
void adminMenu();
void addBook();
void displayBooks();


//main function

int main() {
    int choice;
    
    while(1){
        printf("Main Menu:\n");
        printf("1. Admin\n");
        printf("2. User\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                adminMenu();
                break;
            case 2:
                userMenu();
                break;
            case 3:
                printf("Exiting the system...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } 

    return 0;
}


//adminMenu

void adminMenu() {
    char adminusername[]="devika";
    char adminpassword[]="d3vika";
    char username[50], password[50];
    
    printf("Admin Login\n");
    printf("Username: ");
    scanf("%s", username);
    printf("Password: ");
    scanf("%s", password);
        if (strcmp(username, adminusername) == 0 && strcmp(password, adminpassword) == 0) {
        int choice;
        do {
            printf("Admin Menu:\n");
            printf("1. Add Book\n");
            printf("2. Display Books\n");
            printf("3. Update Book\n");
            printf("4. Delete Book\n");
            printf("5. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    addBook();
                    break;
                case 2:
                    displayBooks();
                    break;
                case 3:
                    updateBook();
                    break;
                case 4:
                    deleteBook();
                    break;
                case 5:
                    printf("Exiting Admin Menu...\n");
                    break;
                default:
                    printf("Invalid choice! Please try again.\n");
            }
        } while (choice != 5);
    } else {
        printf("Invalid Admin!\n");
    }
}
void addBook() {
    printf("Enter Book Name: ");
    scanf(" %s", books[bookCount].name);
    printf("Enter Book Author: ");
    scanf(" %s", books[bookCount].author);
    printf("Enter Book Price: ");
    scanf("%f", &books[bookCount].price);
    bookCount++;
    printf("Book added successfully!\n");
}
void displayBooks() {
    if (bookCount == 0) {
        printf("No books available!\n");
    } else {
        for (int i = 0; i < bookCount; i++) {
            printf("Book %d:\n", i + 1);
            printf("Name: %s\n", books[i].name);
            printf("Author: %s\n", books[i].author);
            printf("Price: $%.2f\n", books[i].price);
        }
    }
}
void updateBook() {
    char name[100];
    int found = 0;
    
    printf("Enter the name of the book to update: ");
    scanf(" %s", name);
    
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(books[i].name, name) == 0) {
            printf("Enter new details:\n");
            printf("New Name: ");
            scanf(" %s", books[i].name);
            printf("New Author: ");
            scanf(" %s", books[i].author);
            printf("New Price: ");
            scanf("%f", &books[i].price);
            printf("Book updated successfully!\n");
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Book not found!\n");
    }
}
void deleteBook() {
    char name[100];
    int found = 0;

    printf("Enter the name of the book to delete: ");
    scanf(" %[^\n]s", name);
    
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(books[i].name, name) == 0) {
            for (int j = i; j < bookCount - 1; j++) {
                books[j] = books[j + 1];
            }
            bookCount--;
            printf("Book deleted successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found!\n");
    }
}
void userMenu() {
    int choice;
    
    do {
        printf("User Menu:\n");
        printf("1. Registration\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                userRegistration();
                break;
            case 2:
                userLogin();
                break;
            case 3:
                printf("Exiting User Menu...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);
}
void userRegistration() {
    printf("Enter Name: ");
    scanf(" %s", users[userCount].name);
    printf("Enter Age: ");
    scanf("%d", &users[userCount].age);
    printf("Enter Place: ");
    scanf(" %s", users[userCount].place);
    printf("Enter Username: ");
    scanf("%s", users[userCount].username);
    printf("Enter Password: ");
    scanf("%s", users[userCount].password);
    userCount++;
    printf("User registered successfully!\n");
}
void userLogin() {
    char username[50], password[50];
    int found = 0;
    
    printf("User Login\n");
    printf("Username: ");
    scanf("%s", username);
    printf("Password: ");
    scanf("%s", password);
        for (int i = 0; i < userCount; i++) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            printf("Login successful!\n");
            int choice;
            do {
                printf("User Menu:\n");
                printf("1. Display Books\n");
                printf("2. Search Book\n");
                printf("3. Exit\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        displayBooks();
                        break;
                    case 2:
                        searchBook();
                        break;
                    case 3:
                        printf("Exiting...\n");
                        break;
                    default:
                        printf("Invalid choice! Please try again.\n");
                }
            } while (choice != 3);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Invalid username or password!\n");
    }
}
void searchBook() {
    char name[100];
    int found = 0;

    printf("Enter the name of the book to search: ");
    scanf(" %[^\n]s", name);
    
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(books[i].name, name) == 0) {
            printf("Book found:\n");
            printf("Name: %s\n", books[i].name);
            printf("Author: %s\n", books[i].author);
            printf("Price: $%.2f\n", books[i].price);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found!\n");
    }
}