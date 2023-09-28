# Relationship between arrays and pointers
<ul>
    <li>The value of an array name is the adress of the first element in the array</li>
    <li>The value of a pointer variable is an address</li>
    <li>If the pointer points to the same data type as the array element then the pointer and array name can be used interchangeably(almost)</li>
</ul>

```
int scores[]{100, 95, 89};

cout<<scores<<endl; //Memory location
cout<<*scores<<endl; //Value at 0

int *score_ptr{scores};

cout<<score_ptr<<endl; //same memory location as scores
cout<<*score_ptr<<endl; //value at 0

```
### And so, if an array is a pointer, we can use array subscript on a pointer
```
    int scores[]{100, 95, 89};

    int *score_ptr{scores};

    cout<<score_ptr[0]<<endl; // We don't need to use * because [] already does the job of *
    cout<<score_ptr[1]<<endl;
    cout<<score_ptr[2]<<endl;

```

```
int scores[]{100,95,89};

int *score_ptr{scores};

cout<<score_ptr<<endl;

cout<<(score_ptr+1)<<endl; //Increases by number of bytes to the next location
cout<<(score_ptr+2)<<endl;

```
## Subscript and offset notation equivalence
```
    int array_name[]{1,2,3,4,5};
    int *pointer_name{array_name};
```
<table>
    <tr>
        <th>   
            Subscript notation
        </th>
        <th>
            Offset Notation
        </th>
    </tr>
    <tr>
        <td>array_name[index]</td>
        <td>*(array_name + index)</td>
    </tr>
    <tr>
        <td>pointer_name[index]</td>
        <td>*(pointer_name + index)</td>
    </tr>
</table>