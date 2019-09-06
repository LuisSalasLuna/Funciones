#include <iostream>

using namespace std;
void DigitosTab(int n){
    int a; int b; int c; int d; int e;
    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    c = n%10;
    n = n/10;
    d = n%10;
    n = n/10;
    e = n%10;
    cout << e <<'\t'<< d <<'\t'<< c <<'\t'<< b <<'\t'<< a <<'\t'<< endl;
}
int CuantosDigits(int a){
    int v = 0;
    for (int n = a ; n >= 1 ; n=n/10)
        {v++;}
    return v;
}
bool Palindrome(int n){
    int a; int b; int c; int d; int e; bool m;
    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    c = n%10;
    n = n/10;
    d = n%10;
    n = n/10;
    e = n%10;
    if(a == e && b ==d)
        {m = true;}
    else
        {m = false;}
    return m;
}
int Fibonacci(int a){
    int k = 1;
    int n1 = 0;
    int n2 = 1;
    int s;
    int v;
    if(a==0 || a==1)
        {v = 1;}
    else {while(a>k-1){
        s = n1+n2;
        n1 = n2;
        n2 = s;
        k++;}
    v = s;
    }
    return v;
}
bool Caracter1(char a){
    bool c;
    int m = static_cast<int>(a);
    if(m > 47 && m < 58)
        {c = true;}
    else
        {c = false;}
    return c;
}
bool EsLetra(char a){
    char p;
    bool k;
    int m = static_cast<int>(a);
    if((m >= 65 && m <= 90)||(m >= 97 && m <=122)){
        k = true;}
    else
        {k = false;}
    return k;
}
char Caracter2(char a){
    char p;
    int b = static_cast<int>(a);
    if(b >= 65 && b <= 90)
        {p = static_cast<int>(b+32);}
    if(b >= 97 && b <=122)
        {p = static_cast<int>(b-32);}
    return p;
}
int main(){

    //1
    int x ;
    cin >> x ;
    DigitosTab(x);

    //2
    int y ;
    cin >> y ;
    int r = CuantosDigits(y);
    cout << r << endl;

    //3
    int z ;
    cin >> z ;
    bool r1 = Palindrome(z);
    cout << r1 << endl;

    //4
    int a ;
    cin >> a ;
    int r2 = Fibonacci(a);
    cout << r2 << endl;

    //5
    char b ;
    cin >> b ;
    bool r3 = Caracter1(b);
    cout << r3 << endl;

    //6
    char c ;
    cin >> c ;
    bool d = EsLetra(c);
    if (d == true){
        char f = Caracter2(c);
        cout << d << endl << f;}
    else
        {cout << d << endl;}


    return 0;
}
