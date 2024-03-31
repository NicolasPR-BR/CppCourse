# Handling multiple exceptions
Throwing multiple exceptions from a function

A functions can fail in several ways:
<ul>
    <li>Gallons is negative</li>
    <li>Miles or gallons negative</li>
</ul>

```
double calculate_mpg(int miles, int gallons){
    if(gallons == 0)
        throw 0;
    if(milles < 0 || gallons < 0)
        throw std::string{"Negative value error"};

    return static_cast<double>(miles)/gallons;
}
```

To catch these exceptions:

```
double miles_per_gallon{};

try{
    miles_per_gallon = calculate_mpg(miles, gallon);
    std::cout<<"Result:" <<miles_per_gallon<<std::endl
}
catch(int &ex){
    std::cerr<<"You can't divide by zero"<<std::endl;
}
catch(std::string &ex){
    std::cerr<<ex<<std::endl;
}

std::cout<<"Bye"<<std::endl;
```

Catch all handler

```

catch(int &ex){

}
catch(std::string &ex){

}
catch(...){
    std::cerr<<"Unknown exception"<<std::endl;
}
```