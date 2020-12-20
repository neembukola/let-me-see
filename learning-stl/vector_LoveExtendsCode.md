Tutorial: [LoveExtendsCode](https://www.youtube.com/c/LoveExtendsCode)'s [C++ STL](https://www.youtube.com/playlist?list=PLgLCjVh3O6Sgux985GYG22xkFt9z9Sq0_)

# Vector

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> vec;

    vec.push_back(34); // vec[0] = 34
    vec.push_back(54); // vec[1] = 54
    vec.push_back(50); // vec[2] = 50

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
}
```

# Vector (Defined Element + Value)

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> vec (5, -2);
    // five element(s) with individual value -2 (defined).

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
}
```
# Iterator to Point Vector Elements

```cpp
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector <int> vec;
    vector <int> :: iterator it; 
    // iterator variable 'it' to access / point significant elements.

    for (int i = 1; i <= 5; i++) {
        vec.push_back(i);
    }

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << "\t";
    }

    cout << endl;

    it = vec.begin();
    it++;

    cout << *it << endl;
}
```

# Accessing Vector Element(s)

```cpp
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector <int> vec;
    vector <int> :: iterator it;

    for (int i = 1; i <= 5; i++) {
        vec.push_back(i);
    }

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << "\t";
    }

    cout << endl;

    for(it = vec.begin(); it != vec.end(); it++) {
        cout << *it << endl;
    }
    //accessing / pointing the elements using for loop.
}
```

# Vector Sorting (Ascending - Descending)

```cpp
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

bool myFunc(int a, int b) {
    return(a > b);
}

int main()
{
    vector <int> vec;
    vector <int> :: iterator it;

    vec.push_back(132);
    vec.push_back(24);
    vec.push_back(342);
    vec.push_back(182);
    vec.push_back(542);
    vec.push_back(35);
    vec.push_back(150);
    vec.push_back(932);

    cout << "Random values as it is." << endl;
    for(it = vec.begin(); it != vec.end(); it++) {
        cout << *it << "\t";
    }

    cout << endl;

    cout << "Ascending values" << endl;
    sort(vec.begin(), vec.end()); //Ascending Ordered Elements
    for(it = vec.begin(); it != vec.end(); it++) {
        cout << *it << "\t";
    }

    cout << endl;

    cout << "Descending values" << endl;
    sort(vec.begin(), vec.end(), myFunc); ////Descending Ordered Elements
    for(it = vec.begin(); it != vec.end(); it++) {
        cout << *it << "\t";
    }

    return 0;
}
```

# Sorting Specific Number of Elements

```cpp
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> vec;
    vector <int> :: iterator it;

    vec.push_back(132);
    vec.push_back(24);
    vec.push_back(342);
    vec.push_back(182);
    vec.push_back(542);
    vec.push_back(35);
    vec.push_back(150);
    vec.push_back(932);

    cout << "Random values as it is." << endl;
    for(it = vec.begin(); it != vec.end(); it++) {
        cout << *it << "\t";
    }

    cout << endl;

    cout << "Sorting First Four Elements." << endl;
    sort(vec.begin(), vec.begin() + 4);
    for(it = vec.begin(); it != vec.end(); it++) {
        cout << *it << "\t";
    }

    return 0;
}
```
