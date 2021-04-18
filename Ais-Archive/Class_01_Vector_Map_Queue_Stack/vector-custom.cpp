#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int num;
	cin >> num;
	/*vector < int > vec;
	for (int i = 0; i < num; i++) {
	    vec.push_back(i * i);
	}*/
	
	// vector < int > vec(num), this will create a vector of size num filling with zeros
	vector < int > vec(num);
	for (int i = 0; i < num; i++) {
		cout << vec[i] << " "; 
		vec[i] = i * i;
	} 
	cout << endl;
	for (int i = 0; i < num; i++) {
		cout << vec[i] << " ";
	}
	cout << endl;
	vec.erase(vec.begin() + 2);
	//int ind1 = vec.size();
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	cout << endl;
	vec.erase(vec.begin() + 4);
	//int ind2 = vec.size();
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	cout << endl;
	//vec.erase(vec.begin() + 3, vec.end());
	vec.erase(vec.begin() + 3, vec.begin() + vec.size()); // Complexity - O(size)
	//int ind3 = vec.size(); 
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	cout << endl;
} 

// to declare vector: vector < data type > name;
// to insert an element: name.push_back(element);
// to erase an element: name.erase( name.begin() + index ); /// O ( size )
// to erase a subsegment: name.erase( name.begin() + starting index , name.begin() + ending index + 1 ); /// O ( size )
