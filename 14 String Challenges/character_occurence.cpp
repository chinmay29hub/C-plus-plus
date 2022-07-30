#include<iostream>
#include<string>

#include<algorithm>

using namespace std;

int main () {
    string s;
    getline(cin, s);

    int freq[26] = {0};

    for (int i = 0; i<s.size(); i++) {
        freq[s[i] - 'a']++;
    }
    int maxx = 0;    
    char c = 'a';
    for (int i = 0; i<26; i++) {
        if (freq[i] > maxx) {
            maxx = freq[i];
            c = c + i;
        }
    }

    cout<<c<<" "<<maxx<<endl;


    // below algorithm has more complexity
    // int maxx = 0;
    // char c;

    // for (int i = 0; i<s.size(); i++) {
    //     int count = 0;
    //     for(int j = i; j<s.size(); j++) {
    //         if (s[i] == s[j]) {
    //             count++;
    //             // maxx =max(maxx, count);
    //         }
    //     }
    //     if (maxx < count) {
    //         maxx = count;
    //         c = s[i];
    //     }
        
    // }
    // cout<<maxx<<" "<<c<<endl;
    return 0;



}