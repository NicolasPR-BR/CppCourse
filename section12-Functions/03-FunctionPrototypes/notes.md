# Function Prototypes
<ul>
    <li>The compiler must 'know' about the function before it is used</li>
    <li>
        Define functions before calling them 
        <ul>
            <li>ok for small programs</li>
            <li>Not a practical solution for larger programs</li>
        </ul>
    </li>
    <li>
        Use function prototypes
        <ul>
            <li>Tells the compiler what it needs to know without a full functional definition</li>
            <li>Also called forward declarations</li>
            <li>Placed at the beginning of the programs</li>
            <li>Also used in our own header files(.h)</li>
        </ul>
    </li>
</ul>

### Example
```
    int function_name(); //Prototype
 
    int function_name(){ //Implementation
        return 0;
    }
```

```
    int function_name(int); //Prototype
        //or
    int function_name(int a);

    int function_name(){
        return 0;
    }
```