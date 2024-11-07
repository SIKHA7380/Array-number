#include<iostream>
using namespace std;
class square{
	public:
		void printarray(int a[10])
		{
			for(int i=0;i<5;i++){
				cout<<" "<<a[i]*a[i];
			}
		}
};
int main()
{
	int a[5]={1,2,3,4,5};
	square s;
	s.printarray(a);
	return 0;
}
