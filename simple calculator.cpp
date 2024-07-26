#include <iostream>
using namespace std;

//Simple Calculator

int main() {
    double a, b;
    char operation;
    bool run= true;

    cout<<"Welcome to the Basic Calculator"<<endl;

    while(run){
        cout<<"Enter the first number: ";
        cin>>a;
        
        cout<<"Enter the second number: ";
        cin>>b;

        cout<<"Choose an operation (+, -, *, /): ";
        cin>>operation;

        switch(operation){
            case '+':
                cout<<"Result: "<<a+b<<endl;
                break;
            case '-':
                cout<<"Result: "<<a-b<<endl;
                break;
            case '*':
                cout<<"Result: "<<a*b<<endl;
                break;
            case '/':
                if(b!= 0){
                    cout<<"Result: "<<a/b<<endl;
                }
                else{
                    cout<<"Error: Division by zero is not allowed."<<endl;
                }
                break;
            default:
                cout<<"Error: Invalid operation."<<endl;
                break;
        }
        
        char c;
        cout<<"Do you want to perform another calculation? (y/n): ";
        cin>>c;
        if (c=='n'||c=='N')
        {
            run=false;
        }
    }

    cout << "Thank you for using the Basic Calculator."<<endl;

    return 0;
}
