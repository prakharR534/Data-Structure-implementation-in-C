#include<bits/stdc++.h>
using namespace std;

void showstack(stack <int> s){
	while(!s.empty()){
		cout<<'\t'<< s.top();
		s.pop();
	}
	cout<<"\n";
}



int main(){
	stack<int> s1;
	s.push(10);
	s.push(20);
	s.push(40);
	s.push(5);
	s.push(2);

	cout<<"The stack is: ";
	showstack(s);

	cout<< "s.size():  "<< s.size();
	cout<< "s.top():  "<<s.top();

	cout<< "s.pop():  "<<s.pop();
	showstack(s);

}