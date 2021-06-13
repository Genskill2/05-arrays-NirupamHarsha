/* Enter your solutions in this file */
#include <stdio.h>
//max function
int max(int a[],int n) {
  int mx = a[0];
    for (int i=1 ;i<n ;i++) {
      if(a[i]>mx) 
        mx = a[i];
     }
        return mx;
}
//min function
int min(int a[],int n) {
  int mn = a[0];
    for (int i=1 ;i<n ;i++) {
      if(a[i]<mn) 
        mn = a[i];
     }
        return mn;
}
//average function
float average (int a[], int n) {
  int sum = 0;
    for (int i=0;i<n;i++) 
       sum+=a[i];
       
  float avg = (float)sum/n;
    return avg;
}
//mode function
 int mode (int a[], int n) {
  	int max = a[0];
  	  for(int i=1; i<n; i++) {
  	    if(a[i]>max)
  	      max = a[i];
  	   }
  	  int counts[max+1];
  	    for(int i=0; i<max+1; i++) 
  	      counts[i] = 0;
  	    for(int i=0; i<max+1; i++) {
           for(int j=0; j<n; j++) {
             if(a[j] == i) 
                counts[i]++;
            }
         }
    int max_index = 0;
      for(int i=1; i<max+1; i++) {
          if(counts[i]>counts[max_index])
            max_index = i;
       }
  return max_index;
 }            
//factors function
int factors(int n, int a[]) {
  int count = 0;
    while(n%2==0) {
      a[count] = 2;
      n = n/2;
      count++;
     }
     for(int i=3; i<=sqrt(n); i+=2) {
      while(n%i==0) {
        a[count] = i;
        count++;
        n = n/i;
       }
     }
     if (n>2) {
      a[count] = n;
      count++;
     }
    return count;
 }
