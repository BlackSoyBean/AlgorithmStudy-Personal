//���仯������������������
#include<iostream>

using namespace std;
#define N 10010
int f[N][N];	//����һ������¼�����ڼ�¼�ݹ���Ϣ 
int a[9][9] = {{1},
				{4,6},
				{8,3,9},
				{5,7,2,1}};    //���ڹ������������� 	
int n = 4,e;

int dfs(int x,int y){
	//�ȶԱ���¼���в�ѯ
	if(f[x][y] != 0) return f[x][y];
	if(x == n -1) f[x][y] = a[x][y];	//����߽�����
	else
		f[x][y] = a[x][y] + max(dfs(x+1,y),dfs(x+1,y+1));
	return f[x][y];
	
	
}


int main(){

//	cin>>n;  //���������εĲ��� 
//	//�������������� 
//	for(int i = 0;i<n;i++){
//		for(int j = 0;j<=i;j++){
//			cin>>e;
//			a[i][j] = e;
//		}
//	} 

	int ans = dfs(0,0);
	printf("���·��Ϊ��%d\n",ans);
	
	return 0;
} 
