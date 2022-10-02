#include<iostream>
using namespace std;

struct emp
{
    int num;
    char nm[25];
    double base;
};
typedef struct emp emp;

emp empinfo(emp e)
{
    cout<<endl<<"Enter employee no. : ";
    cin>>e.num;
    fflush(stdin);
    cout<<endl<<"Enter name of the employee : ";
    gets(e.nm);
    cout<<endl<<"Enter the base salary of the employee : ";
    cin>>e.base;

    return e;

    
}

int main()
{
    emp e;
    double n,da,hra,med=1000,pf,loan,gross,net;

    e=empinfo(e);

    da=0.2*e.base;
    hra=0.2*e.base;
    pf=0.25*e.base;
    loan=0.08*e.base;

    gross=e.base+da+hra+pf+loan;
    net=e.base+da+hra;

    cout<<endl<<"Employee no. : "<<e.num;
    cout<<endl<<"Name : "<<e.nm;
    cout<<endl<<"Base Salary : "<<e.base;
    cout<<endl<<"Dearness Allowance : "<<da;
    cout<<endl<<"House Rent Allowance : "<<hra;
    cout<<endl<<"Employee PF Contribution : "<<pf;
    cout<<endl<<"Loan Deduction : "<<loan<<endl;
    cout<<endl<<"Gross salary of the employee : "<<gross<<endl;
    cout<<endl<<"Net salary of the employee : "<<net;

    

    return 0;
}