# Overloading Functions
<ul>
    <li>We can have functions that have different parameter list that have the same name</li>
    <li>Abstraction mechanism since we can just think 'printf' for example</li>
    <li>A type of polymorphism
        <ul>
            <li>We can have the same name work with different data types to execute similar behavior</li>
        </ul>
    </li>
    <li>The compiler must be able to tell the function apart based on the parameter lists and argument supplied</li>
</ul>

### Example
```
    int add_numbers(int, int);
    double add_numbers(double, double);

    int main(){
        cout<<add_numbers(10,20)<<endl; //Integer
        cout<<add_numbers(10.0,20.0)<<endl; //Double
        return 0
    }
    
    int add_numbers(int, int){
        return a + b;
    }
    double add_numbers(double, double){
        return a + b;
    }
```
An example that will cause an error:
```
int get_value();
double get_value();

cout<<get_value()<<endl; //Which one?
```