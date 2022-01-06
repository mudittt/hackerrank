#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	int *p1=malloc(n*sizeof(int));
    
    
    
    for (int i = 0 ; i < n; i++) {
        float a = (tr[i].a + tr[i].b + tr[i].c)/2.0 ;
        p1[i]=(a*(a-tr[i].a)*(a-tr[i].b)*(a-tr[i].c));
    }
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n - i - 1 ; j++) {
            if (p1[j] > p1[j+1]) {
                int temp = p1[j];
                p1[j] = p1[j+1];
                p1[j+1] = temp;
                
                
                int t1 = tr[j].a ;
                tr[j].a = tr[j+1].a;
                tr[j+1].a = t1;
                
                int t2 = tr[j].b ;
                tr[j].b = tr[j+1].b;
                tr[j+1].b = t2;
                
                int t3 = tr[j].c ;
                tr[j].c = tr[j+1].c;
                tr[j+1].c = t3;
                
            }
        }
    }
    free(p1);
    
    
    
}

int main()
{
	int n;
    printf("Enter the number of triangles : ");
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}