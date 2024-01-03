#include <iostream>
using namespace std;
int main(){
    cout << "My 1st Program " <<endl ;
    
    cout <<"Exampal of integer"<<endl;

    int a=5;
    cout << a <<endl;
    
    cout <<"Example of char"<<endl;

    char b = 's';
    cout << b << endl;
    
    cout <<"Exampale of Bool"<<endl;

    bool bl=true;
    cout << bl << endl;
    
    cout <<"Exampale of float"<<endl;

    float f = 1.2;
    cout << f << endl;
    
    cout <<" Example of double"<<endl;

    double d=1.23;
    cout << d << endl; 
    
    cout <<"Size of all value" <<endl;

    int size =sizeof(a);
    cout << size << endl;

    char size1=sizeof(b);
    cout << size1 <<endl;

    int size2 =sizeof(bl);
    cout << size2 << endl;

    int size3 =sizeof(f);
    cout << size3 << endl;

    int size4 =sizeof(d);
    cout << size4 << endl;
    
    cout << "Type Casting" <<endl;

    int z = 'a';
    cout << z <<endl;

    char ch=84;
    cout << ch << endl;

    char ch1 = 123456;
    cout << ch1 <<endl;

    cout <<"Operators" <<endl; 

    int m = 2;
    int n = 3;

    cout << n%m << endl;
    cout << m+n << endl;
    cout << n-m << endl;
    cout << m*n << endl;
    cout << float(n/2) << endl;


    cout <<"Relational Operators"<<endl;

    bool first = (m==n);
    cout << first << endl;

    bool second = (m<n);
    cout << second <<endl;

    bool third= (m>n);
    cout << third << endl;

    bool forth = (m<=n);
    cout << forth << endl;

    bool fifth = (m>=n);
    cout << fifth << endl;

    bool sixth = (m!=n);
    cout << sixth << endl;

    cout <<"Logical Operators" <<endl;

    bool x = (m<n && m<2*n );
    cout << x << endl;

    bool y = (m!=n);
    cout << y << endl;
    










    

   
}