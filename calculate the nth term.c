#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
int find_nth_term(int n, int a, int b, int c) {
    int term,t1 = a,t2 = b,t3 = c;
    if(n == 1)
     term = t1;
    else if(n == 2) 
    term= t2;
    else if(n == 3);
    term = t3;
{
    
    for(int i =4;i<=n; i++){
        term = t1 + t2 + t3;
        t1 = t2;
        t2 = t3;
        t3 = term;
        
    }
}
return term;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
