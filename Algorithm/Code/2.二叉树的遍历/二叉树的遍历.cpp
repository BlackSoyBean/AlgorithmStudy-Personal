/*�������ı���*/ 
/*1.�������
  2.�������
  3.�������*/ 
#include<iostream>
#include<vector>
using namespace std;


//����������(ʹ���������ģ����ȫ������)  ����ֻ����ģ����ȫ�����������������̬(��������) 

vector<int> tree(1,0);  //��������Ϊ1��������������ֵ����Ϊ1�������൱��ֱ�ӽ������еĵ�һ��ֵ����Ϊ0 
int n;

//�������
void PreOrder(int m){
	if(m <= n){
		cout<<tree[m]<<"\t";
		PreOrder(2*m);
		PreOrder(2*m+1);
	}
}

//�������
void InOrder(int m){
	if(m<=n){
		InOrder(2*m);
		cout<<tree[m]<<"\t";
		InOrder(2*m+1);
	}
}

void PostOrder(int m){
	if(m <= n){ //���BT��Ϊ��
        PostOrder(2*m);    //�ݹ����������
        PostOrder(2*m+1);   //�ݹ����������
        printf("%d\t",tree[m]);   //���ʽڵ�
    }
}

int main(){
	int e;
	cin>>n;
//	tree.push_back(0);  //�޳�0λ��
	for(int i = 0;i<n;i++){
		//����ȫ���������и�ֵ 
		cin>>e; 
		tree.push_back(e);
	}
	cout<<"ǰ�������"<<endl; 
	PreOrder(1);
	puts("");
	cout<<"���������"<<endl; 
	InOrder(1);
	puts(""); 
	cout<<"���������"<<endl; 
	PostOrder(1);
	return 0;
} 
