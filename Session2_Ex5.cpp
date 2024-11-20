#include <stdio.h>

int main() {
    float chieu_dai = 10.0;
    float chieu_rong = 20.0; 
    float chu_vi = 2 * (chieu_dai + chieu_rong);
    float dien_tich = chieu_dai * chieu_rong;
    
    printf("Chieu dai hinh chu nhat: %.2f\n", chieu_dai);
    printf("Chieu rong hinh chu nhat: %.2f\n", chieu_rong);
    printf("Chu vi hinh chu nhat: %.2f\n", chu_vi);
    printf("Dien tich hinh chu nhat: %.2f\n", dien_tich);

    return 0;
}
