//����������У���¼����������Ԫ��
#include<iostream>
using namespace std; 

char s[200];	//��¼���������� 
int p[101][101];		//��¼λ�� 
int f[101][101]; 	//��¼״̬ 
int DP(char t1[],char t2[],int m,int n){
	for(int i = 1;i<=m;i++){
		for(int j = 1;j<=n;j++){
			if(t1[i - 1] == t2[j - 1]){
				f[i][j] = f[i - 1][j - 1] + 1;
				p[i][j] = 1;	//��ʾ����������һ��,���ݵ����Ϸ� 
			}
			else if(f[i][j - 1]> f[i - 1][j]){
				f[i][j] = f[i][j -1];
				p[i][j] = 2; 	//��ʾ��������һ�������ݵ��� 
			} 
			else{
				f[i][j] = f[i - 1][j];
				p[i][j] = 3;	//��ʾ��������һ�������ݵ��Ϸ� 
			} 
		}
	}
	return f[m][n]; 
}




int main(){
	char text1[] = "ADABEC";
	char text2[] = "DBDCA";
	int m,n;
	m = sizeof(text1)/sizeof(char) - 1;
	n = sizeof(text2)/sizeof(text2[0]) - 1;
	int answer = DP(text1,text2,m,n);
	cout<<"����������еĳ���Ϊ��"<<answer<<endl;
	
	//��������е�Ԫ��
	int i = m;
	int j = n;
	int k = f[m][n];
	while(i > 0&&j > 0){
		if(p[i][j] == 1){  //���Ϸ����� 
			s[k--] = text1[i - 1];
			i--;
			j--;
		}else if(p[i][j] == 2){  //������ 
			j--; 
		}else		//�������� 
			i--;
	} 
	
	printf("�����������Ϊ��"); 
	for(int i = 1;i<=f[m][n];i++){
		printf("%c",s[i]);
	} 
	
	return 0;
}
