#  Exception handling
Throwing an exception from a function.

What should we return if total is zero?

```
double calculate_avg(int sum, int total){
    return static_cast<double>(sum)/total;
}
```

We can rewrite the function to use exception handling:

We'll throw an exception if we can't complete succesfully

```
double calculate_avg(int sum, int total){
    if(total == 0)
        throw 0;

    return static_cast<double>(sum)/total;
}
```

double average{};

```
try{
    average = calculate_avg(sum, total);
    std::cout<<average<<std::endl
}
catch(int &ex){
    std::cerr<<"You can't divide by zero"<<std::endl;
}

std::cout<<"Bye"<<std::endl;
```

