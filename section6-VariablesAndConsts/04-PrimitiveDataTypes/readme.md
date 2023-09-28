# C++ Primitive Data Types
<ul>
    <li>Fundamental data types implemented directly by the C++ language</li>
    <li>Character types</li>
    <li>Integer types
        <ul>
            <li>Signed and unsigned</li>
        </ul>
    </li>
    <li>Floating-point type</li>
    <li>Boolean type</li>
    <li>Size and precision if often compiler-dependent
    <ul>
        <li>#include < climits ></li>
    </ul>
    </li>
</ul>

## Type sizes
<ul>
    <li>Expressed in bits</li>
    <li>The more bits the more values that can be represented</li>
    <li>The more bits the more storage required</li>
</ul>

<table>
<tr>
    <th>bits</th>
    <th>bytes</th>
    <th>Represented value</th>
    <th>2^n</th>
</tr>

<tr>
    <td>8</td>
    <td>1</td>
    <td>256</td>
    <td>2^8</td>
<tr>

<tr>
    <td>16</td>
    <td>2</td>
    <td>65 536</td>
    <td>2^16</td>
</tr>

<tr>
    <td>32</td>
    <td>4</td>
    <td>4 294 967 296</td>
    <td>2^32</td>
</tr>

<tr>
    <td>64</td>
    <td>8</td>
    <td>18 446 744 073 709 551 616</td>
    <td>2^64</td>
</tr>
</table>

## Character types
<ul>
    <li>Used to represent single characters, 'A', 'X','@'</li>
    <li>Wider types are used to represent wide character sets</li>
</ul>

<table>
    <tr>
        <th>Type name</th>
        <th>Size/Precision</th>
    </tr>
    <tr>
        <td>char</td>
        <td>Exactly one byte. 8 bits</td>
    </tr>
    <tr>
        <td>char16_t</td>
        <td>At least 16 bits</td>
    </tr>
    <tr>
        <td>char32_t</td>
        <td>At least 32 bits</td>
    </tr>
    <tr>
        <td>wchar_t</td>
        <td>Can represent the largest available character set</td>
    </tr>
</table>

## Integer type
<ul>
    <li>Used to represent whole numbers</li>
    <li>Signed and unsigned versions</li>
</ul>

<table>
    <tr>
        <th>Type name</th>
        <th>Size/Precision</th>
    </tr>
    <tr>
        <td>signed <b>short</b> int</td>
        <td>At least 16 bits</td>
    </tr>
    <tr>
        <td>signed <b>int</b></td>
        <td>At least 16 bits</td>
    </tr>
    <tr>
        <td>signed <b>long</b> int</td>
        <td>At least 32 bits</td>
    </tr>
    <tr>
        <td>signed <b>long long</b> int</td>
        <td>At least 64 bits</td>
    </tr>
</table>

<table>
    <tr>
        <th>Type Name</th>
        <th>Size/Precision</th>
    </tr>
    <tr>
        <td><b>unsigned short</b> int</td>
        <td>At least 16 bits</td>
    </tr>
    <tr>
        <td><b>unsigned</b> int</td>
        <td>At least 16 bits</td>
    </tr>
    <tr>
        <td><b>unsigned long</b> int</td>
        <td>At least 32 bits</td>
    </tr>
    <tr>
        <td><b>unsigned long long int</b> int</td>
        <td>At least 64 bits</td>
    </tr>
</table>

## Floating-point type
<ul>
    <li>Used to represent non-integer numbers</li>
    <li>Represented by mantissa and exponent(scientific notation)</li>
    <li>Precision is the number of digits in the mantissa</li>
    <li>Precision and size are compiler dependent</li>
</ul>

<table>
    <tr>
        <th>Type name</th>
        <th>Size/Typical precision</th>
        <th>Typical Range</th>
    </tr>
    <tr>
        <td>float</td>
        <td>/7 decimal digits</td>
        <td>1.2*10-38 to 3.4*10^38</td>
    </tr>
    <tr>
        <td>double</td>
        <td>No less than float / 15 decimal digits</td>
        <td>2.2*10^-308 to 1.8*10^308</td>
    </tr>
    <tr>
        <td>lon double</td>
        <td>No less than double / 19 decimal digits</td>
        <td>3.3*10^-4932 to 1.2*10^4932</td>
    </tr>
</table>

## Boolean data types
<ul>
    <li>Used to represent true and false</li>
    <td>Zero is false</td>
    <td>Non-zero is true</td>
</ul>

<table>
    <tr>
        <th>Type name</th>
        <th>Size/Precision</th>
    </tr>
    <tr>
        <td>bool</td>
        <td>Usually 8 bits, true or false (C++ keywords)</td>
    </tr>
</table>