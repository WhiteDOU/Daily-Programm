#include <iostream>
#include <deque>
#include <queue>

using namespace std;
typedef long long ll;
//huffuman encoding
priority_queue<ll > pq;

ll getAnswer(int n,vector<ll> w)
{
    for(int i=0;i<n;i++)
    {
        pq.push(w[i]);
    }
    ll sum=0;
    while (pq.size()>1)
    {
        ll newEle=0;
        for(int k=0;k<2;k++)
        {
            newEle+=pq.top();
            pq.pop();
        }
        sum+=newEle;
        pq.push(newEle);
    }
    return sum;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}