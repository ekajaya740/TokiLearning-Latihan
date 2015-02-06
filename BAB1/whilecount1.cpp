#include<iostream>
using namespace std;   // Bad idea, but I'll leave it for now.

int main()
{
    int k,sum = 0; // sum needs to be initialized.
    while (cin >> k)
    {
          sum += k;  // `sum = sum + k;`, is legal but quite foreign to C or C++.
    }
    cout << sum<<endl;
}
