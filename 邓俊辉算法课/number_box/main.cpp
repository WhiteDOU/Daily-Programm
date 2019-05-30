#include <iostream>
#include <vector>

#define ll long long
using namespace std;
const int N = 1000005;
vector<ll> table[N];

int Hash(ll x) {
    return x % N;
}

bool check(int op, ll x) {
    int h = Hash(x);
    vector<ll>::iterator ptr = table[h].end();
    for (vector<ll>::iterator it1 = table[h].begin(); it1 != table[h].end(); ++it1) {
         if(*(it1)==x)
         {
             ptr=it1;
             break;
         }
    }
    if(op==1)
    {
        if(ptr==table[h].end())
        {
            table[h].push_back(x);
            return 1;
        }
        return 0;
    }
    else
    {
        if(ptr!=table[h].end())
        {
            *ptr=table[h].back();
            table[h].pop_back();
            return  1;
        }
        return 0;
    }

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}