#include <iostream>
using namespace std;
float readnumber(string massage)
{
    float number=0;
do
{
    cout<<massage<<endl;
    cin>>number;
} while (number<=0);
return number;
}
int main()
{
  float number= readnumber("Please enter a positive number");
 float fractionpart=0;
 int intpartofnumber=(int)number;

fractionpart=number-intpartofnumber;
cout<<fractionpart;
 

    return 0;
}
