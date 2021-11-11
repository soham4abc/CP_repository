#include<iostream>
using namespace std;
int main(){
    char button ;
    cout<<"Input a characte:";
    cin>>button;

    switch (button)
    {
    case 'a':
        cout <<"hello"<<endl;
        break;
    case 'b':
        cout<<"namaste"<<endl;
        break;
    case 'c':
        cout<<"hola"<<endl;
        break;

    default:
    cout<<"i am still finding"<<endl;   
        break;
    }
}