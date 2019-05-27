#include <iostream>
#include <algorithm>
#include <cmath>
#include <set>
#include <queue>
#include <utility>
#include <map>

using namespace std;

struct node
{
	int data;
	node *next;
};

node *create(int array)
{
	node *p;
	node *pre;
	node *head;
	head->next = NULL;
	pre = head;
	for (int i = 0; i < 5; ++i)
	{
		p = new node;
		p->data = array[i];
		p->next = NULL;
		pre->next = p;
		pre = p;
	}
	return head;
}

int search(node *head, int x)
{
	int count = 0;
	node *p = head->next;
	while (p)
	{
		if (p->data == x)
		{
			count++;
		}
		p = p->next;
	}
	return count;
}

void insert(node *head, int pos, int x)
{
	node *p = head;
	for (int i = 0; i < pos - 1; ++i)
	{
		p = p->next;
	}
	node *q = new node;
	q->data = x;
	q->next = p->next;
	p->next = q;
}

void del(node *head, int x)
{
	node* p = head->next;
	node* pre = head;
	while (p)
	{
		if (p->data == x)
		{
			pre->next = p -> next;
			delete(p);
			p = pre->next;
		}
		else
		{
			pre = p;
			p = p->next;
		}
	}
}

int main()
{
	node *node1 = new node;
	node1->data = 5;
}


