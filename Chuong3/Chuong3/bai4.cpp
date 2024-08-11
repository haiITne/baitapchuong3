//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//int searchName(const char* fullName, const char* name) {
//    // Chuyển đổi toàn bộ chuỗi họ tên và tên cần tìm thành chữ thường để so sánh không phân biệt chữ hoa chữ thường
//    char lowerFullName[100];
//    char lowerName[50];
//
//    // Sao chép và chuyển đổi chuỗi họ tên thành chữ thường
//    for (int i = 0; fullName[i] != '\0'; i++) {
//        lowerFullName[i] = tolower(fullName[i]);
//    }
//    lowerFullName[strlen(fullName)] = '\0';  // Đảm bảo kết thúc chuỗi
//
//    // Sao chép và chuyển đổi tên cần tìm thành chữ thường
//    for (int i = 0; name[i] != '\0'; i++) {
//        lowerName[i] = tolower(name[i]);
//    }
//    lowerName[strlen(name)] = '\0';  // Đảm bảo kết thúc chuỗi
//
//    // Tìm kiếm tên trong chuỗi họ tên
//    if (strstr(lowerFullName, lowerName) != NULL) {
//        return 1;  // Tìm thấy
//    }
//    else {
//        return 0;  // Không tìm thấy
//    }
//}
//
//int main() {
//    char fullName[100];
//    char name[50];
//
//    // Nhập chuỗi họ tên từ người dùng
//    printf("Nhap ho ten: ");
//    fgets(fullName, sizeof(fullName), stdin);
//
//    // Xóa ký tự newline nếu có
//    fullName[strcspn(fullName, "\n")] = '\0';
//
//    // Nhập tên cần tìm từ người dùng
//    printf("Nhap ten can tim: ");
//    fgets(name, sizeof(name), stdin);
//
//    // Xóa ký tự newline nếu có
//    name[strcspn(name, "\n")] = '\0';
//
//    // Tìm kiếm tên trong chuỗi họ tên
//    if (searchName(fullName, name)) {
//        printf("Ten '%s' da nhap dung.\n", name);
//    }
//    else {
//        printf("Ten '%s' da nhap sai.\n", name);
//    }
//
//    return 0;
//}
