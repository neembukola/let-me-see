### Map (Basic)

```cpp

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <string, int> map_index;

    map_index["sun"] = 642; //first_way
    map_index["ths"] = 942; 
    map_index.insert(make_pair("ff", 242)); //second_way

    cout << "Assigned Value for \"ff\": " << map_index["ff"];

    cout << endl;
    return 0;
}


/* 
-- output --

Assigned Value for "ff": 242

-- Note --

key - value pair
key can't be duplicate.
here, in key value, the latest value will be counted/updated.
*/

```

### Map, Iterator

```cpp

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <string, int> map_index;
    map <string, int> :: iterator it;

    map_index["sun"] = 642; //first_way
    map_index["ths"] = 942; 
    map_index.insert(make_pair("ff", 242)); //second_way
    map_index["ff"] = 632;

    it = map_index.begin();
    it++;

    cout << "Assigned Key: " << it->first << endl; //key
    cout << "Assigned Key Value: " << it->second << endl; //key value

    cout << endl;

    //printing all key value pair

    for(it = map_index.begin(); it != map_index.end(); it++) {
        cout << it->first << "  " << it->second << endl;
    }

    return 0;
}


/* 
-- output --

Assigned Key: sun
Assigned Key Value: 642

ff  632
sun  642
ths  942

-- Note --

key - value pair
key can't be duplicated.
here, in key, string will be updated alphabetically.
here, in key value, the latest value will be counted/updated.
*/

```
