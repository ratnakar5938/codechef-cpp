#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int t;
	cin>>t;
	int n,m,q;
	while(t--){
	    cin>>n>>m>>q;
	    vector<int> a;
	    int total = 0;
	    bool c =true;
	    while(q--){
	        char c;
	        int x;
	        cin>>c>>x;
	        if(c=='+'){
	            a.push_back(x);
	            total++;
	            if(total>m){
	                c= false;
	                cout<<"Inconsistent"<<endl;
	                break;
	            }
	        }
	        else if(c=='-'){
	            bool b = false;
	            for(int i = 0; i<a.size();i++){
	                if(a[i]==x){
	                    a.erase(remove(a.begin(), a.end(), x), a.end());
	                    b = true;
	                    break;
	                }
	            }
	            if(!b){
	                c= false;
	                cout<<"Inconsistent"<<endl;
	                break;
	            }
	            total--;
	        }
	    }
	    if(c){
	    cout<<"Consistent"<<endl;
	    }
	}
	return 0;
}