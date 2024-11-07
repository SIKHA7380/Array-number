#include<iostream>
using namespace std;
void printdata(int a[10])
{
	for(int i=0;i<5;i++)
	{
		cout<<" "<<a[i]*a[i];
	}
}
int main()
{
	int a[5]={1,2,3,4,5};
	printarray(a);
	return 0;
}
