### Set (Basic)

```cpp

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set <int> set_input;
    set <int> :: iterator it;

    set_input.insert(123);
    set_input.insert(323);
    set_input.insert(426);
    set_input.insert(230);
    set_input.insert(323); //duplicate value

    for(it = set_input.begin(); it != set_input.end(); it++) {
        cout << *it << "  ";
    }
 
    cout << endl;
    return 0;
}


/* 
-- output --

123  230  323  426

-- note --

no duplicate value will be displayed. 
set insert its element alphabetically and by asecending order.
*/

```

### Set, String

```cpp

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set <string> set_input;
    set <string> :: iterator it;


    set_input.insert("neyam");
    set_input.insert("bishal");
    set_input.insert("adel");
    set_input.insert("fahim");
    set_input.insert("fuad");

    for(it = set_input.begin(); it != set_input.end(); it++) {
        cout << *it << "  ";
    }
 
    cout << endl;
    return 0;
}


/* 
-- output --

adel  bishal  fahim  fuad  neyam

-- note --

no duplicate value will be displayed. 
set insert its element alphabetically and by asecending order.
*/

```

### Set, Iterator, Check if it's inserted

```cpp

#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main()
{
    set <string> set_input;
    set <string> :: iterator it;


    set_input.insert("neyam");
    set_input.insert("bishal");
    set_input.insert("adel");
    set_input.insert("fahim");
    set_input.insert("fuad");

    pair <set <string> :: iterator, bool> pair_inp;
    pair_inp = set_input.insert("neyam");

    if(pair_inp.second == false) {
        cout << "Can't Insert" << endl;
    } else {
        cout << "Inserted" << endl;
    }
 
    cout << endl;
    return 0;
}


/* 
-- output --

Can't Insert

-- note --

no duplicate value will be displayed. 
set insert its element alphabetically and by asecending order.
*/

```

### Set, Find, Erase

```cpp

#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main()
{
    set <int> set_input;
    set <int> :: iterator it;

    set_input.insert(123);
    set_input.insert(323);
    set_input.insert(426);
    set_input.insert(230);
    set_input.insert(323); //duplicate value

    it = set_input.find(323); //line1
    set_input.erase(it); //line2
    
    //line1 and line2 can be written as 
    //set_input.erase(set_input.find(323));

    for(it = set_input.begin(); it != set_input.end(); it++) {
        cout << *it << "  ";
    }
 
    cout << endl;
    return 0;
}


/* 
-- output --

123  230  426
*/

```
