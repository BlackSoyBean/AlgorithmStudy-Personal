//��̬�滮��������������
#include<iostream>
using namespace std;


int n = 4;
int a[9][9] = {{1},
				{4,6},
				{8,3,9},
				{5,7,2,1}};  
int main(){
	int x,y;
    //��������ۼ�
    for(x = n - 2;x>=0;x--){  //�ӵ����ڶ��п�ʼ���Ͻ����ۼ�
		for(y = 0;y<=x;y++){
			a[x][y] = max(a[x + 1][y] , a[x + 1][ y + 1]) + a[x][y] ;
        }
    }
    //����������ֵ
    cout<<"max = "<<a[0][0]<<endl;
    return 0;
}
