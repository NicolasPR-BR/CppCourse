# Passing arrays to functions
<ul>
    <li>We can pass an array to a function by providing square brackets in the formal parameter description
    </li>
    <li>
        The array elements are <b>not</b> copied
    </li>
    <li>Since the array name evaluates to the location of the array in memory - this address is what is copied</li>
    <li>So the function has no idea how many elements are in the array since all it knows is the location of the first element(the name of the array)</li>
</ul>

Example
```
    void print_array(int numbers[]);

    int main(){
        int my_numbers[]{1,2,3,4,5};
        print_array(my_numbers);

        return 0;
    }

    void print_array(int numbers[]){
        //Doesn't know how many elements are in the array
    }
```

Correct way to do it(On functions that the end cannot be determined by a value inside the array):
```
    void print_array(int numbers[], size_t size);

    int main(){
        int my_numbers[]{1,2,3,4,5};
        print_array(my_numbers);

        return 0;
    }

    void print_array(int numbers[], size_t size){
        for(int i = 0; i < size; i++){
            cout<<numbers[i]<<endl;
        }
    }
```
Since we're passing the location of the array, the function can modify the actual array. To prevent this:
```
    void print_array(int numbers[], size_t size);

    int main(){
        int my_numbers[]{1,2,3,4,5};
        print_array(my_numbers);

        return 0;
    }

    void print_array(const int numbers[], size_t size){
        for(int i = 0; i < size; i++){
            //Const tells the compiler the array is read-only
            cout<<numbers[i]<<endl;
        }
    }
```