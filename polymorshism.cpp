#include<iostream>
using namespace std;
class B
{
	public : 
	void Display()
	{
		cout<<" Display of Class B Called "<<endl;
	}
};
class D1 : public B
{
	public : 
	void Display()
	{
		cout << " Display of Class D1 is Called ."<< endl;
	}
};
class D2 : public B
{
	public :
		Display ()
		{
			cout <<" Display Of Class D2 is Called "<< endl;
		}
	};
{
	cout<<" Display of Class D3 is Called "<< endl;
}




