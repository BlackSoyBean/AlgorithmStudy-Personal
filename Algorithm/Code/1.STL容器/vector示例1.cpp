#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
//��ʼ������ 
vector<int> v;

int main(){
	int n,x;
	cin>>n;
	for(int i = 0 ;i < n;i++){
		cin>>x;
		//�����������Ԫ�� 
		v.push_back(x); 
	}
	//������Ԫ�غ��Ԫ�� 
	for(int i = 0;i<v.size();i++) cout<<v[i]<<' ';
	puts("");
	//��������������������� 
	sort(v.begin(),v.end());
	for(int e:v) cout<<e<<' ';
	puts("");
	//���������з�ת����� 
	reverse(v.begin(),v.end());
	for(int e :v) cout<<e<<' ';
	
	return 0;
}
