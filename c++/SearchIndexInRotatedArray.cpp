#include <bits/stdc++.h>
using namespace std;

int minimum(vector<int>& a, int n) {
    int low = 0;
    int high = n-1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == a[high])
            high--;
        else if (a[mid] > a[high])
            low = mid + 1;
        elses
            high = mid;
    }
    return high;
}

int indexelement(vector<int>& a, int n,int key) {
    int low = 0;
    int high = n-1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] > key)
            high = mid - 1;
        else
            low = mid+1;
    }
    return -1;
}


int main() 
{
    int n,key; 
    cin>>n;
    vector<int> v;
  
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cin>>key;
    int index = minimum(v,n);
    reverse(v.begin()+index,v.end());
    reverse(v.begin(),v.begin()+index);
    reverse(v.begin(),v.end());
    cout<<indexelement(v,n,key);
    
    return 0;
}
