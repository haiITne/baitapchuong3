//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define MAX_SIZE 200
//
//void insertWord(char* source, const char* word, int position) {
//    int sourceLen = strlen(source);
//    int wordLen = strlen(word);
//
//    // Kiểm tra vị trí hợp lệ
//    if (position < 0 || position > sourceLen) {
//        printf("Vi tri chen khong hop le.\n");
//        return;
//    }
//
//    // Nếu chuỗi gốc đã đủ lớn để chứa từ mới
//    if (sourceLen + wordLen + 1 >= MAX_SIZE) {
//        printf("Kich thuoc chuoi qua lon.\n");
//        return;
//    }
//
//    // Di chuyển phần sau của chuỗi gốc để tạo chỗ cho từ mới
//    memmove(source + position + wordLen, source + position, sourceLen - position + 1);
//
//    // Chèn từ vào chuỗi
//    memcpy(source + position, word, wordLen);
//}
//
//int main() {
//    char source[MAX_SIZE];
//    char word[MAX_SIZE];
//    int position;
//
//    // Nhập chuỗi gốc từ người dùng
//    printf("Nhap chuoi goc: ");
//    fgets(source, sizeof(source), stdin);
//    source[strcspn(source, "\n")] = '\0';  // Xóa ký tự newline nếu có
//
//    // Nhập từ cần chèn
//    printf("Nhap tu can chen: ");
//    fgets(word, sizeof(word), stdin);
//    word[strcspn(word, "\n")] = '\0';  // Xóa ký tự newline nếu có
//
//    // Nhập vị trí chèn
//    printf("Nhap vi tri chen: ");
//    scanf("%d", &position);
//
//    // Chèn từ vào chuỗi tại vị trí yêu cầu
//    insertWord(source, word, position);
//
//    // In chuỗi kết quả
//    printf("Chuoi sau khi chen: \"%s\"\n", source);
//
//    return 0;
//}
