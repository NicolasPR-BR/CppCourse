# Recursive funcions
<ul>
    <li>A recursive function is a function that calls itself
        <ul>
            <li>Either directly or indirectly through another function</li>
        </ul>
    </li>
    <li>Recursive problem solving
        <ul>
            <li>Base case</li>
            <li>Divide the rest of problem into subproblem and do recursive call</li>
        </ul>
    </li>
    <li>There are many problems that lend themselves to recursive solutions</li>
    <li>Mathematic - factorial, Fibonnaci, fractals</li>
    <li>Searching and sorting - binary search, search trees, ...</li>
</ul>

### Exampe - Factorial
```
0! = 1
n! = n * (n-1)!
```

<ul>
    <li>Base case
    <ul>
        <li>Factorial(0)=1</li>
    </ul>
    </li>
    <li>Recursive case:
        <ul>
            <li>factorial(n)=n*factorial(n-1)</li>
        </ul>
    </li>
</ul>

### Example code: 
```
    unsigned long long factorial(unsigned long long n){
        if(n == 0)
            return 1;
        return n * factorial(n-1);
    }

    int main(){
        cout<<factorial(8)<<endl;
        return 0;
    }
```

### Example - Fibonnaci
```
    Fib(0) = 0
    Fib(1) = 1
    Fib(n) = Fib(n-1) + Fib(n-2)
```
<ul>
    <li>Base case:
        <ul>
            <li>Fib(0) = 0</li>
            <li>Fib(1) = 1</li>
        </ul>
    </li>
    <li>Recursive case:
        <ul>
            <li>Fib(n)=Fib(n-1)+Fib(n-2)</li>
        </ul>
    </li>

</ul>

# Important Notes
<ul>
    <li>If recursion doesn't eventually stop you will have infinite recursion</li>
    <li>Recursion can be resource intensive</li>
    <li>Remember the base case(s)
        <ul>
            <li>It terminates the recursion</li>
        </ul>
    </li>
    <li>Only use recursive solutions when it makes sense</li>
    <li>Anything that can be done recursively can be done iteratively
        <ul>
            <li>Stack overflow error</li>
        </ul>
    </li>
</ul>