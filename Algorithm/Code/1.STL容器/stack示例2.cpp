//�ֶ�����ջ 
#include<iostream>
using namespace std;

int s[10000],top;

int main(){
	int n,x;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>x;
		s[++top] = x; //��֤�� 0 λ��ֵΪ 0�� 
	}
	while(top){
		cout<<s[top]<<'\n';
		top--;
	}
	return 0;
} 
