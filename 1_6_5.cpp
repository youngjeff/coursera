#include <iostream>
using namespace std;

int main()
{
    int a[6], odd[6], even[6], o = 0, e = 0;
    int maxodd = 1,mineven = 100, abs = 0;
    int i = 0;
    //��������
    for (i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    //����������ż��
    for (i =0; i < 6; i++)
    {
        if (a[i]%2 == 0)
        {
            even[e] = a[i];
            e++;
        }
        else
        {
            odd[o] = a[i];
            o++;
        }
    }
    //�������������Сż��
    for (i = 0; i < e; i++)
    {
        if (mineven > even[i])
        {
            mineven = even[i];
        }
    }
    for (i = 0; i < o; i++)
    {
        if (maxodd < odd[i])
        {
            maxodd = odd[i];
        }
    }
    //�����ľ���ֵ
    if (mineven > maxodd)
    {
        abs = mineven - maxodd;
    } 
    else
    {
        abs = maxodd - mineven;
    }
    //������
    cout << abs << endl;
    return 0;
}
