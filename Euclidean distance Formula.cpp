#include <iostream>
using namespace std;
int main()
{
	int x1, x2, y1, y2;
	cout << "Enter value for x1: \n";
	cin >> x1;
	cout << "Enter value for x2: \n";
	cin >> x2;
	cout << "Enter value for y1: \n";
	cin >> y1;
	cout << "Enter value for y2: \n";
	cin >> y2;
	int x = (x2 - x1) * (x2 - x1);
	int y = (y2 - y1) * (y2 - y1);
	int ans = (x = y) ^ (1 / 2);
	cout << "Distance= " << ans << endl;
	return 0;

}