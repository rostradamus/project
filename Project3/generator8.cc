#include <iostream>
#include <cstdlib> // for atoi
using namespace std;
int main(int argc, char* argv[])
{
if (argc != 2) // remember, argv[0] is the program name
{
cerr << "Wrong number of arguments!" << endl;
return 1;
}
int n = atoi(argv[1]);
for(int i = 1; i <= n/3; i++) {
cout << "I " << i << endl;
}
for(int i = 1; i <= n/3; i++) {
cout << "R " << i << endl;
}
for (int i = 1; i <= n/3; i++) {
  cout << "F " << n/4 - i << endl;
}
for (int i = n/3; i >= 1; i--) {
  cout << "I " << i << endl;
}
return 0;
}