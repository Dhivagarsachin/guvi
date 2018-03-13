#include<stdio.h>
int main() {
    int p, nl, nt, ns;
    nl = 0;
    nt = 0;
    ns = 0;
    while (( p= getchar()) != EOF) {
        if (p == '\n')
            ++nl;
        if (p == '\t')
            ++nt;
        if  p== ' ')
            ++ns;
            }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", ns, nt, nl);
}
