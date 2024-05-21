#include <bits/stdc++.h>
using namespace std;

void remove(string s, string sub){
    while((s.length()!=0) && (s.find(sub)<s.length())){ //jete parjyanta diajaithiba string ra length 0 saha equal na hue AND 
                                                        // sub-string ra length string ra length ru kam thiba, loop chaluthiba
        s.erase(s.find(sub), sub.length()); //here we have used the pre-defined functions in STL to erase the given part from the given string.
    }
    cout<<s;
}

int main(){
    string s="daabcbcab";
    string sub;
    cin>>sub;

    remove(s, sub);
    return 0;
}


//need to go through the useful functions in STL for strings.