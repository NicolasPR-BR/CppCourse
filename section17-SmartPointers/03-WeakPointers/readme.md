# Weak pointers

<ul>
    <li>Provides a non-ownking "weak" reference</li>
    <li>weak_ptr<T>
        <ul>
            <li>Points to an object of type T on the heap</li>
            <li>Does not participate in owning relationship</li>
            <li>Always created from shared_ptr</li>
            <li>Does NOT increment or decrement reference use count</li>
            <li>Use to prevent strong reference cycles which could prevent objects from being deleted</li>
        </ul>
    </li>
</ul>

weak_ptr - circular or cyclic reference
<ul>
    <li>A refers to B</li>
    <li>B refers to A</li>
    <li>Shared strong ownership prvents heap deallocation</li>
</ul>

A keeps B alive and B keeps A alive

To solve this problem, we can make one of the points weak. Now heap storage deallocation is properly done, and we have no memory leak.