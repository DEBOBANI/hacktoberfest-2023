//    Name : Pradeep Khatri
//    Programming language : C++
//    Location : India
//    Github : "https://github.com/PradeepKhatri"
//    Implemented Insertion Sort in C++


#include <iostream>
using namespace std;

void printArray(int *A,int n)
{
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

void insertArray(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
}

void InsertionSort(int *A,int n)
{
    int temp;
    for(int i=1;i<n;i++)
    {
        temp = A[i];
        int j=i-1;
        while(j>=0 && A[j] > temp)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = temp;
    }
}


int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int A[n];
    cout<<"Enter Array elements : "<<endl;
    insertArray(A,n);
    cout<<"Array : ";
    printArray(A,n);
    InsertionSort(A,n);
    cout<<"Sorted Array : ";
    printArray(A,n);
}