#include <stdio.h>
#define PI 3.14159
int main(void) {
   int h, r;
   double volume;
   scanf("%d%d",&h, &r);                        /*输入深和底面半径，单位厘米*/
   volume = PI * r * r * h / 1000;              /*计算体积，单位升，1升等于1000立方厘米 */
   printf("%d\n", (int)(20 / volume + 1)); /*向上取整 */
   return 0;
}
