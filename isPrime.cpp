 bool isPrime(int n){
 	int sq=sqrt(n),i;
 	if(n==2||n==3)
 		return true;
  if(n==1||n%2==0||n%3==0)
 		return false;
 	for(i=3;i<=sq;i+=2){
 		if(n%i==0)
 			return false;
 	}
 	return true;
 }
 
