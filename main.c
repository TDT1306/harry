#include <stdio.h>

/**
 * ĐỀ 1 - CÂU 1: XỬ LÝ MẢNG SỐ NGUYÊN
 * 
 * Mục tiêu:
 * - Nhập n (1 <= n <= 50) và mảng a[n].
 * - Thực hiện các thao tác: Nhập/xuất, tính tổng chẵn, đếm phần tử > trung bình, in phần tử chia hết cho 3.
 */

// Hàm xóa buffer stdin an toàn
void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Hàm nhập mảng số nguyên
// Tham số: a[] - mảng chứa dữ liệu, n - con trỏ để lưu số lượng phần tử
void nhapMang(int a[], int *n) {
    // Sử dụng vòng lặp do-while để bắt buộc người dùng nhập n hợp lệ (1-50)
    do {
        printf("Nhap so luong phan tu n (1 <= n <= 50): ");
        scanf("%d", n);
        // Kiểm tra điều kiện n
        if (*n < 1 || *n > 50) {
            printf("Gia tri n khong hop le (phai tu 1 den 50). Vui long nhap lai.\n");
        }
    } while (*n < 1 || *n > 50);

    // Vòng lặp nhập giá trị cho từng phần tử trong mảng
    for (int i = 0; i < *n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

// Hàm xuất mảng ra màn hình
// Tham số: a[] - mảng dữ liệu, n - số lượng phần tử
void xuatMang(int a[], int n) {
    printf("Mang vua nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]); // In từng phần tử cách nhau bởi dấu cách
    }
    printf("\n"); // Xuống dòng sau khi in hết mảng
}

// Hàm tính tổng các phần tử chẵn
// Logic: Duyệt mảng, nếu phần tử chia hết cho 2 thì cộng vào biến tổng
int tongChan(int a[], int n) {
    int sum = 0; // Biến lưu tổng, khởi tạo bằng 0
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) { // Kiểm tra số chẵn
            sum += a[i]; // Cộng dồn vào sum
        }
    }
    return sum; // Trả về kết quả tổng
}

// Hàm đếm số phần tử lớn hơn giá trị trung bình cộng của mảng
// Logic: 
// B1: Tính tổng tất cả phần tử -> Tính trung bình cộng (TB)
// B2: Duyệt lại mảng, đếm những phần tử > TB
int demLonHonTrungBinh(int a[], int n) {
    if (n == 0) return 0; // Tránh chia cho 0 nếu n = 0 (dù đề bài n >= 1)

    // Bước 1: Tính tổng mảng
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    // Tính trung bình cộng (ép kiểu float để lấy số thực)
    float trungBinh = (float)sum / n;
    
    // Bước 2: Đếm số phần tử lớn hơn trung bình
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > trungBinh) {
            count++;
        }
    }
    return count;
}

// Hàm in các phần tử chia hết cho 3
// Logic: Duyệt mảng, kiểm tra điều kiện chia hết cho 3 (a[i] % 3 == 0) và in ra
void inChiaHetCho3(int a[], int n) {
    printf("Cac phan tu chia het cho 3: ");
    int found = 0; // Biến cờ (flag) để kiểm tra có tìm thấy số nào không
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            printf("%d ", a[i]);
            found = 1; // Đánh dấu là đã tìm thấy ít nhất 1 số
        }
    }
    // Nếu không tìm thấy số nào thì thông báo để người dùng biết
    if (!found) {
        printf("Khong co phan tu nao chia het cho 3.");
    }
    printf("\n");
}

int main() {
    int a[50]; // Khai báo mảng tĩnh tối đa 50 phần tử
    int n;     // Biến lưu số lượng phần tử thực tế

    // (a) Gọi hàm nhập và xuất mảng
    printf("--- Cau 1a: Nhap xuat mang ---\n");
    nhapMang(a, &n);
    xuatMang(a, n);

    // (b) Gọi hàm tính tổng chẵn và in kết quả
    printf("\n--- Cau 1b: Tong chan ---\n");
    int tChan = tongChan(a, n);
    printf("Tong cac phan tu chan la: %d\n", tChan);

    // (c) Gọi hàm đếm phần tử > trung bình và in kết quả
    printf("\n--- Cau 1c: Dem lon hon trung binh ---\n");
    int countTB = demLonHonTrungBinh(a, n);
    printf("So phan tu lon hon gia tri trung binh la: %d\n", countTB);

    // (d) Gọi hàm in phần tử chia hết cho 3
    printf("\n--- Cau 1d: Chia het cho 3 ---\n");
    inChiaHetCho3(a, n);

    return 0; // Kết thúc chương trình thành công
}
