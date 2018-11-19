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
 
