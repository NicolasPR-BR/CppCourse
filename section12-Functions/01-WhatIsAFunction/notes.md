# What is a function?
<ul>
    <li>C++ Programs
        <ul>
            <li>C++ standard libraries (functions and classes)</li>
            <li>Third-Party libraries (functions and classes)</li>
            <li>Our own functions and classes</li>
        </ul>
    </li>
    <li>Functions allow the modularization of a program
        <ul>
            <li>Separate code into logical self-contained units</li>
            <li>These units can be reused</li>
        </ul>
    </li>   
</ul>

## Boss/Worker analogy
<ul>
    <li>Write your code to the function specification</li>
    <li>Understand what the function does</li>
    <li>Understand what information the function needs</li>
    <li>Understand what the function returns</li>
    <li>Understand any erros the function may produce</li>
    <li>Understand any performance constraints</li>
    <li>Dont worry about HOW the function works internally
        <ul>
            <li>Unless you are the one writing the function!</li>
        </ul>
    </li>
</ul>

## Example <cmath>
<ul>
    <li>Common mathematical calculations</li>
    <li>Global function called as:
    </li>
</ul>

```
function_name(argument);
function_name(argument1, argument2, ...);

cout<< sqrt(400.0)<<endl; // 20.0
double result;

result = pow(2.0, 3.0); // 2.0^3.0
```

## User-defined functions
<ul>
    <li>We can define our own functions</li>
    <li>Here is a preview</li>
</ul>

```
    int add_numbers(int a, int b){
        return a+b;
    }

    cout<<add_numbers(20, 40);
```
