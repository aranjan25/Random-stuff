//STRING

string s;
getline(cin,s);   //inputting string
string s1,s2;

s=s1+s2;   //Combine strings

string a = s.substr(k,l);  //Substring of 's' starting at index 'k' and of length 'l'

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
m.count("subscribe_pewdiepie");   //false

//Iterating through a map
for (auto x : m) {
cout << x.first << " " << x.second << "\n";
}

//ITERATORS
auto it=s.begin();    //OR
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
