#ifndef __C_LINKED_LIST_H__
#define __C_LINKED_LIST_H__

#define TRUE	1
#define FALSE   0

typedef struct _people
{
	int id;
	char name[20];

}People;

typedef People* Data;

typedef struct _node
{
    Data data;
    struct _node* next;
}Node;

typedef struct _CLL
{
    Node* tail;
    Node* cur;
    Node* before;
    int numofData;
}CList;

typedef CList List;

void ListInit(List* plist);
void LInsert(List* plist, Data data);
void LInsertFront(List* plist, Data data);

int LFirst(List* plist, Data* pdata);
int LNext(List* plist, Data* pdata);
Data LRemove(List* plist);
int LCount(List* plist);

#endif // !__C_LINKED_LIST_H__
