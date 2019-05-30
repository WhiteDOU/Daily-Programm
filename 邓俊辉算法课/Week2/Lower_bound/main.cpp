#include <iostream>
#include <vector>
using namespace std;
class Stu
{
public:
    int grade;
    int pos;
};
bool cmp(Stu s,Stu b)
{
    return s.grade<b.grade;
}
vector<int> get_answer(int n,vector<int> a,int Q,vector<int> query)
{
    vector<int> ans;
    ans.clear();
    sort(a.begin(),a.end());
    for (int i = 0; i < Q; ++i) {
        int key=query[i];
        int l=-1,r= a.size();
        int mid;
        while(l+1<r)
        {
            mid=(l+r)>>1;
            if(a[mid]<key)
                l=mid;
            else
                r=mid;
        }
        int pos= r;
        if(pos>=n)
            ans.push_back(-1);
        else
            ans.push_back(a[pos]);
    }
    return ans;
}
int main() {
    int a[5]={4,5,2,6,11};
    Stu test[5];
    for (int i = 0; i <5 ; ++i) {
        test[i].grade=a[i];
        test[i].pos=i;
    }
    sort(test,test+5,cmp);
    for (int j = 0; j <5 ; ++j) {
        cout<<test[j].pos<<endl;
    }
    return 0;
}