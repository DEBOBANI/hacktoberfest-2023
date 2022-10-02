RIYA MITTAL
•	C++
•	Location: India
•	Github: https://github.com/mit-riya
•	Quick sort program in c++

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void swap(int ar[],int i,int j){
    int temp=ar[i];
    ar[i]=ar[j];
    ar[j]=temp;
}

int partition(int ar[],int a,int b){
    int v=(b-a)/2;
    int i=a;int j;
    for(i;i<b;i++){
        if(ar[i]>v){
            break;
        }
    }
    if(i!=a){i--;j=i+1;}
    else{
        j=i;i=a-1;
    }
    while(j<b){
        if(ar[j]>ar[b]){
            j++;
        }
        else{
            swap(ar,i+1,j);
            i++;j++;
        }
    }
    swap(ar,i+1,b);
    return (i+1);
}

void qsort(int ar[],int a,int b){
    if(a>=b){
        return;
    }
    int p=partition(ar,a,b);
    qsort(ar,a,p-1);
    qsort(ar,p+1,b);
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    qsort(ar,0,n-1);
    for(auto x:ar){
        cout<<x<<" ";
    }
    return 0;
}
