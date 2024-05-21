/*
    -> Operator overloading allows to operate on on objects of class types with the same syntax.
    -> Most operators can be overloaded so that they perform special operations relative to classes.
    -> The ability to overload operators is one of C++ most powerful features. It allows the full integration of new class types into the programming environment.
    -> C++ allows almost all operators to be overloaded in which case at least one operand must be an instance of al class.
    -> Rules:-
        - Only existing operators symbols may be overloaded. New symbols, such as ** for exponentation, cant be defined.
        - The operators " :: " , " .* " , " . " and " ?: " cant be overloaded.
        - Operators " = ", " [] ", " () " and " -> " can only be defined as members of a class.
        - There must be atleast one operand to overload an operator.
        - It is not possible to overload operators involving only built-in data types.
        - The numbers of operands for an operator may not be changed.
        - The precedence of operators is not changed in overloading.
*/

/*
    Why can’t the above-stated operators be overloaded?
        1. sizeof Operator
            This returns the size of the object or datatype entered as the operand. This is evaluated by the compiler and cannot be evaluated during runtime. The proper incrementing of a pointer in an array of objects relies on the sizeof operator implicitly. Altering its meaning using overloading would cause a fundamental part of the language to collapse.

        2. typeid Operator
            This provides a CPP program with the ability to recover the actually derived type of the object referred to by a pointer or reference. For this operator, the whole point is to uniquely identify a type. If we want to make a user-defined type ‘look’ like another type, polymorphism can be used but the meaning of the typeid operator must remain unaltered, or else serious issues could arise.

        3. Scope resolution (::) Operator
            This helps identify and specify the context to which an identifier refers by specifying a namespace. It is completely evaluated at runtime and works on names rather than values. The operands of scope resolution are note expressions with data types and CPP has no syntax for capturing them if it were overloaded. So it is syntactically impossible to overload this operator.

        4. Ternary or conditional (?:) Operator
            The ternary or conditional operator is a shorthand representation of an if-else statement. In the operator, the true/false expressions are only evaluated on the basis of the truth value of the conditional expression.

            A function overloading the ternary operator for a class say ABC using the definition
            ABC operator ?: (bool condition, ABC trueExpr, ABC falseExpr);
            would not be able to guarantee that only one of the expressions was evaluated. Thus, the ternary operator cannot be overloaded.
*/

/*
    Important Points about Operator Overloading 
        1) For operator overloading to work, at least one of the operands must be a user-defined class object.

        2) Assignment Operator: Compiler automatically creates a default assignment operator with every class. The default assignment operator does assign all members of the right side to the left side and works fine in most cases (this behavior is the same as the copy constructor). See this for more details.

        3) Conversion Operator: We can also write conversion operators that can be used to convert one type to another type.

        4) Any constructor that can be called with a single argument works as a conversion constructor, which means it can also be used for implicit conversion to the class being constructed. 
*/

/*
    Why and when do we require operator overloading??

        1. Natural Semantics:
            Operator overloading allows you to define custom behaviors for operators that make sense in the context of your classes. This can lead to more natural and intuitive code, making your classes easier to use and understand.

        2. Readability and Expressiveness:
            Overloaded operators can make your code more readable and expressive. For example, you can use the '+' operator to concatenate strings or add complex numbers, which is more intuitive than calling a method like concatenate or add explicitly.

        3. Consistency with Built-in Types:
            Overloading operators allows your custom types to behave more like built-in types. This can lead to more consistent and idiomatic code, as users of your classes can apply familiar syntax and semantics.

        4. Mathematical Operations:
            For mathematical or scientific classes, operator overloading allows you to define operations like addition, subtraction, multiplication, and division, making your code more closely resemble mathematical expressions.

        5. Saves Development Time:
            Operator overloading can reduce the amount of code you need to write. Instead of creating separate methods for various operations, you can leverage the existing syntax of operators.

        6. Code Reusability:
            Once you've defined how operators behave for a particular class, you can reuse that class in different contexts without having to rewrite the same logic. This promotes code reusability and maintainability.
*/