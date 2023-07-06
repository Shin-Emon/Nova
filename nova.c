#include <stdio.h>
#include <stdlib.h>

void showUsage();

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "[Nova] エラー：引数の数が足りません。\n");
        showUsage();
        return 1;
    }
    printf(".intel_syntax noprefix\n");
    printf(".globl main\n");
    printf("main:\n");
    printf("    mov rax, %d\n", atoi(argv[1]));
    printf("    ret\n");
    return 0;
}

void showUsage() {
    printf("---使い方---\n");
    printf("[引数]\n");
    printf("<ファイル名> ・・・ 指定したファイルの内容を実行します。\n");
    printf("-----------\n");
}