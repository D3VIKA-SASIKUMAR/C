#include <stdio.h>
#include <string.h>


struct Book {
    int bookID;
    char title[100];
    char author[50];
    float price;
};


void addBook(struct Book books[], int *count);
void displayBooks(struct Book books[], int count);
void updateBookPrice(struct Book books[], int count);
void displayBookByID(struct Book books[], int count);
void findBookWithHighestPrice(struct Book books[], int count);

int main() {
    struct Book books[100]; 
    int count = 0; 
    int choice;

    while (1) {
        
        printf("\nLibrary Management System\n");
        printf("1. Add a New Book\n");
        printf("2. Display All Books\n");
        printf("3. Update Book Price\n");
        printf("4. Display Book by ID\n");
        printf("5. Find Book with Highest Price\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(books, &count);
                break;
            case 2:
                displayBooks(books, count);
                break;
            case 3:
                updateBookPrice(books, count);
                break;
            case 4:
                displayBookByID(books, count);
                break;
            case 5:
                findBookWithHighestPrice(books, count);
                break;
            case 6:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

void addBook(struct Book books[], int *count) {
    struct Book newBook;
    int unique = 1;

    printf("Enter Book ID: ");
    scanf("%d", &newBook.bookID);

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
    getchar(); 
    fgets(newBook.title, 100, stdin);
    newBook.title[strcspn(newBook.title, "\n")] = '\0'; 

    printf("Enter Author: ");
    fgets(newBook.author, 50, stdin);
    newBook.author[strcspn(newBook.author, "\n")] = '\0'; 

    printf("Enter Price: ");
    scanf("%f", &newBook.price);

    books[*count] = newBook;
    (*count)++;

    printf("Book added successfully.\n");
}

void displayBooks(struct Book books[], int count) {
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

void updateBookPrice(struct Book books[], int count) {
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

void displayBookByID(struct Book books[], int count) {
    int bookID;
    int found = 0;

    printf("Enter Book ID to display: ");
    scanf("%d", &bookID);

    for (int i = 0; i < count; i++) {
        if (books[i].bookID == bookID) {
            printf("\nBook ID: %d\n", books[i].bookID);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Price: %.2f\n", books[i].price);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book ID not found.\n");
    }
}

void findBookWithHighestPrice(struct Book books[], int count) {
    if (count == 0) {
        printf("No books available.\n");
        return;
    }

    int maxIndex = 0;
    for (int i = 1; i < count; i++) {
        if (books[i].price > books[maxIndex].price) {
            maxIndex = i;
        }
    }

    printf("\nBook with the highest price:\n");
    printf("Book ID: %d\n", books[maxIndex].bookID);
    printf("Title: %s\n", books[maxIndex].title);
    printf("Author: %s\n", books[maxIndex].author);
    printf("Price: %.2f\n", books[maxIndex].price);
}
