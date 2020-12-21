### Pair (Basic)

```cpp

#include <iostream>
//#include <utility>
using namespace std;

int main()
{
    pair <string, int> pair_index;

    pair_index.first = "ths";
    pair_index.second = 22;

    //pair_index = make_pair("ths", 22);

    cout << pair_index.first << "  " << pair_index.second << endl;
 
    return 0;
}


/* 
-- output --

ths  22
*/

```

### Pair in Vector

```cpp

#include <iostream>
//#include <utility>
#include <vector>
using namespace std;

int main()
{
    vector < pair<int, string> > vec;

    vec.push_back(make_pair(22, "ths"));
    vec.push_back(make_pair(21, "ffd"));

    cout << "Value: " << vec[1].first << endl;
    cout << "CodeValue: " << vec[1].second << endl;
 
    return 0;
}


/* 
-- output --

Value: 21
CodeValue: ffd
*/

```

### Pair, Iterator

```cpp

#include <iostream>
//#include <utility>
#include <vector>
using namespace std;

int main()
{
    vector < pair<int, string> > vec;
    vector < pair<int, string> >::iterator it;

    vec.push_back(make_pair(22, "ths"));
    vec.push_back(make_pair(21, "ffd"));

    for(it = vec.begin(); it != vec.end(); it++) {
        cout << it->first << "  " << it->second << endl;
    }
 
    return 0;
}


/* 
-- output --

22  ths
21  ffd
*/

```

