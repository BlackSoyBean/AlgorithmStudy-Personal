//unordered_map �����ϣ��
#include<iostream>
#include<unordered_map>
using namespace std;
//���������ϣ�� 
unordered_map<string,int> h;

int main(){
	int n,c;
	string str;
	cin>>n;
	while(n--){
		cin>>c>>str;
		//���c == 1 ��ϣ���ж�Ӧ��λ�ü�һ 
		if(c == 1) h[str]++;
		else{
			//�����ϣ����ĳ���ַ�������Ӵ�����Ϊ0��������� 
			if(h.count(str))
				printf("%d\n",h[str]);
			//�������No 
			else
				puts("N0");
		}
	}	
	return 0;
} 
