//vector��������
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

struct edge{
	int u,v,w;
	//����С�ں� 
	bool operator < (const edge &t) const{
		return w < t.w;
	}
}; 
vector<edge> es;  //�߼�

int main(){
	int m,a,b,c;
	cin>>m;
	for(int i = 0;i < m;i++){
		cin>>a>>b>>c;
		es.push_back({a,b,c});
	}
	sort(es.begin(),es.end());
	
	for(int i = 0;i< es.size();i++)
		printf("%d %d %d\n",es[i].u,es[i].v,es[i].w);
		
//	for(auto e: es) printf("%d %d %d\n",e.u,e.v,e.w);

	
	return 0;
} 
