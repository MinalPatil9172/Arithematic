#include<stdio.h>
#include<iostream>
using namespace std;
class SimpleCalculator
{
   public:
   
   SimpleCalculator(int iValue1,int iValue2,char op)
   {
            
           switch(op)
                {
                      case '+':
                      cout<<"Addition of two numbers\n"<<iValue1+iValue2<<"\n";
                       break;
                     
                      case '-':
                      cout<<"Substraction of two numbers\n"<<iValue1-iValue2<<"\n";
                       break;

                      case '*':
                      cout<<"Multiplication of two numbers\n"<<iValue1*iValue2<<"\n";
                       break;

                      case '/':
                      cout<<"Division of two numbers\n"<<iValue1/iValue2<<"\n";
                      break;

                      default:
                      cout<<"Error\n";
                       break;
    
                }

       
      }
};
int main()
{
    int iNo1=0, iNo2=0;
    char iNo3;
    cout<<"Enter First number";
    cin>>iNo1;
    cout<<"Enter second number";
    cin>>iNo2;
    cout<<"Enter operation u want to perform\n";
     cin>>iNo3;
      SimpleCalculator obj(iNo1,iNo2,iNo3);
   

    return 0;

}
