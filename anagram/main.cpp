#include<bits/stdc++.h>
#include <string.h>
using namespace std;

bool present_at(char c, char a[]) {
    int i;
    for(i=0; a[i] != '\0'; i++) {
        if(a[i] == c) {
            a[i] = '*';
            return true;
        }
    }
}

int main() {
    char s1[1000],s2[1000], str[1000];
    int l1,l2;
    cin >> s1 >> s2;
    
    l1 = strlen(s1);
    l2 = strlen(s2);
    strcpy(str,s2);
    if(l1 != l2) {
        cout << "False";
        return 0;
    }
    
    for(int i=0; i<l1; i++) {
        if(present_at(s1[i], str) == false) {
            cout << "False";
            return 0;
        }
    }
    cout << "True";
}