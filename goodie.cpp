#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <vector>
#include <set>


using namespace std;
int max(int a,int b){
    return (a>b)?a:b;
}

int fun(set<int> &res,vector<int> arr,int i,int d,int n){
    if(n==0) return 0;
    int oldSize=res.size();
    res.insert(arr[i]);
    return max((res.size())+fun(res,arr,i+1,d,n-1),oldSize+fun(res,arr,i+d,d,n-d-1));
    
}
int main() {
    int n,k,d,tmp,na;
    cin>>n;
    cin>>k;
    cin>>d;
    na=n;
    vector<int> arr;
    set<int>  res;
    int max=0;
    while(na>0){
        cin>>tmp;
        arr.push_back(tmp);
        na--;
    }
    cout<<fun(res,arr,0,d,n);
    return 0;
}