#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s1, s2; 
    cout << "Enter first string: "; 
    cin >> s1;//i/p->gum
    cout << "Enter second string: ";
    cin >> s2;  //i/p->mug

    if (s1.length() != s2.length()) {    // both length are same does not entered into a if loop 
        cout << "Strings are NOT anagrams.\n";
        return 0;
    }

    sort(s1.begin(), s1.end());  //->sort used to arrange acssending order in a string  //o/p->gmu
    sort(s2.begin(), s2.end());  //-> rearranging both strings  //0/p-> gmu

    if (s1 == s2) // (gmu == gmu)  T 
        cout << "Strings are anagrams.\n";  //o/p-> String are anagrams
    else
        cout << "Strings are NOT anagrams.\n";

    return 0;
}
