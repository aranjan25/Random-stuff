int p(int n){                   //nth prime
  int k;
  if(n==1)
    return 2;
  if(n==2)
    return 3;
  else{
    k=p(n-1)+2;
    while(1){
      if(isPrime(k))
        break;
      else
        k+=2;
    }
    return k;
  }
}
