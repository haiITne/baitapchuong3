//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//void splitName(const char* fullName, char* lastName, char* firstName) {
//    int length = strlen(fullName);
//    int i = length - 1;
//    int j = 0;
//
//    // Bỏ qua khoảng trắng ở cuối chuỗi họ tên
//    while (i >= 0 && isspace(fullName[i])) {
//        i--;
//    }
//
//    // Tìm khoảng trắng cuối cùng trong chuỗi họ tên
//    while (i >= 0 && !isspace(fullName[i])) {
//        i--;
//    }
//
//    // Nếu tìm thấy khoảng trắng, cắt chuỗi tên
//    if (i >= 0) {
//        // Sao chép chuỗi tên
//        strcpy(firstName, fullName + i + 1);
//
//        // Sao chép chuỗi họ lót
//        strncpy(lastName, fullName, i);
//        lastName[i] = '\0';  // Đảm bảo kết thúc chuỗi
//    }
//    else {
//        // Nếu không tìm thấy khoảng trắng, toàn bộ chuỗi là tên
//        firstName[0] = '\0';
//        strcpy(firstName, fullName);
//        lastName[0] = '\0';
//    }
//}
//
//int main() {
//    char fullName[100];
//    char lastName[100];
//    char firstName[50];
//
//    // Nhập chuỗi họ tên từ người dùng
//    printf("Nhap ho ten: ");
//    fgets(fullName, sizeof(fullName), stdin);
//
//    // Xóa ký tự newline nếu có
//    fullName[strcspn(fullName, "\n")] = '\0';
//
//    // Tách chuỗi họ lót và chuỗi tên
//    splitName(fullName, lastName, firstName);
//
//    // In kết quả
//    printf("Chuoi ho lot: \"%s\"\n", lastName);
//    printf("Chuoi ten: \"%s\"\n", firstName);
//
//    return 0;
//}
