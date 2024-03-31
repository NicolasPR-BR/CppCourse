# Using the final specifier
<ul>
    <li>C++11 provider the final specifier
        <ul>
            <li>When used at the class level</li>
            <li>Prevents a class from being derived from</li>
        </ul>
    </li>
    <li>
        When used at the method level
        <ul>
            <li>Prevents virtual functions from being overriden in derived classes</li>
        </ul>
    </li>
</ul>

final class

```
class My_class final{

};

class Derived final : public Base{

};
```