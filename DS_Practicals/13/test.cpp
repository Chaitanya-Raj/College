#include<iostream>
using namespace std;

int con(int x,int y)
{
    int con=x&y;
    return con;
}

int dis(int x,int y)
{
    int dis=x|y;
    return dis;
}

int nor(int x,int y)
{
    int nor=!dis(x,y);
    return nor;
}

int xorf(int x,int y)
{
    int xorf=x^y;
    return xorf;
}

int xnor(int x,int y)
{
    int xnor=!xorf(x,y);
    return xnor;
}

int nand(int x,int y)
{
    int nand=!con(x,y);
    return nand;
}

int cond(int x,int y)
{
    int cond=!x|y;
    return cond;
}

int bicond(int x,int y)
{
    int bicond=((!x|y)&(!y|x));
    return bicond;
}

int negx(int x)
{
    int negx=!x;
    return negx;
}

int negy(int y)
{
    int negy=!y;
    return negy;
}


int main()
{
    int x,y,ch=1;
    cout<<"\nEnter x and y :"<<endl;
    cin>>x>>y;
    /*
    cout<<"\n\nChoose the operation : ";
    cout<<"\n\n1.Conjunction";
    cout<<"\n2.Disjunction";
    cout<<"\n3.XOR";
    cout<<"\n4.Conditional";
    cout<<"\n5.Biconditional";
    cout<<"\n6.XNOR";
    cout<<"\n7.Negation";
    cout<<"\n8.NAND";
    cout<<"\n9.NOR"<<endl;
    cin>>ch;
    */
    switch(ch)
    {
        case 1:
        {
            cout<<endl<<"x\ty\tCon"<<endl;
            cout<<x<<"\t"<<y<<"\t"<<con(x,y)<<endl;
        }
        case 2:
        {
            cout<<endl<<"x\ty\tDis"<<endl;
            cout<<x<<"\t"<<y<<"\t"<<dis(x,y)<<endl;
        }
        case 3:
        {
            cout<<endl<<"x\ty\tXOR"<<endl;
            cout<<x<<"\t"<<y<<"\t"<<xorf(x,y)<<endl;
        }
        case 4:
        {
            cout<<endl<<"x\ty\tCond"<<endl;
            cout<<x<<"\t"<<y<<"\t"<<cond(x,y)<<endl;
        }
        case 5:
        {
            cout<<endl<<"x\ty\tBicond"<<endl;
            cout<<x<<"\t"<<y<<"\t"<<bicond(x,y)<<endl;
        }
        case 6:
        {
            cout<<endl<<"x\ty\tXNOR"<<endl;
            cout<<x<<"\t"<<y<<"\t"<<xnor(x,y)<<endl;
        }
        case 7:
        {
            cout<<endl<<"x\ty\t~x\t~y"<<endl;
            cout<<x<<"\t"<<y<<"\t"<<negx(x)<<"\t"<<negy(y)<<endl;
        }
        case 8:
        {
            cout<<endl<<"x\ty\tNAND"<<endl;
            cout<<x<<"\t"<<y<<"\t"<<nand(x,y)<<endl;
        }
        case 9:
        {
            cout<<endl<<"x\ty\tNOR"<<endl;
            cout<<x<<"\t"<<y<<"\t"<<nor(x,y)<<endl;
        }
        /*
        default:
        {
            cout<<"wrong choice";
        }
        */
    }
    return 0;
}