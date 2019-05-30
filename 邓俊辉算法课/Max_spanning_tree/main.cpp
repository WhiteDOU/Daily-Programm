#include <iostream>
#include<vector>
using namespace std;

const  int N=5000005;


class  UnionSet
{
public:
    int f[N];//father

    void init(int n)
    {
        for(int i=1;i<=n;i++)
            f[i]=i;
    }
    int find(int x)
    {
        return f[x]==x?x:f[x]=find(f[x]);
    }
    int merge(int x,int y)
    {
        int setX=find(x);
        int setY=find(y);
        if(setX!=setY)
        {
            f[setX]=setY;
            return  true;
        }
        return false;
    }
}us;
vector<int > getAnswer(int n,int m,vector<int> U,vector<int> V)
{
    vector<int> ans;
    us.init(n);
    for(int i=m-1;i>=0;--i)
    {
        if(us.merge(U[i],V[i]))
            ans.push_back(i+1);
    }
    reverse(ans.begin(),ans.end());
    return  ans;

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}