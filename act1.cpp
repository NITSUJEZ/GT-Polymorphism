#include<iostream>
using namespace std;

class Calculator {
public:
    int add(int a,int b) {
        return a+b;
    }

    int add(int a,int b,int c) {
        return a+b+c;
    }

    float add(float a,float b) {
        return a+b;
    }

    int subtract(int a,int b) {
        return a-b;
    }

    int multiply(int a,int b) {
        return a*b;
    }

    float divide(float a,float b) {
        if(b==0) {
            cout<<"Error: Division by zero!"<<endl;
            return 0;
        }
        return a/b;
    }
};

int main() {
    Calculator calc;
    int choice;
    cout<<"=== Simple Calculator ==="<<endl;
    cout<<"1. Add two integers"<<endl;
    cout<<"2. Add three integers"<<endl;
    cout<<"3. Add two floats"<<endl;
    cout<<"4. Subtract two integers"<<endl;
    cout<<"5. Multiply two integers"<<endl;
    cout<<"6. Divide two floats"<<endl;
    cout<<"Enter your choice (1-6):";
    cin>>choice;

    if(choice==1) {
        int x,y;
        cout<<"Enter two integers:";
        cin>>x>>y;
        cout<<"Result:"<<calc.add(x,y)<<endl;
    } else if(choice==2) {
        int x,y,z;
        cout<<"Enter three integers:";
        cin>>x>>y>>z;
        cout<<"Result:"<<calc.add(x,y,z)<<endl;
    } else if(choice==3) {
        float x,y;
        cout<<"Enter two floats:";
        cin>>x>>y;
        cout<<"Result:"<<calc.add(x,y)<<endl;
    } else if(choice==4) {
        int x,y;
        cout<<"Enter two integers:";
        cin>>x>>y;
        cout<<"Result:"<<calc.subtract(x,y)<<endl;
    } else if(choice==5) {
        int x,y;
        cout<<"Enter two integers:";
        cin>>x>>y;
        cout<<"Result:"<<calc.multiply(x,y)<<endl;
    } else if(choice==6) {
        float x,y;
        cout<<"Enter two floats:";
        cin>>x>>y;
        cout<<"Result:"<<calc.divide(x,y)<<endl;
    } else {
        cout<<"Invalid choice!"<<endl;
    }

    return 0;
}
