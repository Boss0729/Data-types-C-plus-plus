//Prajwal
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
/*output
Enter any interger: 5
Interger= 5 and size is 4 bytes

Enter any number with decimal: 5.6
Float= 5.6 and size is 4 bytes

Enter any number with bigger decimals: 48.1248946
Double= 48.1249 and size is 8 bytes

Enter any word: h
character= h and size is 1 bytes

Enter any string: Hello
String= Hello and size is 24 bytes

Enter yes or no: no
boolean= 0 and size is 1 bytes
*/