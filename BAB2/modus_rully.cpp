#include <cstdio>

int main(){
    int n[2000];
    for(int k=0;k<2000;k++) n[k]=0;
    int t,temp=-1,pos;
    scanf("%d",&t);
    for(int j=0;j<t;j++){
          int a;
          scanf("%d",&a);
          n[a]++;
    }
    for(int i=1;i<=1000;i++){
         if(n[i]>=temp){
             temp=n[i];
             pos=i;
         }
    }
    printf("%d\n",pos);
    return 0;
}
