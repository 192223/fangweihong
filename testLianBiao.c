nclude<stdio.h>
#include<stdlib.h>
#include"LianBiao.h"


int main(){
	LinkList *list = (LinkList *)malloc(sizeof(list));
	insert(list,1,10);
	insert(list,1,20);
	Delete(list,2);
	insert(list,1,30);
	insert(list,1,40);
	printf("链表的元素个数为：%d\n",size(list));
	Print(list);
	printf("链表的第2个元素为%d\n",GetData(list,2));
	createlist();
	delete();

}
