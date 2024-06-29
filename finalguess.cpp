//guess number
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int x ,y;
class game
{
	public: 
	int fun1()
	{
	cout <<"\npress 1 to choose easy level ";
    cout <<"\npress 2 to choose hard level " ;	
	}
	int fun2()
{
	
	cout <<"\nenter the level:",x;
    cin>>x;
   
if(x<2){
	
	 cout<<"\neasy level:\n you have 5 chances to guess a number between 1 to 100";
}
else 
	{
	 cout<<"hard level :you have 3 chances to guess a number between 1 to 100";
    }
}
};
class player
{
public:
  int randomfun()
  {
  	
     int i, guess,randomNumber;
     for (int i = 1; i <=5 ; i++) 
     {
         srand(time(0)); 
     	randomNumber= (rand() % (100-1))+1;
     	cout<<rand()<<" ";
     
  
     	cout<<"\nenter the number :";
        cin>>guess;
     if(guess==randomNumber){
     	cout<<"\ncorrect answer";
     	break;
     }
     else if (guess>randomNumber){
         cout<<"try again"<<endl;
     }
     else{
     	cout<<"less then guess number";
	 }	
	}
	}
};
int main()
{
game g1;
g1.fun1();
g1.fun2();
player p1;
p1.randomfun();
}
