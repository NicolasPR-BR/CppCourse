# Dereferencing a Pointer
Access the data we'wre pointing to - Dereferencing a pointer
<ul>
    <li>If score_ptr is a pointer and has a valid address</li>
    <li>Then you can access the data at the address contained in the score_ptr using the dereferencing operator *</li>
</ul>

```
    int score{100};
    int *score_ptr{&score};

    cout<< *score_ptr<<endl;

    *score_ptr = 200;
    cout<<*score_ptr<<endl;
    cout<<score<<endl;
```

```
double high_temp{100.7};
double low_temp{37.4};
double *temp_ptr{&high_temp};

cout<<*temp_ptr<<endl;

temp_ptr = &low_temp;
cout<<*temp_ptr<<endl;

```

```
string name{"Frank"};

string *string_ptr{&name};

cout<<*string_ptr<<endl;
name = "James";
cout<<*string_ptr<<endl;

```