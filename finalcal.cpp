//program of calculator

#include<iostream>
using namespace std;

class cal{
 public:
	int x,y;
    
	int fun1()
	{
		cout<<"enter two numbers :";
		cout<<"x=",x;
		cin>>x;
		cout<<"y=",y;
		cin>>y;
		
	
	char a;
	cout<<"\nenter operator :*,/,+,- :=";
	cin>>a;
    switch (a)
    
    {
    	case'+':
    		cout<<"addition of two numbers is :"<<x<<"+"<<y<<"="<<x+y;
    		
    		break;
    	case'*':
    		cout<<"multiplication of two numbers is :"<<x<<"*"<<y<<"="<<x*y;
    		
    		break;
    	case'/':
    	   cout<<"division of two numbers is :"<<x<<"/"<<y<<"="<<x/y;
    		
    		break;
    	case'-':
    		cout<<"substraction of two numbers is :"<<x<<"-"<<y<<"="<<x-y;
    		
    		break;
   	}
  }
};
int main()
{
	cal c1;
	c1.fun1();
}





