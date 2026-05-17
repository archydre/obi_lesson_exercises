#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    
    int necessario = 1 + (N - 1) * 5;
    
    if (M >= necessario) {
        printf("S\n");
    } else {
        printf("N\n");
    }
    
    return 0;
}