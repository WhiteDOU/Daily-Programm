#include <iostream>
#include <string>
#include <vector>
using namespace std;
const int N = 100005;

struct Node {
    int val, l, r;
} t[N];//等价于 node[] t=new node[N];
int cnt,root;


int insert(int v, int x) {
    if (x ) {
        cnt++;
        x = cnt;
        t[x].val = v;
        t[x].l = 0;
        t[x].r = 0;
        return x;
    }
    if (t[x].val > v)
        t[x].l = insert(v, t[x].l);
    else
        t[x].r = insert(v, t[x].r);
    return x;
}

void dir(int x,vector<int> &ans)
{
    if(x!=0){
        ans.push_back(x);
        dir(t[x].l,ans);
        dir(t[x].r,ans);
    }

}
void lrd(int x,vector<int> &ans)
{
    if(x)
    {
        lrd(t[x].r,ans);
        lrd(t[x].r,ans);
        ans.push_back(x);
    }
}
vector<int> getAnswer(int n,vector<int> sequence)
{
    root=cnt=0;
    for(int i=0;i<sequence.size();i++)
    {
        root=insert(sequence[i],root);
    }
    vector<int> ans;
    dir(root,ans);
    lrd(root,ans);
    return  ans;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> ans;
    for(int i=0;i<100;i++)
    {
        ans.push_back(i);
    }
    for(int i=0;i<100;i++)
    {
        cout<<ans.back();
        ans.pop_back();
    }
    return 0;
}