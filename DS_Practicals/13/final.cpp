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
     
        cout<<"\n  x\t|  y\t|  OR\t|  AND\t|  NOR\t|  NAND\t|  XOR\t|  XNOR\t| Cond\t|Bicond\t|  ~x\t|  ~y\t"<<endl;
        cout<<"  "<<x<<"\t|  "<<y<<"\t|  "<<dis<<"\t|  "<<con<<"\t|  "<<NOR<<"\t|  "<<NAND<<"\t|  ";
        cout<<XORf<<"\t|  "<<XNOR<<"\t|  "<<Cond<<"\t|  "<<Bicond<<"\t|  "<<Negx<<"\t|  "<<Negy<<endl;

        cout<<"\ndo you want to continue(y/n)\n";
        cin>>ch;
    }while(ch=='y');

    return 0;
}
