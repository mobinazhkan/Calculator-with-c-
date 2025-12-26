#include <iostream>
using namespace std;

    int main(){
        int a,b,c,f;
        cout << "enter your first number  ";
        cin >> a;
        cout << "enter your second number  ";
        cin >> b;
        cout << "1 for + 2 for - 3 for  *";
        cin >> c;
if(c==1){
f=a+b;
cout << "answer is " << f;
}
else if(c==2){
f=a-b;
cout << "answer is " << f;
}
else if(c==3){
f=a*b;
cout << "answer is " << f;
}
else if(c!=1,2,3) 
cout << "Error";

  return 0;
}

//Code By Mobin Azhkan

