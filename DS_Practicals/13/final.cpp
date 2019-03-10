#include<iostream>
using namespace std;

int main()
{
    int x,y,dis,con,NOR,NAND,XORf,XNOR,Cond,Bicond,Negx,Negy;
    char ch;
    do
    {
            cout<<"Enter the value of x and y"<<endl;
            cin>>x>>y;
            dis=x|y;
            con=x&y;
            NOR=!dis;
            NAND=!con;
            XORf=x^y;
            XNOR=!XORf;
            Cond=!x|y;
            Bicond=((!x|y)&(!y|x));
            Negx=!x;
            Negy=!y;
     
        cout<<"\nx |y  |OR |AND|NOR|NAND|XOR|XNOR|Cond|Bicond|~x  |~y  "<<endl;
        cout<<x<<" | "<<y<<" | "<<dis<<" | "<<con<<" | "<<NOR<<" | "<<NAND<<"  | ";
        cout<<XORf<<" |"<<XNOR<<"   |"<<Cond<<"   |"<<Bicond<<"     |"<<Negx<<"   |"<<Negy<<endl;

        cout<<"\ndo you want to continue(y/n)\n";
        cin>>ch;
    }while(ch=='y');

    return 0;
}
