#include <stdio.h>
#define PI 3.14159
int main(void) {
   int h, r;
   double volume;
   scanf("%d%d",&h, &r);                        /*������͵���뾶����λ����*/
   volume = PI * r * r * h / 1000;              /*�����������λ����1������1000�������� */
   printf("%d\n", (int)(20 / volume + 1)); /*����ȡ�� */
   return 0;
}
