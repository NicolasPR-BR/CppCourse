# User-provided copy constructor

<ul>
    <li>Create a copy of the pointed-to data</li>
    <li>Each copy will have a pointer to unique storage in the heap</li>
    <li>Deep copy when you have a raw pointer as a class data member</li>
</ul>

## Copy constructor

```
class Deep{
private:
    int *data;
public:
    Deep(int d);
    Deep(const Deep &source); //Copy constructor
    ~Deep();
}
```

```
Deep::Deep(int d){
    data = new int; //Allocate storage
    *data = d;
}
```

## Deep Destructor

```
Deep::~Deep(){
    delete data; //Free storage
    std::cout<<"Destructor freeing data"<<std::endl;
}
```

```
Deep - A simple method that expects a copy
void display__deep(Deep s){
    std::cout<<s.get_data_value() <<std::endl;
}
```
When s goes out of scope the destructor is called and releases data.
<br/>There will be no problem since this pointer is only used by the same class that deallocates it.

### Sample main
```
int main(){
    Deep obj1{100};
    display_deep(obj1);

    obj1.set_data_value(1000);

    Deep obj2{obj1};

    return 0;
}
```