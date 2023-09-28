# What is an array?
<ul>
    <li>Compound data type or data structure
        <ul>
            <li>Collection of elements</li>
        </ul>
    </li>
    <li>All elements are of the same type</li>
    <li>Each element can be accessed directly</li>
</ul>

# Why do we need arrays?
int test_score1{0};
<br/>int test_score2{0};
<br/>int test_score3{0};
### There's a better way to do it:
int test_score[]{[0,0,0]};
# Characteristics
<ul>
    <li>Fixed size</Li>
    <li>Elements are the same type</Li>
    <li>Stored contiguously in memory</Li>
    <li>Individual elements can be accessed by their position or index</Li>
    <li>First element is at index 0</Li>
    <li>Last element is at index size-1</Li>
    <li>No checking to see if you are out of bounds</Li>
    <li>Always initialize arrays</Li>
    <li>Very efficient</Li>
    <li>Iteration (looping) is ofeten used to process</Li>
</ul>

#### Arrays should not be used, there are C++ alternatives that are better than Arrays