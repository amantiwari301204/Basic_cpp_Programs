#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

void calculation(){
    int x,y,s;
    char o;

    cout<<"CALCULATOR"<<endl;
    cout<<"______________"<<endl;

    cout<<"Enter your first Value: ";
    cin>>x;
    for(int i = 0;i<=100;i++){
    cout<<"Enter your operator: ";
    cin>>o;
    if(o=='q')break;
    cout<<"Enter your second Value: ";
    cin>>y;

    
    switch (o)
    {
    case '+': x=x+y;cout<<x<<endl;break;
    case '-': x=x-y;cout<<x<<endl;break;
    case '*': x=x*y;cout<<x<<endl;break;
    case 'x': x=x*y;cout<<x<<endl;break;
    case '/': 
        if(y!=0){
            x=x/y;
            cout<<x<<endl;
        }else{
            cout<<"Error: Divison by Zero! "<<endl;
        }
        break;
        case '%': 
            if(y!=0){
                x=x%y;
                cout<<x<<endl;
            }else{
                cout<<"Error: Modulo by Zero! "<<endl;
            }
            break;
    default:cout<<"Invalid operation"<<endl;break;
}
    }
}

int main(){
    system ("cls");
    calculation();

    return 0;
}