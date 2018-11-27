//Inputting string
string s;
getline(cin,s);

//inputting till the user wishes
while(cin>>x){
  //code
}

//Inputting and outputting using files
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

//float data-types
printf("%.9f\n",x); //prints x with 9 decimal places
printf("%.20f\n",x);  //prints x with 20 decimal places etc.
//Note that float and double data types are susceptible to rounding errors.

//Use this to compare two float types with required precision (for example 10^(-9))
if (abs(a-b)<1e-9) {
  // a and b are equal
}

//Common ways of shortening code
typedef vector<int> vi;
typedef pair<int, int> pi;

#define PB push_back
#define MP make_pair

#define REP(i,a,b) for (int i = a; i <= b; i++)

//Better to use
#define sq(a) (a)*(a)   //sq(3+3) corresponds to (3+3)*(3+3)
//than
#define sq(a) a*a       //sq(3+3) corresponds to 3+3*3+3

sort(v.rbegin(),v.rend());  //sort vector in descending order

string s= "..."
sort(s.begin(),s.end());  //sorts string lexicographically

//Making own comparison operators in structure
struct P {
  int x, y;
  bool operator<(const P &p) {
    if (x != p.x) return x < p.x;
    else return y < p.y;
  }
};

//Comparison Functions
bool comp(string a, string b) {
  if (a.size() != b.size()) return a.size() < b.size();
  return a < b;
}

//Now a vector of strings can be sorted as follows
sort(v.begin(), v.end(), comp);

//lower_bound returns a pointer to the first array element whose value is atleast x
//upper_bound returns a pointer to the first array element whose value is larger than x

//the following code finds out whether an array contains an element with value x
auto k = lower_bound(array,array+n,x)-array;
if (k < n && array[k] == x) {
  // x found at index k
}

//To find frequency of 'x' in a sorted array
auto a = lower_bound(array, array+n, x);
auto b = upper_bound(array, array+n, x);
freq=b-a;
//OR
auto r = equal_range(array, array+n, x);
cout << r.second-r.first << "\n";

//Finding the index (k) at which value of function (f) changes (function is FALSE before k and TRUE after and at k)
int x = -1;
for (int b = n; b >= 1; b /= 2) {
  while (!f(x+b)) x += b;
}
int k = x+1;

//Finding index (k) at which function is maximum
int x = -1;
for (int b = n; b >= 1; b /= 2) {
  while (f(x+b) < f(x+b+1)) x += b;
}
int k = x+1;
