// Name - KUSHAL MITRA
// C++
// Location - INDIA
// Github : https://github.com/Kusha-web

#include<iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n,num,digit,rev=0;
	cout<<"Enter a number to check pallindrome : ";
	cin>>n;
	num=n;
	while(n!=0)
	{
		digit=n%10;
		rev=(rev*10)+digit;
		n=n/10;
	}
	if(rev==num)
	cout<<"\nThe number you have enterred is pallindrome...";
	else
	cout<<"\nThe number you have enterred is not pallindrome...";
	
	getch();
	return 0;
}
