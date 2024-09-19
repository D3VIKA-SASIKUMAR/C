#include <stdio.h>
#include <string.h>

// Struct definitions
struct Admin {
    int password;
    int bookID;
    char username[100];
    char title[100];
    char author[50];
    float price;
};

struct User {
    int password;
    char username[100];
    char name[100];
    int age;
    char place[50];
};

// Function declarations
void addBook(struct Admin books[], int *count);
void displayBooks(struct Admin books[], int count);
void updateBookPrice(struct Admin books[], int count);
int deleteBook(struct Admin books[], int *count);
void Adminmenu(struct Admin books[], int *count);

void registration(struct User users[], int *userCount);
void displayBookByName(struct Admin books[], int count);
void UserMenu(struct Admin books[], struct User users[], int bookCount, int *userCount);

// Main function
int main() {
    struct Admin books[100];
    struct User users[100];
    int bookCount = 0;
    int userCount = 0;
    int choice;

    while (1) {
        printf("Library Management System\n");
        printf("1. Admin\n");
        printf("2. User\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                Adminmenu(books, &bookCount);
                break;
            case 2:
                UserMenu(books, users, bookCount, &userCount);
                break;
            case 3:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

// Admin menu function
void Adminmenu(struct Admin books[], int *count) {
    int choice;
    while (1) {
        printf("\nADMIN MENU\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Update Book Price\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addBook(books, count);
                break;
            case 2:
                displayBooks(books, *count);
                break;
            case 3:
                updateBookPrice(books, *count);
                break;
            case 4:
                deleteBook(books, count);
                break;
            case 5:
                return; // Exit Admin menu
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

// Add a new book
void addBook(struct Admin books[], int *count) {
    struct Admin newBook;
    int unique = 1;

    printf("Enter Book ID: ");
    scanf("%d", &newBook.bookID);

    // Check if book ID already exists
    for (int i = 0; i < *count; i++) {
        if (books[i].bookID == newBook.bookID) {
            unique = 0;
            break;
        }
    }

    if (!unique) {
        printf("Book ID already exists. Please try again.\n");
        return;
    }

    printf("Enter Title: ");
    getchar(); // Clear newline from input buffer
    fgets(newBook.title, 100, stdin);
    newBook.title[strcspn(newBook.title, "\n")] = '\0'; // Remove trailing newline

    printf("Enter Author: ");
    fgets(newBook.author, 50, stdin);
    newBook.author[strcspn(newBook.author, "\n")] = '\0'; // Remove trailing newline

    printf("Enter Price: ");
    scanf("%f", &newBook.price);

    books[*count] = newBook;
    (*count)++;

    printf("Book added successfully.\n");
}

// Display all books
void displayBooks(struct Admin books[], int count) {
    if (count == 0) {
        printf("No books available.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("\nBook ID: %d\n", books[i].bookID);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
    }
}

// Update book price
void updateBookPrice(struct Admin books[], int count) {
    int bookID;
    int found = 0;

    printf("Enter Book ID to update the price: ");
    scanf("%d", &bookID);

    for (int i = 0; i < count; i++) {
        if (books[i].bookID == bookID) {
            printf("Current Price: %.2f\n", books[i].price);
            printf("Enter new Price: ");
            scanf("%f", &books[i].price);
            printf("Book price updated successfully.\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book ID not found.\n");
    }
}

// Delete a book
int deleteBook(struct Admin books[], int *count) {
    int bookID;
    int found = 0;

    printf("Enter Book ID to delete: ");
    scanf("%d", &bookID);

    for (int i = 0; i < *count; i++) {
        if (books[i].bookID == bookID) {
            found = 1;
            // Shift remaining books
            for (int j = i; j < *count - 1; j++) {
                books[j] = books[j + 1];
            }
            (*count)--;
            printf("Book with ID %d deleted successfully.\n", bookID);
            break;
        }
    }

    if (!found) {
        printf("Book ID not found.\n");
    }

    return found;
}

// User menu function
void UserMenu(struct Admin books[], struct User users[], int bookCount, int *userCount) {
    int choice;

    while (1) {
        printf("\nUSER MENU\n");
        printf("1. Registration\n");
        printf("2. Display Books by Name\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                registration(users, userCount);
                break;
            case 2:
                displayBookByName(books, bookCount);
                break;
            case 3:
                return; // Exit User menu
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

// User registration function
void registration(struct User users[], int *userCount) {
    struct User newUser;

    printf("Enter Username: ");
    scanf("%s", newUser.username);

    printf("Enter Name: ");
    scanf("%s", newUser.name);

    printf("Enter Age: ");
    scanf("%d", &newUser.age);

    printf("Enter Place: ");
    scanf("%s", newUser.place);

    printf("Enter Password: ");
    scanf("%d", &newUser.password);

    users[*userCount] = newUser;
    (*userCount)++;

    printf("User registered successfully.\n");
}

// Display books by title (in this case just displays all books)
void displayBookByName(struct Admin books[], int count) {
    if (count == 0) {
        printf("No books available.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("\nBook Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
    }
}


