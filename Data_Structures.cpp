//STRING

string s;
getline(cin,s);   //inputting string
string s1,s2;

s=s1+s2;   //Combine strings

string a = s.substr(k,l);  //Substring of 's' starting at index 'k' and of length 'l'

//checking if s0 is a substring of s

if(s.find(s0)!=string::npos){
  //found
}

reverse(s.begin(),s.end());   //reversing a string

//SET

set<int> s;
s.insert(3);
s.insert(2);
s.insert(5);
cout << s.count(3) << "\n"; // 1
cout << s.count(4) << "\n"; // 0
s.erase(3);
s.insert(4);
cout << s.count(3) << "\n"; // 0
cout << s.count(4) << "\n"; // 1

s.count(x);    //0 if absent or 1 if present
  
set<int> s = {2,5,6,8};
cout << s.size() << "\n"; // 4

for (auto x : s) {
cout << x << "\n";
}

//MULTI-SET

multiset<int> s;
s.insert(5);
s.insert(5);
s.insert(5);
cout << s.count(5) << "\n"; // 3

s.erase(5);
cout << s.count(5) << "\n"; // 0
//OR
s.erase(s.find(5));
cout << s.count(5) << "\n"; // 2

//MAP

//syntax for declaration
map<key_data_type, key_value_data_type> m;
//Example
m["monkey"] = 4;
m["banana"] = 3;
m["harpsichord"] = 9;
cout << m["banana"] << "\n"; // 3

//If key is absent, key value is zero by default if requested
map<string,int> m;
cout << m["aybabtu"] << "\n"; // 0

m.count(key);  //checks if key is declared (present) or not
m.count("banana");  //true
m.count("subscribe_to_pewdiepie");   //false

//Iterating through a map
for (auto x : m) {
cout << x.first << " " << x.second << "\n";
}

//Note:
void f(const map< string, int >& M) {
  if(M["the meaning"] == 42) { // Error! Cannot use [] on const map objects!
  }
  if(M.find("the meaning") != M.end() && M.find("the meaning")->second == 42) { // Correct
    cout << "Don't Panic!" << endl;
  }
}

//ITERATORS

set<int>::iterator it=s.begin();

auto it=s.find(x);    //returns iterator to the position of 'x', if x not found then return s.end()

//Element nearest to 'x'
auto it = s.lower_bound(x);
if (it == s.begin()) {
  cout << *it << "\n";
}
else if (it == s.end()) {
  it--;
  cout << *it << "\n";
} 
else {
  int a = *it; it--;
  int b = *it;
  if (x-b < a-x) cout << b << "\n";
  else cout << a << "\n";
}

//set also has an interval constructor
int arr[]={3,4,5,2,1};
set<int> s(arr, arr+5); // {1,2,3,4,5}

Given vector<int> v
set<int> s(all(v));
vector<int> v1(all(s)); //v1 contains all elements of v in ascending order and without duples

//VECTORS

int arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41};
vector< int > v(arr, arr+sizeof(arr)/sizeof(arr[0]));
vector< int > v2(v.begin(),v.begin()+v.size()/2); // {2, 3, 5, 7, 11, 13}
vector< int > v3(v.rbegin()+v.size()/2,v.rend()); // {13, 11, 7, 5, 3, 2}

Function: find(v.begin(), v.end(), value)
  if not found
    returns v.end()
  else 
    returns index of 1st occurence

Function: min_element(v.begin(), v.end())
  returns iterator to minimum element

Function: max_element(v.begin(), v.end())
  returns: iterator to maximum element
  
int arr[]={2,10,7,1,9};
vector< int > v(arr, arr + sizeof(arr)/sizeof(arr[0]) );
int a1 = *max_element(v.begin(), v.end() ); // 10, the largest element
int a2 = min_element(v.begin(), v.end() ) - v.begin(); // 3, the index of smallest element

Use //for any container
  #define sz(a) int((a).size())
  #define all(v) (v).begin(), (v).end()
  #define tr(c,it) for(typeof((c).begin()) it=(c).begin(); it!=(c).end(); it++) 
  #define pres(c,val) ((c).find(val) != (c).end())   //works in O(log n) for set
  #define cpres(c,val) (find(all(c), val) != (c).end())    //usually for vectors

Function: v.insert(i, value)
  inserts value at index i and shifts others to right

Function: v.insert(i, begin, end) // (e.g. v.insert(i, all(v2)) )
  inserts range of values starting from index i and shifts others to right
  
Function: erase(iterator)
  erases single element
  
Function: erase(iterator_begin, iterator_end)
  erases range of elements

Use
