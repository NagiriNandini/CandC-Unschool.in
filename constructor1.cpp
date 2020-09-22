#include<iostream>
using namespace std;
class Calculator
{
    private:
        int x,y;
    public:
    	Calculator(int a,int b)
    	{
    		x=20;
    		y=2;
		}
        int add();
        int sub();
        int mul();
        int div();
        int mod();
};
int Calculator::add()
{
    cout<<"Addition="<<x+y<<endl;
    return(x+y);
}
int Calculator::sub()
{
    cout<<"Subtraction="<<x-y<<endl;
    return(x-y);
}
int Calculator::mul()
{
    cout<<"Multiplication="<<x*y<<endl;
    return(x*y);
}
int Calculator::div()
{
    cout<<"Division="<<x/y<<endl;
    return(x/y);
}
int Calculator::mod()
{
	cout<<"Modulus="<<x%y<<endl;
	return(x%y);
}
int main()
{
    Calculator obj(10,20);
    char ch;
    while(1)
    {
    cout<<"+:Addition"<<endl;
    cout<<"-:Subtraction"<<endl;
    cout<<"*:Multiply"<<endl;
    cout<<"/:Division"<<endl;
    cout<<"%:Modulus"<<endl;
    cout<<"Enter your Choice"<<endl;
    cin>>ch;
    switch(ch)
    {
        case'+':
            obj.add();
            break;
        case'-':
            obj.sub();
            break;
        case'*':
            obj.mul();
            break;
        case'/':
            obj.div();
            break;
        case'%':
        	obj.mod();
        	break;
        default:
        	cout<<"Invalid operator"<<endl;
    }
    }
    return 0;
} 
