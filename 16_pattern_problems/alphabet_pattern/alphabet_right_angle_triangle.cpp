#include <iostream>
using namespace std;

void alphabetRATriangle(int n){
    for (int i = 1; i <= n; i++)
    {
        char ans = 'a' + i;
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}

int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;

    alphabetRATriangle(n);
}