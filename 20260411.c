#include <stdio.h>

int main() {
    int year = 1922;
    char school_name[] = "Kenryo";
    char category[] = "High School";
    char name[20];
    double graduation_year;
    printf("名前を入力してください: ");
    scanf("%s", name);
    printf("卒業年月を入力してください(例: 2020.03): ");
    scanf("%lf", &graduation_year);
    printf("%s %s は今年で創立 %d 年です\n%sは創立 %d 周年に卒業しました", school_name, category, 2026 - year, name, (int)(graduation_year - (double)year));
    return 0;
}