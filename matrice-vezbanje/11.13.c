// 11.13. Саставити програм који учита матрицу целих бројева А димензија nxn, а затим исписује
// матрицу у оквиру таблице. Програм треба да одређује највећи и најмањи елемент у свакој врсти и
// колони, а добијене елементе сместити у једнодимензионалне низове. Исписати формиране низове

#include<stdio.h>

int main(){
    int n,i,j,maks = 0,k,br;
    printf("Unesite n:");
    scanf("%d",&n);
    int matrix[n][n];
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
     for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    printf("niz maks el:\n");
    br = n;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(j == n-1){
                if(matrix[i][j] > maks){
                    maks = matrix[i][j];
                }
                break;
                

            }
                
        }
        printf("%d,",maks);
    }
     
      return 0;
       
}
  
