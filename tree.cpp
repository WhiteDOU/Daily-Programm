#include <cstdio>
#include <cstring>
#include <queue>
#include <iostream>


using namespace std;


struct node
{
	int data;
	node *lc;
	node *rc;
};
int pre[10],in[10];
node *newNode(int v)
{
	node *Node = new node;
	Node->data = v;
	Node->lc = Node->rc = NULL;
	return Node;
}

void search(node *root, int x, int newdata)
{
	if (root == NULL)
		return;
	if (root->data == x)
		root->data = newdata;

	search(root->lc, x, newdata);
	search(root->rc, x, newdata);
}

void insert(node* &root, int x)
{
	if (root == NULL)
	{
		root = newNode(x);
		return;
	}
	if (root->lc)
	{
		insert(root->lc,x);
	} else
		insert(root->rc,x);

}
//
//node* create(int data[],int n)
//{
//    node* root = NULL;
//    for (int i = 0; i < n; ++i)
//    {
//        insert(root,data[i]);
//    }
//    return root;
//}


void preorder(node* root)
{
	if(root==NULL)
		return;
	cout << root->data;
	preorder(root->lc);
	preorder(root->rc);
}
void inorder(node* root)
{
	if (root == NULL)
		return;
	inorder(root->lc);
	cout << root->data;
	inorder(root->rc);
}

void layerorder(node* root)
{
	queue<node*> q;
	q.push(root);
	while (!q.empty())
	{
		node* now = q.front();
		q.pop();
		cout << now->data;
		if (now->lc)
			q.push(now->lc);
		if (now->rc)
			q.push(now->rc);
	}
}

node* create(int preL,int preR,int inL, int inR)
{
	if (preL > preR)
	{
		return NULL;
	}
	node* root = new node;
	root->data = pre[preL];
	int k=0;
	for (int k = inL; k <=inR ; ++k)
	{
		if (in[k] == pre[preL])
			break;
	}
	int numLeft = k - inL;
	root->lc = create(preL+1,preL+numLeft,inL,k-1);
	root->rc = create(preL+1+numLeft,preR,k+1,inR);
}
struct Node1
{
	int data;
	int child[maxn];
}Node[maxn];
int main()
{

}
