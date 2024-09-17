#include <stdio.h>
#include <math.h>

int main() {
    int n, i, isPrime = 1;
    
    // Membaca input bilangan
    scanf("%d", &n);
    
    // Bilangan 1 bukan bilangan prima
    if (n <= 1) {
        printf("BUKAN\n");
        return 0;
    }
    
    // Cek bilangan prima
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    
    // Output hasil
    if (isPrime) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }

    return 0;
}