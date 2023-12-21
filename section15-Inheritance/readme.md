# Inheritance
What is and why is it used?
<ul>
    <li>Provides a method for creating new classes from existing classes</li>
    <li>The new class contains the data and behaviors of the existing class</li>
    <li>Allow for reuse of existing classes</li>
    <li>Allows us to focus on the common attributes among a set of classes</li>
    <li>Allows new classes to modify behaviors of existing classes to make it unique
        <ul>
            <li>Without actually modifying the original class</li>
        </ul>
    </li>
</ul>

## Terminology 

<ul>
    <li>Inheritance
        <ul>   
            <li>Process of creating new classes from existing classes</li>
            <li>Reuse mechanism</li>
        </ul>
    </li>
    <li>Single inheritance
        <ul>
            <li>A new class is created from another 'single' class</li>
        </ul>
    </li>
    <li>Multiple inheritance
        <ul>
            <li>A new class is created from two (or more) other classes</li>
        </ul>    
    </li>
</ul>

<ul>
    <li>Base class/Parent/Super class
        <ul>
            <li>The class being extended or inherited from</li>
        </ul>
    </li>
    <li>Derived class (child class, sub class)
        <ul>
            <li>The class being created from the base class</li>
            <li>Will inherit attributes and operations from base class</li>
        </ul>
    </li>
</ul>

<ul>
    <li>"Is-A" relationship
        <ul>
            <li>Public inheritance</li>
            <li>Derived classes are sub-types of their Base classes</li>
            <li>Can use a derived class object wherever we use a base class object</li>
        </ul>
    </li>   
    <li>Generalization
        <li>Combining similar classes into a single, more general class based on common attributes</li>
    </li>
    <li>Specialization
        <li>Creating new classes from existing classes proving more specialized attributes or operations</li>
    </li>
    <li>Inheritance or Class Hierarchies
        <ul>
            <li>Organization of our inheritance relationships</li>
        </ul>
    </li>
</ul>

# Inherirance and composition
Public inheritance and composition
<ul>    
    <li>Both of them allows us to reuse classes</li>
</ul>

<ul>
    <li>Public Inheritance
        <ul>
            <li>"is A" relationship
                <ul>
                    <li>Employee "is-a" Person</li>
                    <li>Checking account "is-a" Account</li>
                    <li>Circle "is-a" shape</li>
                </ul>
            </li>
        </ul>
    </li>
    <li>Composition
        <ul><li>"Has-a" relationship
            <ul>
                <li>Person "has-a" Account</li>
                <li>Player "has-a" Special attack</li>
                <li>Circle "has-a" location</li>
            </ul>
            </li>
        </ul>
    </li>
</ul>