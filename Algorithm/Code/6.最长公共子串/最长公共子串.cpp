//������Ӵ�
#include<iostream>
#include<string>
using namespace std;
//�������״̬������
int f[101][101];
int per = -1; //����ָ��������Ӵ������һ��Ԫ�� 

int DP(string t1,string t2){
	int M_E = 0,MM = 0;
	for(int i = 1;i<=t1.size();i++){
		for(int j = 1;j<=t2.size();j++){
			if(t1[i-1] == t2[j-1]){
				f[i][j] = f[i-1][j-1] + 1;
				
				MM = max(M_E,f[i][j]);
				if(MM > M_E){
					M_E = MM;
					per = i-1;	//��¼��Ӵ������һ��Ԫ�� 
				} 
			}else{
				f[i][j] = 0;
			}
		}
	}
	
	return M_E;
}
//�����Ӵ�
void pt(string t1,int len){
	int i = per,j = len;
//	while(j--){
//		cout<<t1[i]<<endl;
//		i--;
//	}
	for(int i = per - len + 1;i<=per;i++){
		cout<<t1[i]<<" ";
	}
} 
int main(){
	string text1 = "ABACCB";
	string text2 = "AACCAB";
	int answer = DP(text1,text2);
	cout<<"������Ӵ�Ϊ��"<<answer<<endl;
	pt(text1,answer);
	return 0;
} 
