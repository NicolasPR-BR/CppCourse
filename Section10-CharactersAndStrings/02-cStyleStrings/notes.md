# C-Style Strings
<ul> <li>Sequence of characters
    <ul>   
        <li>Contiguous in memory</li>
        <li>Implemented as an array of characters</li>
        <li>Terminated by a null character (null)</li>
        <li>Referred to as zero or null terminated strings</li>
    </ul>
    </li>
</ul>

<ul>
    <li>String literal
        <lu>
            <li>Sequence of character in double quotes, e.g. "Frank"</li>
            <li>Constant</li>
            <li>Terminated with null character</li>
        </lu>
    </li>
</ul>

Example
```
    char my_name[8];
    my_name = "Frank"; //Error

    strcpy(my_name, "Frank"); //OK
```

# \#include \<cstring\>
Functions that work with C-Style Strings
<ul>
    <li>Copying</li>
    <li>Concatenation</li>
    <li>Comparison</li>
    <li>Searching</li>
    <li>And others</li>
</ul>

Examples
```
char str[80];
strcpy(str, "Hello "); //Copy
strcat(str, "there "); //Concatenate
cout<<strlen(str); //11
strcmp(str, "Another "); // > 0 
```
## General purpose functions

<ul>
    <li>Includes functions to convert C-sttyle Strings to
        <ul>
            <li>Integer</li>
            <li>Float</li>
            <li>Long</li>
            <li>Etc</li>
        </ul>
    </li>

</ul>
