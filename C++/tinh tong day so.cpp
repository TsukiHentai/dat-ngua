#include<iostream>
using namespace std;
int main()
{
    int a,n[a];
    cin >> a;
    for(int i=0;i<a;i++)
    {
        cin >> n[i];
    }
    int s=0;
    for(int j=0;j<a;j++)
    {
        s=s+n[j];
    }
    cout << s;
}
