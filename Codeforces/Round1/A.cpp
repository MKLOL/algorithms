#include <stdio.h>
#include <algorithm>

int main(){
  long long N,M,a,n,m;
  scanf("%lld%lld%lld",&N,&M,&a);
  n = N/a;
  m = M/a;
  if(N%a) {
    ++n;
  }
  if(M%a) {
    ++m;
  }

  printf("%lld",n*m);
  return 0;
}
