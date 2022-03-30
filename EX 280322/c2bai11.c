#include<stdio.h>
#include<math.h>

int main()
{
    FILE *f1;
    FILE *f2;
    f1 = fopen("SEQUENCE.INP", "r");
    f2 = fopen("SEQUENCE.OUT", "w");

    int i, j, n, a[1000];
    fscanf(f1, "%d", &n);
    for(i = 0; i < n; i++) {
        fscanf(f1, "%d", &a[i]);
    }
    
 
    int max = a[0];
    int min = a[0];
    int hieu;
 
    for ( i = 1; i < n; i++){
        for(j=1; j<n; j++)
        {
        if (min > a[i])
        {
            min = a[i];  
        }
        if (max < a[j])
        {
            max = a[j];
        }
        
        }
    return hieu;
    }

  

    fprintf(f2, "%d", hieu);
    fclose(f1);
    fclose(f2);
    return 0;
}

