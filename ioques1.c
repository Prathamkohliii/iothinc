// You are using GCC
#include <stdio.h>
#include <ctype.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int count_t = 0, count_s = 0;
    char line[101];
    
    for (int i = 0; i < N; i++) {
        scanf(" %100[^]", line);
        
        for (int j = 0; line[j] != '\0'; j++) {
            char ch = tolower(line[j]);
            if (ch == 't') count_t++;
            if (ch == 's') count_s++;
        }
    }
    
    if (count_t > count_s) printf("English");
    else printf("French");
    
    return 0;
}