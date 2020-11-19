#ifndef list_h
#define list_h
typedef int dataType;
typedef struct node{
	dataType data;
	struct node *next;
}LinkList,node;

LinkList *CreateList();
int size(LinkList *L);
void insert(LinkList *L,int k,dataType x);
void Delete(LinkList *L,int k);
int Empty(LinkList *L);
dataType GetData(LinkList *L,int x);
node *Find(LinkList *L,dataType x);
void Print(LinkList *L);
void createlist();
void delete();

#define n 11
#define m 3
#endif
