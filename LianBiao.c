#include<stdlib.h>
#include<malloc.h>
#include"LianBiao.h"

LinkList* CreatList(){
	LinkList *head;
	head = (LinkList*)malloc(sizeof(LinkList));
	head->next = NULL;
	return head;
}

int size(LinkList *L){
	node *p = L->next;                                                                                                                                           int k = 0;
	while(p){
		k++;
		p = p->next;
	}
	return k;
}

void insert(LinkList *L,int k,dataType x){
	if(k<1) exit(1);
	node *p = L;
	int i = 0;
	while(p && i<k-1){
		p = p->next;
		i++;
	}
	if(!p) exit(1);
	node *s = (LinkList*)malloc(sizeof(LinkList));
	s->data=x;
	s->next=p->next;
	p->next=s;
}

void Delete(LinkList *L,int k){
	if(k<1) exit(1);
	node *p = L;
	int i = 0;
	while(p->next && i<k-1){
		p = p->next;
		i++;
	}
	if(p->next==NULL) exit(1);
	node *q = p->next;
	p->next = q->next;
	free(q);
}

int Empty(LinkList *L){
	return L->next == NULL;
}

dataType GetData(LinkList *L,int k){
	if (k<1) exit(1);
	node *p = L;
	int i = 0;
	while (p && i<k){
		p = p->next;
		i++;
	}
	if (!p) exit(1);
	return p->data;
}
node* Find(LinkList *L,dataType x){

	node *p = L->next;
	while(p && p->next)
		p = p->next;
	return p;
}
void Print (LinkList *L){
	node *p = L->next;
	node *q;
	while (p){
		printf(" %d  ",p->data);
		p = p->next;

	}
	printf("\n");
}


void ClearList(LinkList *L){
	node *p = L->next;
	node *q;
	while(p){

		q = p;
		p = p->next;
		free(q);
	}
	L->next = NULL;
}

void createlist(){
	node *p, *q, *r;
	p = q = (node*)malloc(sizeof(node));
	p ->data = 1;
	for (int i=2; i<=n; i++){
		r = (node*)malloc(sizeof(node));
		r ->data = i;
		q->next = r;
		q = r;
	}
	q ->next= p;
	q = p;
	return ;
}

void delete(){
	node *p, *q;
	int k = 0;
	while (q->next !=q){
		k++;
		if (k == m){
			p->next = q->next;
			free(q);
			q = p->next;
			k = 0;
		}else{
			p = q;
			q = q->next;
		}
	}
	printf("最后一个获胜者的编号：%d\n",q->data+1);
}

