### List (Basic)

```cpp

#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list <int> mylist;
    list <int> :: iterator it;

    mylist.push_back(10); // 10
    mylist.push_back(15); // 10 15
    mylist.push_front(5); //  5 10 15
    mylist.push_back(13); //  5 10 15 13
    mylist.push_front(18);// 18  5 10 15 13

    for(it = mylist.begin(); it != mylist.end(); it++) {
        cout << *it << " "; 
    }

    cout << endl;
    cout << endl;

    //reverse a list

    cout << "Reversed List" << endl;

    mylist.reverse();
    for(it = mylist.begin(); it != mylist.end(); it++) {
        cout << *it << " "; 
    }

    cout << endl;
    cout << endl;

    //clear a list

    cout << "Element in the list: " << mylist.size() << endl;

    mylist.clear();
    cout << "Element in the list (using Clear): " << mylist.size() << endl;

    cout << endl;
    return 0;
}


/*
-- output --

18 5 10 15 13 

Reversed List
13 15 10 5 18 

Element in the list: 5
Element in the list (using Clear): 0

-- note --

push_back is used to add element afterward;
push_front is used to add element beforehand;
*/

```

### Element, Array - List

```cpp

#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list <int> mylist (4, -13);
    list <int> :: iterator it;

    for(it = mylist.begin(); it != mylist.end(); it++) {
        cout << *it << "  ";
    }
    
    cout << endl;
    return 0;
}


/*
-- output --

if, list <int> mylist (4);
-> 0  0  0  0

if, list <int> mylist (4, -13);
-> -13  -13  -13  -13
*/

```

```cpp

#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    int arr[5] = {15, 21, 26, 32, 43};

    list <int> mylist (arr, arr + 5);
    list <int> :: iterator it;

    for(it = mylist.begin(); it != mylist.end(); it++) {
        cout << *it << "  ";
    }
    
    cout << endl;
    return 0;
}


/*
-- output --

15  21  26  32  43
*/

```

### insert()

```cpp

#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    int arr[5] = {15, 21, 26, 32, 43};

    list <int> mylist (arr, arr + 5);
    list <int> :: iterator it;

    for(it = mylist.begin(); it != mylist.end(); it++) {
        cout << *it << "  ";
    }

    cout << endl;
    cout << endl;
    cout << "Insert Element" << endl;

    it = mylist.begin();
    it++;
    mylist.insert(it, 19); 
    //inserting 19 in the second index.

    for(it = mylist.begin(); it != mylist.end(); it++) {
        cout << *it << "  ";
    }
    
    cout << endl;
    return 0;
}


/*
-- output --

15  21  26  32  43  

Insert Element
15  19  21  26  32  43
*/

```

### find() & insert()

```cpp

#include <iostream>
#include <list>
#include <iterator>
#include <algorithm> //to use sort
using namespace std;

int main()
{
    int arr[5] = {15, 21, 26, 32, 43};

    list <int> mylist (arr, arr + 5);
    list <int> :: iterator it;

    for(it = mylist.begin(); it != mylist.end(); it++) {
        cout << *it << "  ";
    }

    cout << endl;
    cout << endl;
    cout << "Sort element and Push new element beforehand" << endl;

    it = find(mylist.begin(), mylist.end(), 32);
    mylist.insert(it, 19); 
    //inserting 19 before 32.

    for(it = mylist.begin(); it != mylist.end(); it++) {
        cout << *it << "  ";
    }
    
    cout << endl;
    return 0;
}


/*
-- output --

15  21  26  32  43  

Sort element and Push new element beforehand
15  21  26  19  32  43
*/

```

### find()

```cpp

#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    int arr[5] = {15, 21, 26, 32, 43};

    list <int> mylist (arr, arr + 5);
    list <int> :: iterator it;

    it = find(mylist.begin(), mylist.end(), 40);
    
    if(it == mylist.end()) {
        cout << "Not Found" << endl;
    } else {
        cout << "Found" << endl;
    }

    return 0;
}


/*
-- output --

Not Found  
*/

```

### erase()

```cpp

#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    int arr[5] = {15, 21, 26, 32, 43};

    list <int> mylist (arr, arr + 5);
    list <int> :: iterator it;

    for(it = mylist.begin(); it != mylist.end(); it++) {
        cout << *it << "  ";
    }

    cout << endl;
    cout << endl;
    cout << "Erase an element from a list." << endl;
    //it = mylist.begin() //to point first element
    it = find(mylist.begin(), mylist.end(), 26); //to remove thrid element, 26

    mylist.erase(it);

    for(it = mylist.begin(); it != mylist.end(); it++) {
        cout << *it << "  ";
    }

    cout << endl;
    return 0;
}


/*
-- output --

15  21  26  32  43  

Erase an element from a list.
15  21  32  43  
*/

```

### pop_front() & pop_back()

```cpp

#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    int arr[5] = {15, 21, 26, 32, 43};

    list <int> mylist (arr, arr + 5);
    list <int> :: iterator it;

    mylist.pop_front(); //to remove the first element
    mylist.pop_back(); //to remove the last element

    for(it = mylist.begin(); it != mylist.end(); it++) {
        cout << *it << "  ";
    }

    cout << endl;
    return 0;
}


/*
-- output --

21  26  32
*/

```
