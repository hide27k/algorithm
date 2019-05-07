#include<iostream>
using namespace std;

int countPattern(int A, int B, int C, int X)
{
    if (X < 0)
    {
        return 0;
    }
    else if (X == 0)
    {
        return 1;
    }
    else
    {
        int countA = 0;
	int countB = 0;
	int countC = 0;

	if (A >= 0) {
	    countA = countPattern(A - 1, B, C, X - 500); 
	}
	if (B >= 0) {
	    countB = countPattern(A, B - 1, C, X - 100);
	}
	if (C >= 0) {
            countC = countPattern(A, B, C - 1, X - 50);
	}

	return countA + countB + countC; 
    }
}

int main() 
{
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    int res = countPattern(A, B, C, X);
    cout << res << endl;
}
