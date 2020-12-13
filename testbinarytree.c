#include "binarytree.h"

int main(int argc,char **argv) {
	TreeNode *t;
	printf(
			"请按先序序列输入各节点的字符，某节点的左子树或右子树为空时输入一个字符#。\n");
	printf("如输入ABD#G###CE##F##\n");
	CreateTree(t, '#');
	printf("先序遍历为: ");
	PreOrder(t);
	printf("\n");
	PreOrder(t);
	printf("中序遍历为: ");
	printf("\n");
	InOrder(t);
	printf("后序遍历为: ");
	printf("\n");
	PostOrder(t);
	printf("层序遍历为: ");
	printf("\n");
	LevelOrder(t);
	printf("\n");
}
