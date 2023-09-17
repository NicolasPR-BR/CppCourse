# Pass by Reference
<ul>
    <li>Sometimes we want to be able to change the actual parameter from within the function body</li>
    <li>In order to achieve this, we need the location or address of the actual parameter</li>
    <li>We saw how this is the effect with array, but what about other variable types?</li>
    <li>We can use reference parameters to tell the compiler to pass in a reference to the actual parameters</li>
    <li>The formal parameter will now be an alias for the actual parameter</li>
</ul>

Example:
```
void scale_number(int &num);

int main(){
    int number{1000};
    scale_number(number);
    cout<<number<<endl;
    return 0;
}

int scale_number(int &num){
    if(num > 100){
        num = 100;
    }
}
```

### Vector example
Pass by copy
```
void print(std::vector<int> v);

int main(){
    std::vector<int> data{1,2,3,4,5};
    print(data);
    return 0;
}
//Copies the vector, inneficient
void print(std::vector<int> v){
    for(auto num : v){
        cout<<num<<endl;
    }
}

```
Passing by reference
```
void print(std::vector<int> &v);

int main(){
    std::vector<int> data{1,2,3,4,5};
    print(data);
    return 0;
}
//More efficient, no copying
//But the print function could accidentally erase the entire vector

void print(std::vector<int> &v){
    for(auto num : v){
        cout<<num<<endl;
    }
}
```
Pass by reference const
```
void print(const std::vector<int> &v);

int main(){
    std::vector<int> data{1,2,3,4,5};
    print(data);
    return 0;
}

void print(const std::vector<int> &v){
    v.at(0) = 20; Error
    for(auto num : v){
        cout<<num<<endl;
    }
}
```
