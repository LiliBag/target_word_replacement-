//written by Lili Bagramyan
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string replaceSubstring(string str1, string str2, string str3);
int main()
{
string original;
string tobeReplaced;
string replacedWith;



cout << "Original: ";
getline(cin, original);
cout << "Target: ";
getline(cin, tobeReplaced);
cout << "Replacement: ";
getline(cin, replacedWith);

cout << "Final version: " << replaceSubstring(original, tobeReplaced, replacedWith) << endl;
system("pause");
return 0;
}


string replaceSubstring(string str1, string str2, string str3) {

bool found=true;
int loc = 0;
while (loc>=0)
{
loc = str1.find(str2,loc);
if (loc < 0)
break;
str1.replace(0 + loc, str2.length(), str3);
found = false;
}

return str1;
}
