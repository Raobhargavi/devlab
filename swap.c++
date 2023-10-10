//swapping without using third variable
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	cin>>a>>b;
	
	b = a + b;
	a = b - a;
	b = b - a;

	cout << "After swapping a = " << a << " , b = " << b
		<< endl;
	return 0;
}
