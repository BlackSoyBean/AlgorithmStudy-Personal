//��ȫ���������Ż��ռ临�Ӷ� 
#include<iostream>
using namespace std;
#define N 51   //��ʾ������Ʒ���� 
#define M 210	//��ʾ������������� 
int f[M]; 
int w[N],c[N];  //�ֱ��ʾ��Ʒ�ļ�ֵ������ 


int DP(int n,int m){
	int i,j;
	
	for(i = 1;i<=n;i++){ 	//��ʾ��Ʒi 
		for(j = 1;j<= m;j++){ //��ʾ��������j 
			if(j < w[i]) f[j] = f[j];
			else f[j] = max(f[j],f[j -w[i]] + c[i]);
		}
	}
	return f[m];
}

//������汾
int DP(int choice,int n,int m){
	int i,j;
	
	for(i = 1;i<=n;i++)
		for(j = w[i];j<= m;j++) 
			f[j] = max(f[j],f[j -w[i]] + c[i]);
	return f[m];
}
 


int main(){
	int n,m;
	int a,b,i = 1;
	cin>>n>>m;
	int temp_n = n;
	while(temp_n--){
		cin>>a>>b;
		w[i] = a;
		c[i++] = b;
	} 
	int answer = DP(1,n,m);
	cout<<"�����ܷ��µ�����ֵΪ��"<<answer<<endl;
	
	return 0;
} 

/*
ʾ����
�������ݣ�
3 6
2 3
4 7
3 6
������ݣ�
12 
*/
