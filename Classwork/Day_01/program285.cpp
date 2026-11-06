#include<iostream>
using namespace std;

class Arithematic
{
    public:
        double No1;
        double No2;

        Arithematic(double A , double B);
        double Addition();
        double Subtraction();
};

Arithematic :: Arithematic(double A , double B)
{
    No1 = A;
    No2 = B;
}

double Arithematic :: Addition()
{
    double Ans;
    Ans = No1 + No2;
    return Ans;
}

double Arithematic :: Subtraction()
{
    double Ans;
    Ans = No1 - No2;
    return Ans;
}

int main()
{
    Arithematic aobj1(10.5,11.6);
    Arithematic aobj2(20.5,21.6);

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";

    cout<<aobj1.Subtraction()<<"\n";
    cout<<aobj2.Subtraction()<<"\n";
    
    return EXIT_SUCCESS;
}

/*
function
    Return_Value Class_Name :: Function_Name(Parameters)
    {
        Body
    }
*/

/*
constructor sathi
    Class_Name :: Function_Name(Parameters)
    {
        Body
    }
*/