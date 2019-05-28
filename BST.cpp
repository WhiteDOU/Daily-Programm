#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

const int MAXN = 110;

struct Node
{
	int value;
	Node *lc;
	Node *rc;
} node[MAXN];

void search(Node *node1, int x)
{
	if (node1 == NULL)
	{
		return;
	}
	if (node1->value == x)
	{
		cout << node1->value;
	} else if (node1->value > x)
	{
		search(node->lc, x);
	} else
	{
		search(node1->rc, x);
	}
}

void insert(Node *n, int x)
{
	if (n == NULL)
	{
		n = new Node;
		n->value = x;
		return;
	}
	if (x == n->value)
	{
		return;
	} else if (x < n->value)
	{
		insert(n->lc , x);
	}
	else
		insert(n->rc,x);
}

Node* create(int data[],int n)
{
	Node* root = NULL;
	for (int i = 0; i < n; ++i)
	{
		insert(root,data[i]);
	}
	return root;
}