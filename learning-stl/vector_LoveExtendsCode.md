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

/*
-- output --

34
54
50
*/

```

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
        cout << "Index " << i + 1 << ": " << vec[i] << endl;
    }
}

/*
-- output --

Index 1: 34
Index 2: 54
Index 3: 50
*/
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

/*
-- output --

-2
-2
-2
-2
-2
*/
```

```cpp

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> vec (5, -2);
    // five element(s) with individual value -2 (defined).
    vec.push_back(11);
    vec.push_back(12);
    vec.push_back(13);
    // adding three elements in the vector.

    for (int i = 0; i < vec.size(); i++) {
        cout << "Index " << i + 1 << ": " << vec[i] << endl;
    }
}

/*
-- output --

Index 1: -2
Index 2: -2
Index 3: -2
Index 4: -2
Index 5: -2
Index 6: 11
Index 7: 12
Index 8: 13
*/

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
    cout << endl;

    it = vec.begin();
    it++;

    cout << "Pointed Element: " << *it << endl;
}

/*
-- output --

1       2       3       4       5

Pointed Element: 2
*/

```

# Accessing Vector Element(s) by Iterator

```cpp

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector <int> vec;
    vector <int> :: iterator it;

    for (int i = 11; i <= 24; i += 2) {
        vec.push_back(i);
    }

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << "  ";
    }

    cout << endl;
    cout << endl;

    int count = 0;

    for(it = vec.begin(); it != vec.end(); it++) {
        count++;
        cout << "Element " << count << ": " << *it << endl;
    }
    //accessing / pointing the elements using for loop.
}

/*
-- output --

11  13  15  17  19  21  23  

Element 1: 11
Element 2: 13
Element 3: 15
Element 4: 17
Element 5: 19
Element 6: 21
Element 7: 23
*/

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
        cout << *it << "  ";
    }

    cout << endl;

    cout << "Ascending values" << endl;
    sort(vec.begin(), vec.end()); //Ascending Ordered Elements
    for(it = vec.begin(); it != vec.end(); it++) {
        cout << *it << "  ";
    }

    cout << endl;

    cout << "Descending values" << endl;
    sort(vec.begin(), vec.end(), myFunc); ////Descending Ordered Elements
    for(it = vec.begin(); it != vec.end(); it++) {
        cout << *it << "  ";
    }

    cout << endl;

    return 0;
}

/*
-- output --

Random values as it is.
132  24  342  182  542  35  150  932  
Ascending values
24  35  132  150  182  342  542  932  
Descending values
932  542  342  182  150  132  35  24
*/

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
        cout << *it << "  ";
    }

    cout << endl;

    cout << "Sorting First Four Elements." << endl;
    sort(vec.begin(), vec.begin() + 4);
    for(it = vec.begin(); it != vec.end(); it++) {
        cout << *it << "  ";
    }

    cout << endl;

    return 0;
}

/*
-- output --

Random values as it is.
132  24  342  182  542  35  150  932  
Sorting First Four Elements.
24  132  182  342  542  35  150  932
*/

```
