//Sieve of Eratosthenes. Time Complexity O(n log log n)
vector<bool> sieve(int n) {
	vector<bool> isP(n+1, true);
	isP[0] = isP[1] = false;
	for(int i = 2; i <= n/2; i++) isP[2*i] = false;
	for(int i = 3; i*i <= n; i += 2) if(isP[i]) 
		for(int j = i*i; j <= n; j += i) isP[j] = false;
	return isP;
}
