#include <stdio.h>

void matrix_jumlah(int x[2][3],int y[2][3],int row,int column)

{

int i,j;

for (j=0;j<row;j++) {

for(i=0;i<column;i++) {

printf("%d ",x[j][i]+y[j][i]);

}

printf("\n");

}

}

int main()

{

int ma[2][3]=
{ {1, 2, 3}, {4, 5, 6}
};

int mb[2][3]=
{ {6, 3, 4}, {5, 1, 2}
};

matrix_jumlah(ma,mb,2,3);

return 0;

}