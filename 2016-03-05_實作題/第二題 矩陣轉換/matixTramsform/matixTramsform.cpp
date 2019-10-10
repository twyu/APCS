#include <iostream>

using namespace std;

int mat[10][10];
int op[10];
int rows, cols, ops;

// ½��x�}
void flip()
{
    for(int i=0, ii=rows-1; i<ii; i++, ii--)
    for(int j=0; j<cols; j++)
        swap(mat[i][j], mat[ii][j]);
}

// �V������
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
        // Ū���}�CB
        for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            cin >> mat[i][j];

        // Ū���x�}�ާ@
        for(int i=0; i<ops; i++) cin >> op[i];

        // �ϦV���X��x�}
        for(int k=ops-1; k>=0; k--)
            op[k] ? flip() : rl();

        // ��X��x�}
        cout << rows << " " << cols << endl;
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++)
                cout << (j ? " " : "") << mat[i][j];
            cout << endl;
        }
    }
    return 0;
}
