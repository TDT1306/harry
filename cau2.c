#include <stdio.h>
#include <string.h>

/**
 * ĐỀ 1 - CÂU 2: XỬ LÝ CHUỖI VÀ KIỂU CẤU TRÚC (STRUCT)
 * 
 * Mục tiêu:
 * - Định nghĩa struct SinhVien (MaSV, HoTen, DiemC).
 * - Nhập/xuất thông tin sinh viên.
 * - Xếp loại dựa trên điểm.
 * - Kiểm tra tên có chứa chuỗi con.
 */

// Định nghĩa cấu trúc SinhVien
typedef struct {
    char maSV[30];  // Mảng ký tự lưu mã sinh viên
    char hoTen[50]; // Mảng ký tự lưu họ tên
    float diemC;    // Biến số thực lưu điểm C
} SinhVien;

// Hàm nhập thông tin cho 1 sinh viên
// Tham số: sv - con trỏ trỏ đến biến SinhVien cần nhập
void nhapSinhVien(SinhVien *sv) {
    printf("Nhap ma sinh vien: ");
    // fflush(stdin) dùng để xóa bộ nhớ đệm bàn phím, tránh trôi lệnh khi nhập chuỗi sau số
    fflush(stdin); 
    // fgets an toàn hơn scanf vì có thể đọc khoảng trắng và giới hạn độ dài
    fgets(sv->maSV, sizeof(sv->maSV), stdin);
    // Xóa ký tự xuống dòng '\n' ở cuối chuỗi do fgets để lại
    sv->maSV[strcspn(sv->maSV, "\n")] = 0; 

    printf("Nhap ho ten: ");
    fflush(stdin);
    fgets(sv->hoTen, sizeof(sv->hoTen), stdin);
    // Xóa ký tự xuống dòng
    sv->hoTen[strcspn(sv->hoTen, "\n")] = 0;

    printf("Nhap diem C: ");
    scanf("%f", &sv->diemC); // Nhập điểm số thực
}

// Hàm xuất thông tin sinh viên ra màn hình
// Tham số: sv - biến SinhVien (truyền tham trị)
void xuatSinhVien(SinhVien sv) {
    printf("--- Thong tin sinh vien ---\n");
    printf("Ma SV: %s\n", sv.maSV);
    printf("Ho ten: %s\n", sv.hoTen);
    printf("Diem C: %.2f\n", sv.diemC); // In điểm làm tròn 2 chữ số thập phân
}

// Hàm xếp loại sinh viên dựa trên điểm C
// Logic: Sử dụng cấu trúc if-else if để phân loại theo các mức điểm đề bài yêu cầu
void xepLoai(SinhVien sv) {
    printf("Xep loai: ");
    if (sv.diemC >= 8.0) {
        printf("Gioi\n");
    } else if (sv.diemC >= 6.5) {
        // Nếu không >= 8.0 mà >= 6.5 thì là Khá
        printf("Kha\n");
    } else if (sv.diemC >= 5.0) {
        // Nếu không >= 6.5 mà >= 5.0 thì là Trung bình
        printf("Trung binh\n");
    } else {
        // Còn lại (< 5.0) là Yếu
        printf("Yeu\n");
    }
}

// Hàm kiểm tra họ tên có chứa từ "Anh" hay không
// Logic: Sử dụng hàm strstr(container, sub) của thư viện string.h
// Nếu strstr trả về NULL nghĩa là không tìm thấy chuỗi con.
void kiemTraTen(SinhVien sv) {
    if (strstr(sv.hoTen, "Anh") != NULL) {
        printf("Ho ten sinh vien CO chua tu 'Anh'.\n");
    } else {
        printf("Ho ten sinh vien KHONG chua tu 'Anh'.\n");
    }
}

int main() {
    SinhVien sv; // Khai báo 1 biến kiểu struct SinhVien

    // (a) Gọi hàm nhập thông tin
    printf("--- Cau 2a: Nhap thong tin sinh vien ---\n");
    nhapSinhVien(&sv);

    // (b) Gọi hàm xuất thông tin để kiểm tra
    printf("\n--- Cau 2b: Xuat thong tin sinh vien ---\n");
    xuatSinhVien(sv);

    // (c) Thực hiện xếp loại
    printf("\n--- Cau 2c: Xep loai sinh vien ---\n");
    xepLoai(sv);

    // (d) Kiểm tra tên xem có chứa "Anh" không
    printf("\n--- Cau 2d: Kiem tra ten 'Anh' ---\n");
    kiemTraTen(sv);

    return 0;
}
