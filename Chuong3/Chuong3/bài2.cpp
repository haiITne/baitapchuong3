//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//void trimAndRemoveExtraSpaces(char* str) {
//    int n = strlen(str);
//    int index = 0;
//    int i = 0;
//
//    // Bỏ qua khoảng trắng đầu chuỗi
//    while (isspace(str[i])) {
//        i++;
//    }
//
//    // Xóa khoảng trắng thừa và dồn các ký tự lại
//    for (; i < n; i++) {
//        if (!isspace(str[i]) || (index > 0 && !isspace(str[index - 1]))) {
//            str[index++] = str[i];
//        }
//    }
//
//    // Xóa khoảng trắng cuối chuỗi
//    if (index > 0 && isspace(str[index - 1])) {
//        index--;
//    }
//
//    str[index] = '\0';  // Kết thúc chuỗi
//}
//
//int main() {
//    char str[100];
//
//    printf("Nhap mot chuoi: ");
//    fgets(str, sizeof(str), stdin);
//
//    // Xóa ký tự newline nếu có
//    str[strcspn(str, "\n")] = '\0';
//
//    trimAndRemoveExtraSpaces(str);
//
//    printf("Chuoi sau khi xoa khoang trang thua: \"%s\"\n", str);
//
//    return 0;
//}
