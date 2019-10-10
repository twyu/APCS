#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int score[20];
    while(cin >> n){
        // Ū�����Ƹ��
        for(int i=0; i<n; i++)
            cin >> score[i];

        // �Ƨ�
        sort(score, score+n);
        // �Ѥp�ܤj�̧ǦC�L���Z
        for(int i=0; i<n; i++)
            cout << (i ? " " : "") << score[i];
        cout << endl;

        // ��X�Ĥ@�Ӥή���Ƥ����ޭ�
        int pos;
        for(pos=0; pos<n; pos++)
            if(score[pos] >= 60) break;

        // ���D�حn�D��X
        // ��X���ή椤�̰�����
        if(pos==0) cout << "best case" << endl;
        else cout << score[pos-1] << endl;
        // ��X�ή椤�̧C����
        if(pos==n) cout << "worst case" << endl;
        else cout << score[pos] << endl;
    }
    return 0;
}
