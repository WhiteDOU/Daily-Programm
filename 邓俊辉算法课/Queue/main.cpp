#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

const int N=100005;
string Quene[N];
int head,tail;
void enqueue(string name)
{
    Quene[tail++]=name;
    if(tail==N)
        tail=0;
}
string dequeue()
{
    string ret=Quene[head-1];
    head=head+1;
    if(head==N)
        head=0;
    return ret;
}
string query(int pos)
{
    int ret=0;
    if(head+pos-1>=N)
        ret=Quene[head+pos-1)%100000];
    else
        ret=Quene[head+pos-1];
    return  ret;


}
int main() {

    std::cout << "Hello, World!" << std::endl;
    return 0;
}