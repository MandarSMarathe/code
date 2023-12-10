#include<stdio.h>
#include<malloc.h>

struct Bnode
{
	int data;
	struct Bnode* left;
	struct Bnode* right;
};

struct Bnode* createNode(int data)
{
	struct Bnode *n;
	n=(struct Bnode*)malloc(sizeof(struct Bnode));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}

void preorder(struct Bnode* root)
{
	if(root!=NULL)
	{
		printf("%d\t",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(struct Bnode* root)
{
	if(root!=NULL)
	{
		
		postorder(root->left);
		postorder(root->right);
		printf("%d\t",root->data);
	}
}

void inorder(struct Bnode* root)
{
	if(root!=NULL)
	{
		
		inorder(root->left);
		printf("%d\t",root->data);
		inorder(root->right);
		
	}
}

int main()
{
	/*struct Bnode *p;
	p=(struct Bnode*)malloc(sizeof(struct Bnode));
	p->left=NULL;
	p->right=NULL;
	*/
	struct Bnode *p=createNode(4);
	struct Bnode *p1=createNode(1);
	struct Bnode *p2=createNode(6);
	struct Bnode *p3=createNode(5);
	struct Bnode *p4=createNode(2);
	
	
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	preorder(p);
	printf("\n");
	postorder(p);
	printf("\n");
	inorder(p);
	return 0;
}
