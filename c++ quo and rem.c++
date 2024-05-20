#include <iostream>
using namespace std;
int main(){
	int n1,n2,quo,rem;
	cout<<"Enter the divider and divident : ";
	cin>>n1>>n2;
	quo=n1/n2;
	rem=n1%n2;
	cout<<"the quotient = "<<quo<<endl;
	cout<<"The remainder = "<<rem;
	return 0;
}
