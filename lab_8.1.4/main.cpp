#include <iostream>
#include <string>
#include <string.h>
using namespace std;

string Change(string& s)
{
 size_t pos = 0;
 while ( (pos = s.find('n', pos)) != -1 )
 if (s[pos+1] == 'o' || s[pos] == 'n' )
 s.replace(pos, 3, "***");
 return s;
}
int main()
{
    string s;
    cout << "Enter string:" << endl;
    getline(cin,s);
    string c = "n";
    string c1 = "o";
   cout<< Change(s);
  
    return 0;
}


