# Testing for Equality
The == and != operators
<ul>
    <li>Compares the values of 2 expressions</li>
    <li>Evaluates to a boolean (True or False, 1 or 0)</li>
    <li>Commonly use in control flow statements</li>
</ul>

```
expr1 == expr2
expr1 != expr2
100 == 200
num1 != num2


bool result{false};
result = (100 == 50+50);
result = (num1 != num2);

cout<<(num1 == num2)<<endl; //0 or 1
cout<<std::boolalpha;
cout<<(num1==num2)<<endl; //true or false
cout<<std::noboolalpha;

```