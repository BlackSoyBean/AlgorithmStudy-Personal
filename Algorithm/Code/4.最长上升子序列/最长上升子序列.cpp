//����������С�����̬�滮 
#include<iostream>
using namespace std;

int n = 9;
int a[101] = {0,5,7,1,9,4,6,2,8,3};
int f[101];    //DP���� 

int main(){
	int ans = 1;
	//��ʼ��f[i]
	for(int i = 1;i <= n;i++){
		f[i] = 1;
	}
	//��̬����f[i]
	for(int i = 2;i <= n;i++){
		for(int j = 1;j<i;j++){
			if(a[i] > a[j]){
				f[i] = max(f[i],f[j] + 1);  //���´�ʱ����������� 
			}
			ans = max(ans,f[i]);	//��¼���������� 
		}
	} 
	//�������������� 
	printf("�����������Ϊ��%d\n",ans);
	return 0;
} 
