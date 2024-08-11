//#include <stdio.h>
//#include <string.h>
//
//#define MAX_SIZE 256  // Kích thước của mảng đếm ký tự (đủ để chứa tất cả ký tự ASCII)
//
//void findMostFrequentChar(const char* str) {
//    int counts[MAX_SIZE] = { 0 };  // Mảng đếm số lần xuất hiện của từng ký tự
//    int maxCount = 0;            // Số lần xuất hiện nhiều nhất
//    char mostFrequentChar = '\0';  // Ký tự xuất hiện nhiều nhất
//
//    // Duyệt qua chuỗi và đếm số lần xuất hiện của từng ký tự
//    for (int i = 0; str[i] != '\0'; i++) {
//        unsigned char c = (unsigned char)str[i];
//        counts[c]++;
//    }
//
//    // Tìm ký tự xuất hiện nhiều nhất
//    for (int i = 0; i < MAX_SIZE; i++) {
//        if (counts[i] > maxCount) {
//            maxCount = counts[i];
//            mostFrequentChar = i;
//        }
//    }
//
//    // In kết quả
//    if (maxCount > 0) {
//        printf("Ky tu xuat hien nhieu nhat la '%c', xuat hien %d lan.\n", mostFrequentChar, maxCount);
//    }
//    else {
//        printf("Chuoi rong.\n");
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
//    // Tìm ký tự xuất hiện nhiều nhất
//    findMostFrequentChar(str);
//
//    return 0;
//}
