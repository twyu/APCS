#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int score[20];
    while(cin >> n){
        // 讀取分數資料
        for(int i=0; i<n; i++)
            cin >> score[i];

        // 排序
        sort(score, score+n);
        // 由小至大依序列印成績
        for(int i=0; i<n; i++)
            cout << (i ? " " : "") << score[i];
        cout << endl;

        // 找出第一個及格分數之索引值
        int pos;
        for(pos=0; pos<n; pos++)
            if(score[pos] >= 60) break;

        // 依題目要求輸出
        // 輸出不及格中最高分數
        if(pos==0) cout << "best case" << endl;
        else cout << score[pos-1] << endl;
        // 輸出及格中最低分數
        if(pos==n) cout << "worst case" << endl;
        else cout << score[pos] << endl;
    }
    return 0;
}
