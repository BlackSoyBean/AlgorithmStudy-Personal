//01�������⡪���Ż��ռ临�Ӷ� 
#include<iostream>
using namespace std;
#define N 51   //��ʾ������Ʒ���� 
#define M 210	//��ʾ������������� 
int f[M]; 
int w[N],c[N];  //�ֱ��ʾ��Ʒ�ļ�ֵ������ 

int DP(int n,int m){
	int i = 1,j = 1;
	for(i = 1;i<=n;i++){ 	//��ʾ��Ʒi 
		for(j = m;j>=1;j--){ //��ʾ��������j 
			if(j < w[i]) f[j] = f[j];
			else f[j] = max(f[j],f[j - w[i]] + c[i]);
		}
	}
	return f[m];
}
//���汾 
int DP(int choice,int n,int m){
	int i = 1,j = 1;
	for(i = 1;i<=n;i++)
		for(j = m;j>=w[i];j--)
			f[j] = max(f[j],f[j - w[i]] + c[i]);
	return f[m];
}
int main(){
	int n,m;  //�ֱ�������Ʒ�����뱳������ 
	int a,b,i = 1; 
	cin>>n>>m;
	int temp_n = n;
	while(temp_n--){
		cin>>a>>b;
		w[i] = a;
		c[i++] = b;
	}
	int answer = DP(1,n,m);
	cout<<n<<"__"<<m;
	cout<<"�����ܷ��µ����ļ�ֵΪ��"<<answer<<endl; 
	return 0;
} 
//ʾ���� 
/*
���룺 
3 6
3 5
2 3
4 6
�����9 
*/
