//STRING

string s;
getline(cin,s);   //inputting string
string s1,s2;

s=s1+s2   //Combine strings

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

s.count(x)    //0 if absent or 1 if present
  
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
