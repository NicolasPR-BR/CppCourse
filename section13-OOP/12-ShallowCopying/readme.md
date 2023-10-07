# Shallow vs Deep copying
<ul>
    <li>Consider a class that constains a pointer as a data member</li>
    <li>Constructor allocates storage dynamically and initializes the pointer</li>
    <li>Destructor releases the memory allocated by the constructor</li>
    <li>What happens in the default copy constructor?</li>
</ul>

## Default copy constructor
<ul>
    <li>Memberwise copy</li>
    <li>Each data member is copied from the source object</li>
    <li>The pointer is copied not what it points to(shallow copy)</li>
    <li><b style="Color: rgb(255, 0, 0);">Problem</b>: When we release the storage in the destructor, the other objects still refer to the released storage!</li>
</ul>

### Shallow copy
```
class Shallow{
private:
    int *data;
public:
    Shallow(int d);
    Shallow(const Shallow &source);

    ~Shallow();
};
```

### Constructor code implementation

```
Shallow::Shallow(int d){
    data = new int; //Allocate storage
    *data = d;
}
```

### Destructor code implementation
```
Shallow::~Shallow(){
    delete data;
    std::cout<<"Destructor freeing data"<<std::endl;
}
```

## Copy constructor
### Shallow copy constructor
```
Shallow::Shallow(const Shallow &source)
:data(source.data){
    std::cout<<"Copy constructor - shallow"<<std::endl;
}
```
Shallow copy - only the pointer is copied - not what it is pointing to!
<br/><b style="Color: rgb(255,0,0);">Problem</b>: <b>Source</b> and the newly created object BOTH point to the same <b>data</b> area.
<br/>When copy calls it's destructor, it'll release the memory the pointer is pointing to. The problem arises when the original class tries to access the pointer, it now tries to access a location in memory we no longer own.