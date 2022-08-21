#include <iostream>
using namespace std;
 
class MyClass
{
public:
void printEvens;
void printHello;
}
void MyClass::printEvens()
{
for( int i{1}, i<=1000, i++)
  if(i%2==0)
    cout<<i<<" ";
cout<<endl;
}

void MyClass::printHello()
{
cout<<"Hello World"<<endl;
}
 int main()
{
MyClass obj;
obj.printEvens();
obj.printHello();
 
 return 0;
}

