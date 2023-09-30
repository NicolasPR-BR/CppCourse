# Class members access methods
public, private and protected
<ul>
    <li>Public
        <ul>
            <li>Accessible everywhere</li>
        </ul>
    </li>
    <li>Private
        <ul>
            <li>Accessible only by members or friends of the class</li>
        </ul>
    </li>
    <li>Protected
        <ul>
            <li>Used with inheritance - we'll talk about it in the next section</li>
        </ul>
    </li>
</ul>

### Public

```
    class Class_name{
        public:
            //Declarations  
    };
```

### private

```
    class Class_name{
        private:
            //Declarations  
    };
```

### protected

```
    class Class_name{
        protected:
            //Declarations  
    };
```
### Example
```
class Player{
    private:
        std::string name;
        int health;
        int xp;
    public:
    void talk(std::string text_to_say);
    bool is_dead():
};
```