#ifndef _PHONEBOOK_H
#define _PHONEBOOK_H

#ifndef MAX_LAST_NAME_SIZE
#define MAX_LAST_NAME_SIZE 16
#endif

/* original version */
typedef struct __PHONE_BOOK_ENTRY {
    char lastName[MAX_LAST_NAME_SIZE];
    struct __PHONE_BOOK_ENTRY *pNext;
    struct __PHONE_BOOK_CONTENT *pContent;
} entry;

typedef struct __PHONE_BOOK_CONTENT {
    struct __PHONE_BOOK_ENTRY *pLastname;
    char firstName[16];
    char email[16];
    char phone[10];
    char cell[10];
    char addr1[16];
    char addr2[16];
    char city[16];
    char state[2];
    char zip[5];
} content;

entry *findName(char lastname[], entry *pHead);
entry *append(char lastName[], entry *e);

#endif
