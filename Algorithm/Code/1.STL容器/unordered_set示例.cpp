//unordered_set ʾ��
#include<iostream>
#include<unordered_set>  //ͷ�ļ� 
using namespace std;

//�������򼯺� 
unordered_set<int> s;

int main(){
	int n,c,x;
	cin>>n;
	while(n--){
		cin>>c>>x;
		if(c == 1) s.insert(x);  //���Ԫ�� 
		else 
			s.count(x)?puts("Yes"):puts("No");  //���Ԫ�ش������yes�������no 
	} 
} 
