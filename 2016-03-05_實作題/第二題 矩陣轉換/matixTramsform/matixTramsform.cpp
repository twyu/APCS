#include <iostream>

using namespace std;

int mat[10][10];
int op[10];
int rows, cols, ops;

// 翻轉矩陣
void flip()
{
    for(int i=0, ii=rows-1; i<ii; i++, ii--)
    for(int j=0; j<cols; j++)
        swap(mat[i][j], mat[ii][j]);
}

// 向左旋轉
void rl()
{
    int temp[10][10];

    for(int i=0; i<cols; i++)
    for(int j=0; j<rows; j++)
        temp[i][j] = mat[j][cols - i - 1];

    for(int i=0; i<cols; i++)
    for(int j=0; j<rows; j++)
        mat[i][j] = temp[i][j];

    swap(rows, cols);
}

int main()
{
    while(cin >> rows >> cols >> ops){
        // 讀取陣列B
        for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            cin >> mat[i][j];

        // 讀取矩陣操作
        for(int i=0; i<ops; i++) cin >> op[i];

        // 反向推出原矩陣
        for(int k=ops-1; k>=0; k--)
            op[k] ? flip() : rl();

        // 輸出原矩陣
        cout << rows << " " << cols << endl;
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++)
                cout << (j ? " " : "") << mat[i][j];
            cout << endl;
        }
    }
    return 0;
}
