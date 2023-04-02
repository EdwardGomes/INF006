#include <stdio.h>

  int main (){
  int a[] = {3, 5, 7, 9, 11, 13, 14, 17};
  int b[] = {1, 2, 4, 8, 12, 15, 16, 18};
  int c[16];
  int na = sizeof(a)/sizeof(int);
  int nb = sizeof(b)/sizeof(int);
  int nc = na + nb;
  int i = 0, j = 0, k = 0;

    while(i < na && j< nb){
      if(a[i] <= b[j]){
        c[k] = a[i];
      }
      else {
        c[k] = b[j];
          j++;
      }
      k++;}
        
    while (i < na){
      c[k] = a[i];
      i++;
      k++;
    }






    
    }













      
  
}