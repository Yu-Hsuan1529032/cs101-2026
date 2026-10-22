#include <stdio.h>

int main() {
    FILE *fp;

    int ra[3];
    char rb[3];
    float rc[3];

    fp = fopen("a.bin", "rb");
    if (fp == NULL) {
        printf("無法開啟 a.bin，請確認檔案是否存在\n");
        return 1;
    }

    fread(ra, sizeof(int), 3, fp);
    fread(rb, sizeof(char), 3, fp);
    fread(rc, sizeof(float), 3, fp);

    fclose(fp);

    printf("%d %d %d\n", ra[0], ra[1], ra[2]);
    printf("%c %c %c\n", rb[0], rb[1], rb[2]);
    printf("%f %f %f\n", rc[0], rc[1], rc[2]);

    return 0;
}
