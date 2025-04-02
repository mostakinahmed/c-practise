#include <stdio.h>
int main() {
    int n,f_num, s_num,n_num,temp;
    printf("Enter series quantity: ");
    scanf("%d",&n);
    
    f_num=0;
    s_num=1;
    // 0 & 1 is default value
    printf("%d  %d  ", f_num, s_num);
    
    //showing 3rd and more value
    for (int i = 3; i<=n; i++) {
          n_num=f_num+s_num;
          printf("%d  ", n_num);
          f_num=s_num;
          s_num=n_num;
          
    }
    return 0;
}
