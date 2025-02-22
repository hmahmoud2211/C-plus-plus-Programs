# include <iostream>
using namespace std;

int main ()
{
    int t; cin>>t; 
    for(int i = 0 ; i<t;i++){
        char a,b,c,d,e,f;
        cin >>a>>b>>c>>d>>e>>f;
        if ((a+b+c) == (d+e+f))
        cout << "yes\n";
        else 
        cout << "no\n";
    }
}