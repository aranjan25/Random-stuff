//Sieve of Eratosthenes. Time Complexity O(n log log n)
bool isPrime(int n){
  int i, j;
  vector<bool> is_p(n+1, true);
  is_p[0]=is_p[1]=false;
  is_p[2]=true;
  for(i=2;i<=n/2;i++) is_p[2*i]=false;
  for(i=3;i*i<=n;i+=2){
    if(is_p[i])
      for(j=i*i;j<=n;j+=i) is_p[j]=false;
  }
  return is_p[n];
}
