Tutorial: [LoveExtendsCode](https://www.youtube.com/c/LoveExtendsCode)'s [C++ STL](https://www.youtube.com/playlist?list=PLgLCjVh3O6Sgux985GYG22xkFt9z9Sq0_)

# Index

```
int arr[5] = {12, 43, 65, 92, 23}; 
// arr[5] indicates that the array has five elements.

but,
  arr[0] = 12;
  arr[1] = 43;
  arr[2] = 65;
  arr[3] = 92;
  arr[4] = 23;
```

# Sort 

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[5] = {12, 43, 65, 92, 23}; 
    //elements are assigned

    sort(arr, arr + 5); 
    // sorting elements from first to fifth.
    // five indexes; zero to four; before five.

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
```

# Sort (defined indexes)

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[5] = {12, 43, 65, 92, 23};
    //elements are assigned

    sort(arr + 2, arr + 5);
    // sorting elements from third to fifth.
    // three indexes; two to four; before five.

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
```
