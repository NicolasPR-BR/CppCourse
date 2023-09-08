# Vectors 
<ul>
    <li>Size can change during execution time</li>
    <li>Similar semantics and syntax as arrays</li>
    <li>Efficient</li>
    <li>Provides bounds checking</li>
    <li>Can use sort, reverse, find & more</li>
</ul>

# Declaring
```
#include <vector>
using namespace std;

vector <char> vowels;
vector <int> test_scores;
```

Another way to initialize a vector:
<br/>Tells the compiler we want an array of 5 chars
```
vector <char> vowels(5);
```
Initialized the vectors with the values {100, 98, 89, 85, 93}
```
vector <int> test_scores{100, 98, 89, 85, 93};
```

365 is the initial value of the vector
<br/> 80.0 is the value we want the values to be initialized to

```
vector <double> hi_temperatures (365, 80.0);
```

# Using vectors
## Using []
We can do the same as arrays:
```
vector_name [element_index]
```
## Using .at()
Good practice is to use this instead:
```
vector_name.at(element_index)
```

## What if i'm out of bounds?
Many vector methods do provide bounds checking, and exception handling can be done.

# Vectors dynamically 
## To grow
We can grow a vector by using:
```
vector_name.push_back(element)
```
The vector will automagically allocate the required space

## To shrink
We can shrink the vector by using:

