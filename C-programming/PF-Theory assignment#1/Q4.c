#include <stdio.h>

int main() {
    int a,b,c,d,e;
    printf("Enter 5 cards a,b,c,d,e between 1-13: ");
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e); // User enter 5 card numbers 1-13

// All Possible combinations of 3 same and 2 same numbers 
// Ensuring 3 same numbers don't match other 2
    if((a==b && b==c && d==e && a!=e) || // abc same and de same and ensuring a/b/c don't equal d or e
    (a==b && b==d && c==e && a!=e) || // abd same and ce same
    (a==b && b==e && c==d && a!=d) || // abe same and cd same
    (a==c && c==d && b==e && a!=e) || // acd same and be same
    (a==c && c==e && b==d && a!=d) || // ace same and bd same
    (a==d && d==e && b==c && a!=c) || // ade same and bc same
    (b==c && c==d && a==e && b!=e) || // bcd same and ae same
    (b==c && c==e && a==d && b!=d) || // bce same and ad same
    (b==d && d==e && a==c && b!=c) || // bde same and ac same
    (c==d && d==e && a==b && c!=b)){ //cde same and ab same
        printf("It's a Full House!");
    }
    else {
        printf("Sorry, not a full house.");
    }
    return 0;
}