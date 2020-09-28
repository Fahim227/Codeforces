
// C++ program to split
// string into substrings
// which are separated by
// separater using boost::split

// this header file contains boost::split function
#include <bits/stdc++.h>
#include <boost/algorithm/string.hpp>
using namespace std;

int main()
{
    string input("geeks\tfor\tgeeks");
    vector<string> result;
    boost::split(result, input, boost::is_any_of("\t"));

    for (int i = 0; i < result.size(); i++)
        cout << result[i] << endl;
    return 0;
}
