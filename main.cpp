#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B:";
    int a,b,max,min;
    cin>>a>>b;
    cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n';
     max=a;
     if (b>a){
        max=b;
     }
     cout<<"��������:"<<max<<'\n';

     min=a;
     if (b<a){
        min=b;
     }
     cout<<"�������:"<<min<<'\n';
    return 0;
}
