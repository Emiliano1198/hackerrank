#include <stdio.h>
void update(int *a,int *b) { int add , sub; add = (*a) + (*b); 
sub = (*a) - (*b); if(sub<1){ sub=sub *(-1);
} printf("%d\n%d",add,sub);

} int main() { int a, b;
int *pa,*pb; 
scanf("%d %d", &a, &b);
pa = &a; pb = &b; 
update(pa,pb);

return 0;
}
