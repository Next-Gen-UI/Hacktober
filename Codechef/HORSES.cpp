#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    int m;
	    int res = INT_MAX;
	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            int a = max(arr[i], arr[j]);
	            int b = min(arr[i], arr[j]);
	            m = a-b;
	            res = min(m, res);
	        }
	    }
	    cout << res << endl;
	}
	return 0;
}
