# Inline functions
<ul>
    <li>Function calls have a certain amount of overhead</li>
    <li>Sometimes we have simple functions</li>
    <li>We can suggest to the compiler to compile them 'inline'
        <ul>
            <li>Avoid function call overhead</li>
            <li>Generate inline assembly code</li>
            <li>Faster</li>
            <li>Could cause code bloat</li>
        </ul>
    </li>
    <li>Compilers optimizations are very sophisticated
        <ul>
            <li>Will verikely inline even without your suggestion</li>
        </ul>
    </li>
</ul>

### Example
Must include the "inline" before the function
```
inline int add_numbers(int a, int b){
    return a+b;
}

int main(){
    int result{0};
    result = add_numbers(100, 200);

    return 0;
}

```
