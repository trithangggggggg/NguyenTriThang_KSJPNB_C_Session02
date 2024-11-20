#include <stdio.h>

int main() {
    float PI = 3.14;
    float ban_kinh = 5.0;
    float chu_vi = 2 * PI * ban_kinh;
    float dien_tich = PI * ban_kinh * ban_kinh;

    printf("Ban kinh hinh tron: %.2f\n", ban_kinh);
    printf("Chu vi hinh tron: %.2f\n", chu_vi);
    printf("Dien tich hinh tron: %.2f\n", dien_tich);

    return 0;
}
