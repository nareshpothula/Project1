#include<iostream>
using namespace std;
class A
{
	int x;
	friend void	fun(A);
};
	void fun(t)
	{
		x=9;
		cout<<x<<endl;
	}

	int main()
	{
		A t;
			
		fun(t);	
	}
