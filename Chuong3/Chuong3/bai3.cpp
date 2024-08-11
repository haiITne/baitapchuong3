//#include <stdio.h>
//#include <string.h> 
//#include <ctype.h>
//
//void capitalizeWords(char* str) {
//    int i = 0;
//    int inWord = 0;
//
//    while (str[i] != '\0') {
//        if (isspace(str[i])) {
//            inWord = 0;  // Đánh dấu kết thúc từ
//        }
//        else if (!inWord) {
//            // Nếu không trong từ và gặp ký tự không phải khoảng trắng, viết hoa ký tự đầu tiên
//            str[i] = toupper(str[i]);
//            inWord = 1;  // Đánh dấu đang ở trong một từ
//        }
//        else {
//            // Nếu đang ở trong từ, viết thường các ký tự tiếp theo
//            str[i] = tolower(str[i]);
//        }
//        i++;
//    }
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
//    capitalizeWords(str);
//
//    printf("Chuoi sau khi chuyen doi: \"%s\"\n", str);
//
//    return 0;
//}
