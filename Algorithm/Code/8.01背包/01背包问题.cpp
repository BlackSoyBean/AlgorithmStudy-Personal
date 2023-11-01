//01��������
#include<iostream>
using namespace std;
#define N 51   //��ʾ������Ʒ���� 
#define M 210	//��ʾ������������� 
int f[N][M]; 
int w[N],c[N];  //�ֱ��ʾ��Ʒ�ļ�ֵ������ 

int DP(int n,int m){
	int i = 1,j = 1;
	for(i = 1;i<=n;i++){ 	//��ʾ��Ʒi 
		for(j = 1;j<= m;j++){ //��ʾ��������j 
			if(j < w[i]) f[i][j] = f[i -1][j];
			else f[i][j] = max(f[i -1][j],f[i - 1][j -w[i]] + c[i]);
		}
	}
	return f[n][m];
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
	int answer = DP(n,m);
	cout<<n<<"__"<<m;
	cout<<"�����ܷ��µ����ļ�ֵΪ��"<<answer<<endl; 
//�鿴DP���� 
//	for(int i = 1;i<=n;i++){
//		for(int j = 1;j<=m;j++){
//			cout<<f[i][j]<<" ";
//		}
//		cout<<endl;
//	} 
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
