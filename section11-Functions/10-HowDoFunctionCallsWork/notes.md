# How do functions calls work?
<ul>
    <li>Functions use the "function call stack"
        <ul>
            <li>Analogous to a stack of books</li>
            <li>LIFO - Last in First Out</li>
            <li>push and pop</li>
        </ul>
    </li>
    <li>Stack frame or Activation Record
        <ul>
            <li>Functions must return control to function that called it</li>
            <li>Each time a function is called we create a new activation record and push it on stack</li>
            <li>Local variables and function parameters are allocated on the stack</li>
        </ul>
    </li>
    <li>Stack size is finite</li>
</ul>