#include<stdio.h>
struct matrix
{
int arr[50][50];
};

struct matrix read( int p, int q)
{ struct matrix x;
int i,j;
printf("Input array elements\n");
for( i=0; i< p; i++)
 for( j=0; j< q; j++)
    scanf("%d", &(x.arr[i][j]));

 return x;
}

void print(struct matrix z,int e1,int e2)
{ int i,j;
for( i=0; i< e1; i++)
 {for( j=0; j< e2; j++)
    printf(" %d ", z.arr[i][j]);
    printf("\n");
}
}

struct matrix sum(struct matrix k,struct matrix t,int l1,int l2)
{int i,j;
  struct matrix s;
 for( i=0; i< l1; i++)
   for( j=0; j< l2; j++)
    s.arr[i][j] = (k.arr[i][j] + t.arr[i][j]) ;

return (s);
}

struct matrix sub(struct matrix g,struct matrix h,int w,int v)
{ int i,j;
  struct matrix d;
 for( i=0; i< w; i++)
   for( j=0; j< v; j++)
    d.arr[i][j] = (g.arr[i][j] - h.arr[i][j]) ;

return(d);
}


int main()
{
struct matrix a,b,rs,rd;
int m,n;
printf("Enter rows and column");
scanf("%d %d", &m, &n);
a = read( m, n);
b = read( m, n);
print(a, m, n);
printf("\n");
print( b, m, n);
printf("\n");
rs =sum( a, b,m,n);
rd =sub( a, b,m,n);

printf("Sum\n");
print(rs, m,n);
printf("\n");
printf("Difference\n");
print(rd, m,n);





}











