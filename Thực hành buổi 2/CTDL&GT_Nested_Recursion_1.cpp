//nguon: https://freetuts.net/de-quy-long-nested-recursion-2959.html
int A(int m, int n){
  if(m == 0)
    return n + 1;
  else if(n == 0)
    return A(m - 1, 1);
  else
    return A(m-1, A(m, n-1));
}
