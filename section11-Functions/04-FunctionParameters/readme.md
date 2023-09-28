# Function Parameters
<ul>
    <li>When we call a function we can pass in data to that function</li>
    <li>In the function call they are called arguments</li>
    <li>In the function definition they are called parameters</li>
    <li>They must in number, order, and in type</li>
</ul>

### Examples
```
int add_numbers(int, int);

int main(){
    int result{0};
    result = add_numbers(100,200);
    
    return 0;
}

int add_numers(int a, int b){
    return a+b;
}
```

## Pass-by-value
<ul>
    <li>When you pass data into a function it is passed-by-value</li>
    <li>A copy of the data is passed to the function</li>
    <li>Whatever changes you make to the parameter in the function does not affect the argument that was passed in</li>
    <li>
        Formal vs Actual parameters
        <ul>
            <li>
                Formal parameters - the parameters defined in the function header
            </li>
            <li>
                Actual parameters - the parameter used in the function call, the arguments
            </li>
        </ul>
    </li>
</ul>

## Function return statement
<ul>
    <li>If a function returns a value it must use a return statement that returns a value</li>
    <li>If a function does not return a value(void) the the return statement is optional</li>
    <li>return statement can occur anywhere in the body of the function</li>
    <li>We can have multiple return statements in a function
        <ul>
            <li>Avoid many return statements in a function</li>
        </ul>
    </li>
    <li>The return value is the result of the function call</li>
</ul>