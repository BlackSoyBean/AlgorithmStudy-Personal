//����ʾ��
#include<iostream>
#include<queue>
using namespace std;

const int N = 100010;
vector<int> e[N];  //queue�����Զ�������vector 
int vis[N];
//�������� 
queue<int> q;


//���Ѱ��� 
void bfs(){
	vis[1] = 1;
	q.push(1);
	while(q.size()){
		//ȡ��ͷ 
		int x = q.front();
		//������ͷ 
		q.pop();
		cout<<x<<endl;
		//ö�ٵ���Ԫ�صĶ��� 
		for(auto y : e[x]){
			if(vis[y]) continue;
			vis[y] = 1;//���
			q.push(y); 
		}
	}
}
int main(){
	int n,m,a,b;
	cin>>n>>m;  //n��ʾ�ڵ������m��ʾ�ߵĸ��� 
	for(int i = 0;i<m;i++){
		cin>>a>>b;
		//��� 
		e[a].push_back(b);
		e[b].push_back(a); //�ӱ� 
	}
	bfs(); 
}
