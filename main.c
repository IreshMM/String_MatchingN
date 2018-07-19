#include <stdio.h>
#include <string.h>

void findPattern(char * string, char * pattern);

int main() {
    findPattern("fadasdasdsrsda", "da");
    return 0;
}

void findPattern(char * string, char * pattern) {
    int n = strlen(string);
    int m = strlen(pattern);

    for (int i = 0; i <= n - m; ++i) {
        int j;
        for (j = 0; j < m; ++j) {
            if(string[i + j] != pattern[j]) break;
        }

        if(j == m) printf("%s %d\n", "Pattern found at index:", i);

        
    }
}