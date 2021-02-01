Tutorial: [Errichto](https://www.youtube.com/channel/UCBr_Fu6q9iHYQCh13jmpbrg)'s [Binary Search tutorial (C++ and Python)](https://youtu.be/GU7DpgHINWQ)


### Binary Search (Implementation)

```cpp

int left = 0, right = arrSize - 1, mid;
int ans = -1;

while (left <= right) {
    mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        ans = mid;
    }

    if (arr[mid] < target) {
        left = mid + 1;
    } else {
        right = mid - 1;
    }
}

/*

time complexity: O(log2 (N))

*/

/*

arr[] = {2, 4, 6, 8, 10, 12, 14, 16};

if the target is 10 and the array has no duplicate value,
this implementation will work here.

*/

```

### Lower Bound
### Find First Greater Value than X (ans >= X)

```cpp

int x;
cin >> x;

int left = 0, right = arrSize - 1, mid;
int ans = -1;

while (left <= right) {
    mid = left + (right - left) / 2;

    if (arr[mid] >= x) {
        ans = arr[mid];
        right = mid - 1;
    } else {
        left = mid + 1;
    }
}

/*

if 
arr[] = {2, 3, 5, 6, 8, 10, 12};

and searching grater than x. where x = 4;
Expected Result = 5

*/

```
