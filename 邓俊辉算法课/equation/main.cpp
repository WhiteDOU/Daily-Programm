#include <iostream>
#include <vector>
#include <string>

using namespace std;
const int N = 500005;
int Father[N],rank[N];
vector<int> Set[N];

//暴力
/*string getAnswer(int n, int m, vector<int> A, vector<int> B, vector<int> E) {
    //把==1的条件提到前面
    int cnt = 0;
    for (int i = 0; i < m; i++) {
        if (E[i] == 1) {
            swap(A[i], A[cnt]);
            swap(B[i], B[cnt]);
            swap(E[i], E[cnt]);
            ++cnt;
        }
    }
    for (int i = 0; i < m; i++) {
        if (E[i] == 1) {
            int ida = ID[a];

        }
    }
    for (
            int i = 0;
            i < m;
            i++) {
        if (E[i] == 1) {
            int ida=ID[a];
            int idb=ID[b];
            if(Set[ida].size()>Set[idb].size())
                swap(ida,idb);
            for(int j=0;j<Set[ida].size();++j)
            {
                int c=Set[ida][j];
                Set[idb].push_back(c);
            }
        }
    }
}*/

int find(int x)
{
    return  Father[x]==x?x:Father[x]=find(Father[x]);
}
string getAnswer(int n,int m,vector<int> A,vector<int> B,vector<int> E)
{
    for(int i=1;i<=n;i++)
    {
        Father[i]=i;
        rank[i]=0;
    }
    //exchange
    int cnt=0;
    for(int i=0;i<m;i++)
    {
        if(E[i]==1)
        {
            swap(A[i],A[cnt]);
            swap(B[i],B[cnt]);
            swap(E[i],E[cnt]);
            cnt++;
        }
    }
    for(int i=0;i<m;i++)
    {
        int setA=find(A[i]);
        int setB=find(B[i]);
        if(E[i]==0)
        {
            if(setA!=setB)
                return "No";
            else{
                if(setA==setB)
                {
                    if(rank[setA]>rank[setB])
                    {
                        swap(setA,setB);
                    }
                    Father[setA]=setB;
                    if(rank[setA]==rank[setB])
                        rank[setB]++;
                }
            }
        }
    }
    return "Yes";

}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}