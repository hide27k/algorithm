#include<iostream>
using namespace std;

int countPattern(int A, int B, int C, int X)
{
    if (A < 0 || B < 0 || C < 0 || X < 0)
    {
        return 0;
    }
    else if (X == 0)
    {
        return 1;
    }
    else
    {
        return countPattern(A - 1, B, C, X - 500) +
               countPattern(A, B - 1, C, X - 100) +
               countPattern(A, B, C - 1, X - 50);
    }
}

int main() 
{
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    int res = countPattern(A, B, C, X);
    cout << res << endl;
}
