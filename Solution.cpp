#include <bits/stdc++.h> 
int minElementsToRemove(vector<int> &arr)
{
	// Write your code here.
	map<int,int>m;
	for(int i=0;i<arr.size();i++)
	{
		m[arr[i]]++;
	}
	int c=0;
	for(auto &i:m)
	{
		if(i.second != 1) {
			c=c+(i.second-1);
		}

	}
	return c;
}
