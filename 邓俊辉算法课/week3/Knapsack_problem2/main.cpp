#include <iostream>
#include <vector>
using namespace std;

const int N=2005;
int d[N][N],f[N][N];

vector<int> get_answer(int n,vector<int> w,vector<int> v,int q,vector<int>qv,vector<int>qx)
{
    for (int i = 1; i <=n ; ++i) {
        for (int V = 0; V < v[i]; ++V) {
            d[i][V]=d[i-1][V];
            for (int V = v[i]; V <=5000; ++V) {
                d[i][V]=max(d[i-1][V],d[i-1][V-v[i]]+w[i]);
            }
        }
    }
    for (int i = 1; i <=n ; ++i) {
        for (int V = 0; V < v[i]; ++V) {
            f[i][V]=f[i+1][V];
            for (int V = v[i]; V <=5000; ++V) {
                f[i][V]=max(f[i+1][V],f[i+1][V-v[i]]+w[i]);
            }
        }
    }
    vector<int> ans;
    for(int k=1;k<=q;k++)
    {
        int x=qx[k],V=qv[k];
        int mx=0;
        for(int i=0;i<=V;i++){
            mx=max(mx,d[x-1][i]+f[x+1][V-i]);

        }
        ans.push_back(mx);
    }
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}