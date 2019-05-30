#include <iostream>
#include <vector>
using namespace std;


//cnt统计逆序对数目
//temp是用辅助计算的临时数组
vector<int> seq,seqTemp;
long long cnt;

//Merge lr为左右端点,闭区间
void  MergeSort(int l,int r)
{
    if(r==l)//序列长度为1时return
        return;
    int mid=(l+r)>>1;
    MergeSort(1,mid);
    MergeSort(mid+1,r);
    int p=l,int q=mid+1;
    for(int i=l;i<=r;i++)
    {
        if(q>r||(p<=mid && seq[p]<seq[q]))
            seqTemp[i]=seq[p++];
        else
        {
            seqTemp[i]=seq[q++];
            cnt+=mid-p+1;
        }
    }
    for (int i = l; i < =r; ++i) {
        seq[i]=seqTemp[i];
    }

}

long long get_answer(int p,vector<int> a)
{
    seq=a;
    seqTemp.resize(a.size());
    cnt=0;
    MergeSort(0,a.size()-1)
    return  cnt

}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}