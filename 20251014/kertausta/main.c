#include <stdio.h>
#include <string.h>

// Create struct
typedef struct Book {
    char name[50];
    int borrowed; // 0 - saatavilla, 1 - lainassa
}
book;

void createTestData(book *books)
{
    strcpy(books[0].name, "Sota ja rauha");
    books[0].borrowed = 0;
    strcpy(books[1].name, "Taru sormusten herrasta");
    books[1].borrowed = 0;
    strcpy(books[2].name, "Raamattu");
    books[2].borrowed = 0;
    strcpy(books[3].name, "Johdatus ohjelmointiin");
    books[3].borrowed = 0;
    strcpy(books[4].name, "Aku Ankka");
    books[4].borrowed = 1;
    strcpy(books[5].name, "Shantaram");
    books[5].borrowed = 0;
}

void printAllBooks(book *books)
{
    printf("\n------------ ALL BOOKS -------------\n");
    for ( int i = 0; i <= 4; i++)
    {
        printf("%s\n", books[i].name);
    }
}
void printAllBorrowedBooks(book *books)
{
    printf("\n------------ BORROWED BOOKS -------------\n");
    for ( int i = 0; i <= 5; i++)
    {
        // JOS borrowed on 1
        if ( books[i].borrowed == 1 )
        {
            printf("%s\n", books[i].name);
        }
    }
}
void borrowBook(book *books)
{
    // luo muuttuja
    char book[50];
    // pyydä käyttäjää syöttämään lainattan kirjan nimi
    printf("\nBook to borrow: ");
    // lue käyttäjän syöte
    gets(book);
    // etsi arraysta oikea kirja
    for ( int i = 0; i <= 5; i++)
    {
        // JOS annettu kirjan nimi on sama kuin loopissa olevan kirjan nimi
        if ( strcmp(books[i].name, book) == 0 )
        {
            // aseta borrowed-kentän arvoksi 1
            books[i].borrowed = 1;
            printf("\nBook borrowed succesfully");
            return;
        }
    }
    printf("\nNot found");
}
int main()
{
    // luo kirja-taulukko
    book books[10];
    // luo testidata
    createTestData(books);
    // tulosta kaikki kirjat
    printAllBooks(books);
    // tulosta lainassa olevat kirjat
    printAllBorrowedBooks(books);
    borrowBook(books);
    // tulosta lainassa olevat kirjat
    printAllBorrowedBooks(books);
    return 0;
}
