#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

const int N=100005;

string Stack[N];
int n,top;

void push(string name)
{
    Stack[++top]=name;
}
string pop()
{
    return Stack[top--];
}

string query(int pos)
{
    return  Stack[pos];
}
int main() {
    int n;
    scanf("%d",&n);
    char name[20];
}