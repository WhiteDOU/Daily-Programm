#include <iostream>
#include<vector>
#include <vector>
using namespace std;

int Binary_Search(int a[],int l,int r,int x)
{
    int mid=(l+r)/2;
    if(l>r)
        return -1;

        if (x == a[mid])
            return mid;
        else if (x > a[mid])
            Binary_Search(a, mid + 1, r, x);
        else
            Binary_Search(a, l, mid - 1, x);

}

vector<int> test;
int main() {
    /*int x;
    while (cin>>x)
    {
        test.push_back(x);
    }
    vector<int>::iterator iterator1=test.begin();
    while (iterator1<test.end())
    {
        cout<<*iterator1<<endl;
        iterator1++;
    }*/
    int a[5]={1,3,4,5,7};
    cout<<Binary_Search(a,0,4,4);
    return 0;
}