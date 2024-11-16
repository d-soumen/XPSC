//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int k=pat.size();
	    map<char,int>mp;
	    for(char c:pat){
	        mp[c]++;
	    }
	    int n=txt.size();
	    int i=0,j=0,c=0;
	    int cnt=mp.size();
	    while(j<n){
	        if(mp.find(txt[j])!=mp.end()){
	            mp[txt[j]]--;
	            if(mp[txt[j]]==0){
	                cnt--;
	            }
	        }
	        if(j-i+1<k){
	            j++;
	        }
	        else if(j-i+1==k){
	            if(cnt==0){
	                c++;
	            }
	            if(mp.find(txt[i])!=mp.end()){
	                mp[txt[i]]++;
	                if(mp[txt[i]]==1){
	                    cnt++;
	                }
	            }
	            i++;
	            j++;
	        }
	    }
	    return c;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends