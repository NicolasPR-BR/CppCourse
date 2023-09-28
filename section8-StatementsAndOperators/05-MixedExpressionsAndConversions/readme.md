# Mixed Type Expressions
<ul>
    <li>C++ operations occur on same type opreands</li>
    <li>If operands are of different types, C++ will convert one</li>
    <li>Important! Since if could affect calculation results</li>
    <li>C++ will attempt to automatically convert types(coercion) if it can't, a compiler error will occur</li>
</ul>

## Conversions
Conversions
<ul>
    <li>Higher vs Lower Types are based on the size of the values the type can hold
        <ul>
            <li>long double, double, float, unsigned long, long, unsigned int, int</li>
            <li>short and char types are always converted to int</li>
        </ul>
    </li>
    <li>Type Coercion: conversion of one operand to another data type</li>
    <li>Promotion
        <ul>
            <li>Used in mathematical expressions</li>
        </ul>
    </li>
    <li>Demotion:
        <ul>
            <li>Used with assignment to lower type</li>
        </ul>
    </li>
</ul>

## Examples:
2 is promoted to 2.0
<br/><b>lower op higher</b>
```
2 * 5.2
```
The higher is demoted to a lower
<br/><b>lower = higher;</b>
```
int num{0};
num = 100.2;
```

## Explicit Type Casting - static_cast<type>
```
int total_amount {100};
int total_number{8};
double average{0.0};

average = total_amount / total_number;
cout<< average << endl; //  Display 12

average = static_cast<double>(total_amount) / total_number;
cout<< average<<endl; //Display 12.5
```
