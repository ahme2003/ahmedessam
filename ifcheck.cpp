#include <iostream>
using namespace std;
/*Read 2 integers A, B and print based on following cases:
○ if both are odd print their product A*B
○ if both are even print their division A/B
○ if the first is odd and the second is even then find their sum A+B
○ if the first is even and the second is odd then find their subtraction A-B
● Inputs ⇒ outputs
○ 5 7 => 35
○ 12 2 => 6
○ 5 6 => 11
○ 12 3 => 9*/
int readnumber(string massage)
{
    int number=0;
do
{
    cout<<massage<<endl;
    cin>>number;
} while (number<=0);
}
bool checkeven(int number)
{

    return (bool)number%2==0;
}
bool checkodd(int number)
{

    return (bool)number%2==1;
}
int main()
{
    int num1,num2;
    num1=readnumber("Enter number 1");
    num2=readnumber("Enter number 2 ");
    if((!checkeven(num1))&&(!checkeven(num2)))
    {
     cout<<num1*num2 <<endl;

    }
    else if(checkodd(num1)&&checkeven(num2))
    {
        cout<<num1+num2 <<endl;

    }
    else if(checkeven(num1)&&checkodd(num2))
    {
        cout<<num1-num2 <<endl;

    }
    else
    {
        cout<<num1/num2;
    }



    return 0;
}
