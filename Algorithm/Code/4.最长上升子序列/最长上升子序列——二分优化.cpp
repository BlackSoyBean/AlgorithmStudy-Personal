//����������С��������Ż� 
#include<iostream>
using namespace std;

int n = 9;
int a[101] = {0,5,7,1,9,4,6,2,8,3};
int b[101]; //��¼����������
int len; 	//���������еĳ��� 

int find(int x){
	int L = 1,R = len,mid;
	while(L <= R){
		mid = (L + R) / 2;
		if(x>b[mid]) L = mid + 1;
		else R = mid - 1;
	} 
	return L;
}

int main(){
	int i,j;
	len = 1;
	b[1] = a[1];	//����߽�����
	//��̬����b����
	for(i = 2;i<=n;i++){
		if(a[i] > b[len]) b[++len] = a[i];
		else{
			j = find(a[i]);
			b[j] = a[i];
		}
	} 
	printf("�����������Ϊ��%d \n",len);
	return 0;
} 
