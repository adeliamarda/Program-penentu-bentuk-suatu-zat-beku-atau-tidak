#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"masukan derajat suhu"<<endl;
    cin>>a;
    if(a<0)
        cout<<"suhu"<<a<<"derajat adalah zat beku"<<endl;
    else if (a>100)
        cout<<"suhu"<<a<<"derajat adalah gas"<<endl;
    else
        cout<<"suhu"<<a<<"derajat adalah cair"<<endl;
    return 0;
}
