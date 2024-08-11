//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//void removeWord(char* source, const char* wordToRemove) {
//    char buffer[200];  // Bộ đệm để lưu chuỗi kết quả
//    char* pos = source;
//    char* wordStart;
//    int wordLen = strlen(wordToRemove);
//
//    // Khởi tạo buffer với chuỗi rỗng
//    buffer[0] = '\0';
//
//    while ((wordStart = strstr(pos, wordToRemove)) != NULL) {
//        // Sao chép phần trước từ cần xóa vào buffer
//        strncat(buffer, pos, wordStart - pos);
//
//        // Chuyển con trỏ pos tới vị trí sau từ cần xóa
//        pos = wordStart + wordLen;
//
//        // Thêm khoảng trắng vào buffer nếu có khoảng trắng sau từ cần xóa
//        if (*pos != '\0' && isspace(*pos)) {
//            strncat(buffer, " ", 1);
//        }
//    }
//
//    // Sao chép phần còn lại của chuỗi vào buffer
//    strcat(buffer, pos);
//
//    // Sao chép buffer vào source
//    strcpy(source, buffer);
//}
//
//int main() {
//    char source[200];
//    char wordToRemove[100];
//
//    // Nhập chuỗi gốc từ người dùng
//    printf("Nhap chuoi goc: ");
//    fgets(source, sizeof(source), stdin);
//    source[strcspn(source, "\n")] = '\0';  // Xóa ký tự newline nếu có
//
//    // Nhập từ cần xóa
//    printf("Nhap tu can xoa: ");
//    fgets(wordToRemove, sizeof(wordToRemove), stdin);
//    wordToRemove[strcspn(wordToRemove, "\n")] = '\0';  // Xóa ký tự newline nếu có
//
//    // Xóa từ trong chuỗi
//    removeWord(source, wordToRemove);
//
//    // In chuỗi kết quả
//    printf("Chuoi sau khi xoa: \"%s\"\n", source);
//
//    return 0;
//}
