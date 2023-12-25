#include<iostream>
#include<string>
#include<vector>
using namespace std;

string countSort(string s){
    vector<int> freq(26,0);
    
    for(int i = 0; i < s.length(); i++){
        int index = s[i] - 'a';
        freq[index]++;
    }
    
    int j = 0;
    for(int i = 0; i < 26; i++){
        while(freq[i]--){
            s[j++] = i + 'a';
        }
    }
    return s;
}

int main()
 {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        
        cout << countSort(s) << endl;
    }
	return 0;
}