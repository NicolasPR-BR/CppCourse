# Const and pointers
const and pointers
<ul>
    <li>There are several ways to qualify pointers using const
    <ul>
        <li>Pointers to constants</li>
        <li>Constant pointer</li>
        <li>Constant pointers to constants</li>
    </ul></li>
</ul>

## Pointers to constants
<ul>
    <li>The data pointed to by the pointers is constant and <b>cannot</b> be changed</li>
    <li>The pointer itself can be change and point somewhere else</li>
</ul>

```
int high_score{100};
int low_score{65};
const int *score_ptr{&high_score};

*score_ptr = 86; //Error
score_ptr = &low_score; //ok
```

## Constant pointers
<ul>
    <li>The data pointed to by the pointers can be changed</li>
    <li>The pointer itself cannot change and point somewhere else</li>
</ul>

```
    int high_score{100};
    int low_score{65};
    int *const score_ptr{&high_score};

    *score_ptr = 86; //ok
    score_ptr = &low_score; //Error
```

## Constant pointer to constants
<ul>
    <li>The data pointed to by the pointer is constant can cannot be changed</li>
    <li>The pointer itself cannot change and point somewhere else</li>
</ul>

```
    int high_score{100};
    int low_score{65};

    const int *const score_ptr{&high_score};

    *score_ptr = 86; //Error
    score_ptr = &low_score; //Error
```