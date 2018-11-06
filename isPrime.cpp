 bool isPrime(int n){
 	int sq=sqrt(n),i;
 	if(n==1||n%2==0)
 		return false;
 	if(n==2)
 		return true;
 	for(i=3;i<=sq;i+=2){
 		if(n%i==0)
 			return false;
 	}
 	return true;
 }
 
