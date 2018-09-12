#include <iostream>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int gcd(int x, int y){
	if((x>=y) && (x%y==0))
	return y;
	else
	gcd(y,(x%y));
}
int main(int argc, char** argv) {
	int x,y,result;
	cout<<"Enter your first integer number:";
	cin>>x;
	cout<<"Enter your second integer number:";
	cin>>y;
	result=gcd(x,y);
	cout<<" GCD of "<<x<<  "  and  " <<y<< " is " <<result;
	return 0;
	
}
