//কী পেয়েছো তুমি, কী চেয়েছিলে তুমি.? হিসেবটা তোমার বড়ই গড়মিল...!!//
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
string ch="abcdefghijklmnopqrstuvwxyz";
typedef long long ll;
vector<int>createarray(string s)
{
    vector<int>lps(s.size());
    int index=0;
    for(int i=1;i<s.size();){
        if(s[index]==s[i]){
            lps[i]=index+1;
            index++;
            i++;
        }
        else{
            if(index!=0){
                index=lps[index-1];
            }
            else{
                lps[index]=index;
                i++;
            }
        }
    }
    return lps;
}
int main() {
    int ts;
    while(scanf("%d",&ts)==1){
    for(int i=1;i<=ts;i++){
    string a,b;
    cin>>a;
    b=a;
    reverse(b.begin(),b.end());
    string t=b+"#"+a;
    //cout<<t<<endl;
    vector<int>lps=createarray(t);
    //for(auto x: lps)cout<<x<<" ";
    cout<<endl;
    int x=a.size()-lps.back();
    printf("Case %d: %d\n",i,a.size()+x);}}
    return 0;
}

