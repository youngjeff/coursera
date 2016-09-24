#include <iostream>
#include <math.h>
using namespace std;
int guess(int *puzzle, int *press,int i)
{
    int c, r, count = 0;
    for (c = 1; c < i+1; ++c) {
        if (press[(i+2)+c] == 1) count++;
    }
    for (r=1; r< i; r++) {
        for (c = 1; c < i+1; ++c) {
            // ����puzzle��һ�У�����press�����е�ֵ
            press[(r + 1)* (i+2) +c] = (puzzle[r*(i+2)+c] + press[r*(i+2)+c] + press[(r - 1)*(i+2)+c]
                                    + press[r*(i+2)+c - 1] + press[r*(i+2)+c + 1]) % 2;
            if (press[(r + 1)* (i+2) +c] == 1) count++;
        }
    }
    for (c=1; c < i + 1; c++) {
        if ((press[i*(i+2)+c - 1] + press[i*(i+2)+c] + press[i*(i+2)+c + 1] +
                press[(i - 1)*(i+2)+c]) % 2 != puzzle[i*(i + 2)+c]) {
            return -1; // ����-1��ʾ��press�ĵ�һ�в���ʹ�ذ�ȫ���
        }

    }
    return count;//�����ʹ�ذ�ȫ��ƣ����ظð취����Ϳ�ĵ�ש�ĸ���
}

int enumerate (int *puzzle, int *press,int i)
{
    int c, sum = -1,n= (int)pow(2,i);
    for ( c=1; c<i+1; c++) {
        press[(i+2)+c] = 0;
    }
    if (guess(puzzle, press, i) != -1) {
        sum = guess(puzzle, press, i);
    }
    while (n--) {
        press[(i+2)+1]++;
        c = 1;
        while (press[(i+2)+c] > 1) {
            press[(i+2)+c] = 0;
            c++;
            press[(i+2)+c]++;
        }
        if (guess(puzzle, press, i) != -1) {
            if (sum == -1) {
                sum = guess(puzzle, press, i);
            } else if (guess(puzzle, press, i) < sum) {
                sum = guess(puzzle, press, i);
            }
        }
    }
    return sum;
}

int main()
{
    int cases,i;
    cin>>cases;
    while (cases--) {
        cin>>i;
        if (i == 1) {
            char t;
            cin >> t;
            if (t == 'w') {
                cout<<1<<endl;
            } else {
                cout<<0<<endl;
            }
        } else {
            int *puzzle, *press;
            puzzle = new int[(i+2)*(i+2)];//��ʼ����
            press = new  int[(i+2)*(i+2)];//����״̬������Ϊ1��δ����Ϊ0
            //��ʼ��press����
            int c, r;
            for (r=0; r<i+1; r++) {
                press[r*(i+2)] = press[r*(i+2)+i+1] = 0;
            }
            for (c=1; c<i+1; c++) {
                press[c] = 0;
            }
            //��������
            for(r=1; r<i+1; r++) {
                for(c=1; c<i+1; c++) {
                    char t;
                    cin >> t;
                    if (t == 'w') {
                        puzzle[r*(i+2)+c] = 1;
                    } else {
                        puzzle[r*(i+2)+c] = 0;
                    }
                }
            }
            int result = enumerate(puzzle,press,i);
            if (result == -1) {
                cout<<"inf"<<endl;
            } else {
                cout<<result<<endl;
            }
        }

    }

    return 0;
}
