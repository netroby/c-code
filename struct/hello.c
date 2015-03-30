#include <stdio.h>
#include <string.h>

struct books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main()
{
    struct books abook;

    strcpy(abook.title, "History of finance");
    strcpy(abook.author, "Zhang Min");
    strcpy(abook.subject, "Is a history of mature");
    abook.book_id = 23434;
    printf("Book title: %s\n", abook.title);
    printf("Book author: %s\n", abook.author);
    printf("Book subject: %s\n", abook.subject);
    printf("Book id: %d\n", abook.book_id);
    return 0;
}
