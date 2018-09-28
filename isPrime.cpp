 bool isPrime(int n){
 	int sq=sqrt(n);
 	if(n==1)
 		return false;
 	if(n==2)
 		return true;
 	if(n%2==0)
 		return false;
 	for(i=3;i<=sq;i+=2){
 		if(n%i==0)
 			return false;
 	}
 	return true;
 }
 
