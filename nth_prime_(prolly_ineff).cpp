//Sieve of Eratosthenes. Time Complexity O(n log log n).
vector<bool> sieve(int n){
	vector<bool> isP(n+1, true);
	isP[0]=isP[1]=false;
	for(int i=2; i<=n/2; i++) isP[2*i]=false;
	for(int i=3; i*i<=n; i+=2){
		if(isP[i])
			for(int j=i*i; j<=n; j+=i) isP[j]=false;
	}
	return isP;
}

int p(int n){
  if(n==1) return 2;
  else if(n==2) return 3;
  else if(n==3) return 5;
  else if(n==4) return 7;
  else if(n==5) return 11;
  int k=n*ceil((log(n)+log(log(n))));
  //see https://math.stackexchange.com/questions/1270814/bounds-for-n-th-prime
  vector<bool> isP=sieve(k);
  int count=0, i=0;
  while(count<n&&i<=k){
    if(isP[i]) count++;
    i++;
  }
  return i;
}

//Total time complexity O(n log n)?
