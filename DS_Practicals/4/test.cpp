#include<iostream>
#include<math.h>
#include "Data.h"
using namespace std;

int main()
{
    Relation r;
    r.input();
    r.printMatrix();
    r.reflexive();
    r.symmetric();
    r.anti_symmetric();
    r.transitive();
    if(r.rflag&&r.sflag&&r.tflag)
    {
        cout<<"\nThe relation is an Equivalence relation";
    }
    if(r.rflag&&r.aflag&&r.tflag)
    {
        cout<<"\nThe relation is a Partial Order relation";
    }
    if(!r.rflag)
    {
        cout<<"\nNone";
    }
    return 0;
}