//#include <stdio.h>
//#include <string.h>
//
//#define MAX_SIZE 256  // Kích thước của mảng đếm ký tự (đủ để chứa tất cả ký tự ASCII)
//
//void countCharacters(const char* str) {
//    int counts[MAX_SIZE] = { 0 };  // Mảng đếm số lần xuất hiện của từng ký tự
//
//    // Duyệt qua chuỗi và đếm số lần xuất hiện của từng ký tự
//    for (int i = 0; str[i] != '\0'; i++) {
//        counts[(unsigned char)str[i]]++;
//    }
//
//    // In kết quả đếm
//    printf("So lan xuat hien cua moi ky tu:\n");
//    for (int i = 0; i < MAX_SIZE; i++) {
//        if (counts[i] > 0) {
//            printf("'%c': %d\n", i, counts[i]);
//        }
//    }
//}
//
//int main() {
//    char str[1000];
//
//    // Nhập chuỗi từ người dùng
//    printf("Nhap chuoi: ");
//    fgets(str, sizeof(str), stdin);
//    str[strcspn(str, "\n")] = '\0';  // Xóa ký tự newline nếu có
//
//    // Đếm số lần xuất hiện của từng ký tự
//    countCharacters(str);
//
//    return 0;
//}
