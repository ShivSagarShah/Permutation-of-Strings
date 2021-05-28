/*
fix the first character and then apply permutation to the rest and then rearrange it to the original string.

*/

#include <bits/stdc++.h>
using namespace std;

void permutation(string s, int l, int r){
    if(l == r){
        cout<<s<<" ";
        return;
    }
    for(int i = l; i<=r; i++){
        swap(s[i],s[l]);
        permutation(s,l+1,r);
        swap(s[i],s[l]);
    }
}
int main()
{
	string input;
    cin>>input;
    int n;
    n = input.size()-1;
	permutation(input,0,n);
	return 0;
}
