//stackʾ�� 
#include<iostream>
#include<stack>
using namespace std; 
//����ջ
stack<int> s;
int main(){
	int n,x;
	cin>>n;
	//ѹջ 
	for(int i = 1;i<=n;i++){
		cin>>x;
		s.push(x);
	}
	
	while(s.size()){
		//ȡջ�� 
		cout<<s.top()<<endl;
		//��ջ 
		s.pop();
	}
	
	return 0;
} 
