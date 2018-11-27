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