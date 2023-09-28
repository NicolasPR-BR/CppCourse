# Passing pointers to a function
<ul>
    <li>Pass-by-reference with pointer parameters</li>
    <li>We can use pointers and the dereference operator to achieve pass-by-reference</li>
    <li>The actual parameter can be a pointer or address of a variable</li>
</ul>

## Pass-by-reference with pointer - defining the function
```
    void double_data(int *int_ptr);

    void double_data(int *int_ptr){
        *int_ptr *= 2;
    }

    int main(){
        int value{10};

        cout<<value<<endl; //10

        double_data(&value);
        cout<<value<<endl; //20
    }
```
