#include<iostream>
using namespace std;
float area(float r)
{
        return(3.14 * r * r);
}
double area(double b,double h)
{
        return(0.5 * b * h);
}
int area(int l,int b)
{
        return (l * b);
}
int main()
{
        float l,b,h,r;
        int ch;
        do
        {
                cout<<"\n\n*****Menu****\n\n";
                cout<<"\n 1. Circle";
                cout<<"\n 2. Triangle";
                cout<<"\n 3. Rectangle";
                cout<<"\n 4. Exit";
                cout<<"\n\n Enter Your Choice : ";
                cin>>ch;
                switch(ch)
                {
                        case 1:
                        {
                                cout<<"\n Enter the Radius of Circle : ";
                                cin>>r;
                                cout<<"\n Area of Circle : "<<area(r);
                                break;
                        }
                        case 2:
                        {
                                cout<<"\n Enter the Base & Height of Triangle : ";
                                cin>>b>>h;
                                cout<<"\n Area of Triangle : "<<area(b,h);
                                break;
                        }
                        case 3:
                        {
                                cout<<"\n Enter the Length & Bredth of Rectangle : ";
                                cin>>l>>b;
                                cout<<"\n Area of Rectangle : "<<area(l,b);
                                break;
                        }
                        case 4:
                                exit(0);
                        default:
                                cout<<"\n Invalid Choice... ";
                }
        }while(ch!=4);
        return 0;
}


