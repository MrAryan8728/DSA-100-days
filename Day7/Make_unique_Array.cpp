#include <bits/stdc++.h> 

int minElementsToRemove1(std :: vector<int> &arr){
	// Write your code here.
	int count = 0;
	sort(begin(arr), end(arr));
	for(int i = 1;i < arr.size();i++){
		if(arr[i] == arr[i - 1]) count++;
	}
	return count;
}

int minElementsToRemove2(std :: vector<int> &arr){
	std :: set<int> st;
	for(auto it: arr){
		st.insert(it);
	}
	return arr.size() - st.size();
}