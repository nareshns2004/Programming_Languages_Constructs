#include <iostream>
#include <vector>

using namespace std;

int main(){

	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		vector<int> arr(n);
		int ans = 0;
		int maxi = 0;

		for(int i=0;i<n;i++){
			cin>>arr[i];
		}

		for(int i=0;i<n;i++){

			if(arr[i] == 0){
				ans++;
			}
			else{
				ans = 0;
			}

			maxi = max(maxi,ans);

		}
		
		cout<<maxi<<endl;
	}
	
}