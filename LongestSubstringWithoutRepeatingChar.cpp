// C++ program to find the length of the longest substring
// without repeating characters
#include <bits/stdc++.h>
#include <map>
using namespace std;
#define NO_OF_CHARS 256

int longestUniqueSubsttr(string str)
{
    int n = str.size();

    int res = 0; // result

    // last index of all characters is initialized
    // as -1
    map<char, int> lmap;

    // Initialize start of current window
    int i = 0;
    int lmax = 0;
    int count = 0;
    // Move end of current window
    for (int j = 0; j < n; j++) {
        int c = lmap[str[j]];
        //   cout<<"cmax: "<<lmax<<" "<<str[j]<<"->"<<lmap[str[j]]<<endl;
        if (c == 0) {
            count++;
            lmap[str[j]] = 1;
            continue;
        }
        if (count > lmax) {
            lmax = count;
        }
        lmap.clear();
        lmap[str[j]] = 1;
        count = 1;
    }
    return lmax;
}

// Driver code
int main()
{
    string str = "geeksforgeeks";
    cout << "The input string is " << str << endl;
    int len = longestUniqueSubsttr(str);
    cout << "The length of the longest non-repeating "
            "character substring is "
         << len;
    return 0;
}
