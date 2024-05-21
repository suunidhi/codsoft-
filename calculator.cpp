#include<iostream>
using namespace std;

int main()
{ float a,b,f;
int op,n;

int d=int(a)%int(b);
cout << "-<>-<>-<>-<>-<>CALCULATOR<>-<>-<>-<>-<>-\n\n\n" << endl;
cout << "enter any two numbers" << endl;
cin>>a>>b;
cout << "how many times do you want to proceed" << endl;
cin >> n;
for(int i=1;i<=n;i++){
cout << "\n\nchoose operation\n\n\n" << endl;
cout << "1. addition\n2. subtraction\n3.multiplication\n4.divison\n5.modulas\n" << endl;
cin >> op;
switch(op){
case 1:
cout << "\n"<<a<<"+"<<""<<b<<"="<<a+b << endl;
break;
case 2:
cout << "\n"<<a<<"-"<<""<<b<<"="<<a-b << endl;
break ;
case 3:
cout << "\n"<<a<<"*"<<""<<b<<"="<<a*b << endl;
break;
case 4:
if(b!=0)
cout << "\n"<<a<<"/"<<""<<b<<"="<<a/b << endl;
else
{cout << "ERROR" << endl;
cout << "the second number shouldn't be 0 (zero) give correct number to proceed\n" << endl;
cin >>f;
cout << "\n"<<a<<"/"<<""<<f<<"="<<a/f << endl;
}break ;
case 5:
if(b!=0)
cout << "\n"<<a<<"%"<<""<<b<<"="<<d << endl;
else
cout << "second number shouldn't be zero" << endl;
}
}
    return 0;
}
