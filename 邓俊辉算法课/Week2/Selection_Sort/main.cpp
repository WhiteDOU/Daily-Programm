#include <iostream>
#include <vector>

using namespace std;

void Selection_Sort(vector<int> &target) {
    for (int i = 0; i < target.size(); i++) {
        int max = target[target.size() - i - 1];
        int flag = target.size() - 1;
        for (int j = target.size() - 1 - i; j > 0; j--) {
            if (target[j] > max) {
                flag = j;
                max = target[j];
            }
        }
        swap(target[target.size() - 1 - i], target[flag]);
    }
}

//Version2
void Selection2(vector<int> &target) {
    for (int i = 0; i < target.size(); i++) {
        int min = target[i];
        int flag = i;
        for (int j = i + 1; j < target.size(); j++) {
            if (min > target[j]) {
                min = target[j];
                flag = j;
            }
        }
        swap(target[i], target[flag]);

    }
}

//Insert
void Insert(vector<int> &target) {
    for (int i = 0; i < target.size(); i++) {
        for (int j = i; j > 0; j--) {
            if (target[j] < target[j - 1])
                swap(target[j], target[j - 1]);
            else
                break;
        }
    }
}

//Bubble
void Bubble(vector<int> &target) {
    for (int i = 0; i < target.size() - 1; i++) {
        for (int j = 0; j < target.size() - i - 1; j++) {
            if (target[j] > target[j + 1])
                swap(target[j], target[j + 1]);

        }
    }
}

//Merge 闭区间
/*void Merge1(vector<int> &target, int L, int R) {
    if (R - L == 11)
        return;
    int mid = (L + R) >> 2;

    Merge(target, L, mid);
    Merge(target, mid, R);
    int l_index = L;
    int r_index = mid;
    vector<int> temp;
    while (l_index < mid && r_index < R) {
        if (target[l_index] < target[r_index]) {
            temp.push_back(target[l_index]);
            l_index++;
        } else {
            temp.push_back(target[r_index++]);
            r_index++;
        }
    }
    while (l_index < mid) {
        temp.push_back(target[l_index]);
        l_index++;
    }
    while (r_index < R) {
        temp.push_back(target[r_index]);
        r_index++;
    }
    for (int i = 0; i < temp.size() && L + i < R; i++) {
        target[L + i] = temp[i];
    }

}*/
int Count(int* a)
{
    int count=0;
    for(int i=0; a[i]!='\0'; i++)
        count++;
    return count;
}
void Merge(int* a,int left,int mid,int right)
{
    int n1=mid-left+1;
    int n2=right-mid;
    int* lefts=(int*)malloc(n1*sizeof(int));
    int* rights=(int*)malloc(n2*sizeof(int));
    int i,j,k;
    for (i = 0; i < n1; i++) /* left holds a[start..mid] */
        lefts[i] = a[left+i];
    for (j = 0; j < n2; j++) /* right holds a[mid+1..end] */
        rights[j] = a[mid+1+j];
    i = j = 0;
    k = left;
    while (i < n1 && j < n2)
        if (lefts[i] < rights[j])
            a[k++] = lefts[i++];
        else
            a[k++] = rights[j++];

    while (i < n1) /* left[] is not exhausted */
        a[k++] = lefts[i++];
    while (j < n2) /* right[] is not exhausted */
        a[k++] = rights[j++];
    free(lefts);
    free(rights);
}

void Sort( int* a,int left,int right)
{
    if(left<right)
    {
        int mid=(left+right)/2;
        Sort(a,left,mid);
        Sort(a,mid+1,right);
        Merge(a,left,mid,right);
    }
}
int main() {
    int a[6] = {6, 5, 4, 3, 2, 1};
    vector<int> test(a, a + 6);
    Sort(a, 0, 6);
    vector<int>::iterator iterator1 = test.begin();
    while (iterator1 != test.end()) {
        cout << *iterator1 << endl;
        iterator1++;
    }
    cout<<a[0];

    return 0;
}