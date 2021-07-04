/*

A permutation of integers 1,2,�,n is called beautiful if there are no adjacent elements whose difference is 1.

Given n, construct a beautiful permutation if such a permutation exists.

Input

The only input line contains an integer n.

Output

Print a beautiful permutation of integers 1,2,�,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".


*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define lli long long int
using namespace std;

void permutations() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n == 1)
    {
        cout << "1";
    }
    else if (n < 4)
    {
        cout << "NO SOLUTION";
    }
    else if (n == 4)
    {
        cout << "3 1 4 2";
    }
    else
    {
        // print odds
        for (int i = 1; i <= n; i += 2)
        {
            cout << i << " ";
        }
        // print evens
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
    }
}