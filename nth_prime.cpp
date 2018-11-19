bool isPrime(int n){
 	int i;
 	if(n==2||n==3)
 		return true;
  if(n==1||n%2==0||n%3==0)
 		return false;
 	for(i=3;i*i<=n;i+=2){
 		if(n%i==0)
 			return false;
 	}
 	return true;
}
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
