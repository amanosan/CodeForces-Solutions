#include<iostream>
#include<string>

using namespace std;

int main(){
	int n;
	cin>>n;
	for(int j=0; j<n; j++){
		string b,a;
		cin>>b;
	
		a.push_back(b[0]);
		for(int i=1; i<b.size()-1; i+=2){
			a.push_back(b[i]);
		}
		a.push_back(b[b.size()-1]);
		cout<<a<<endl;
	}
	return 0;
}