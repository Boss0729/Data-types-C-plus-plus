// 24070123073
//A3
#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter any interger: ";
    cin>>a;
    cout<<"Interger= "<<a<<" and size is "<<sizeof(a)<<" bytes"<<endl;
    
    float b;
    cout<<"\nEnter any number with decimal: ";
    cin>>b;
    cout<<"Float= "<<b<<" and size is "<<sizeof(b)<<" bytes"<<endl;
    
    double c;
    cout<<"\nEnter any number with bigger decimals: ";
    cin>>c;
    cout<<"Double= "<<c<<" and size is "<<sizeof(c)<<" bytes"<<endl;
    
    char d;
    cout<<"\nEnter any word: ";
    cin>>d;
    cout<<"character= "<<d<<" and size is "<<sizeof(d)<<" bytes"<<endl;
    
    string f;
    cout<<"\nEnter any string: ";
    cin>>f;
    cout<<"String= "<<f<<" and size is "<<sizeof(f)<<" bytes"<<endl;
    
    bool e;
    cout<<"\nEnter yes or no: ";
    cin>>e;
    cout<<"boolean= "<<e<<" and size is "<<sizeof(e)<<" bytes"<<endl;

    return 0;
}