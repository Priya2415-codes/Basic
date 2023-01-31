// DATASTRUCTURE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array Size: ";
    cin >> n;
    cout << endl;

    int* p;

    p = new int[n];

    for (int i = 0;i < n;i++)
    {
        cin >> p[i];
        cout << "Entered Number: " << p[i] << endl << endl;
    }
    for (int i = 0;i < n;i++)
    {
        cout << p[i] << endl;
   }
}*/

 
    
/*#include <iostream>
#include <stdio.h>
using namespace std;

int swap(int *x, int *y, int *z)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
    return 0;
}

int main()
{
    int a;
    cout << "enter a number:";
    cin >> a;
    int b;
    cout << "enter a number:";
    cin >> b;
    int c;
    cout << "enter a number:";
    cin >> c;
    swap(&a, &b, &c);
    cout << a << b << c ;
}*/


/*#include <iostream>
#include <stdio.h>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

void initialize(struct rectangle* r, int l, int b)
{
    r->length = l;
    r->breadth = b;
    cout << "length: "<< r->length;
    cout << "breadth:" << r->breadth;

}
int area(struct rectangle r)
{
    return r.length * r.breadth;
}
void changelegth(struct rectangle* r, int l)
{
    r->length = l;
    cout << "length: "<< l;
}
int main()
{
    struct rectangle r;
    initialize(&r, 10, 5);
    cout << "area:" << area(r) << endl;
    changelegth(&r, 20);
    cout << "changed area:" << area(r) << endl;
}*/

/*#include <iostream>
#include <stdio.h>
using namespace std;

class rectangle
{
private:

    int length;
    int breadth;
public:
   rectangle(int l, int b)
    {
        length = l;
        breadth = b;
        cout << "length: " << length;
        cout << "breadth:" << breadth;

    }
    int area()
    {
        return length * breadth;
    }
    void changelength(int l)
    {
        length = l;
        cout << "length: " << l;
    }
};
int main()
{
    rectangle r(10,5);
    cout << "area:" << r.area() << endl;
    r.changelength(20);
    cout << "changed area:" << r.area() << endl;
}*/

/*/#include <iostream>
#include <stdio.h>
using namespace std;

class rectangle
{
private:

    int length;
    int breadth;
public:
    rectangle()
    {
        length = 0;
        breadth = 0;
    }
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    void setlength(int l)
    {
        length = l;
    }
    void setbreadth(int b)
    {
        breadth = b;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    ~rectangle()
    {
        cout << "Destructor";
    }
};

int main()
{
    rectangle r(10, 5);
    cout << "area:" << r.area()<<endl;
    cout << "Perimeter" << r.perimeter()<<endl;
}*/

/*#include <iostream>
#include <stdio.h>
using namespace std;

template <class T>
class arithmetic
{
private:
    T a;
   T b;
public:
    arithmetic(T a, T b);
    T add();
    T sub();
};

template <class T>
arithmetic<T>::arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}
template <class T>
T arithmetic<T>::add()
{
    T c;
    c = a + b;
    return c;
}
template <class T>
T arithmetic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}

int main()
{
    arithmetic<float> ar(10.99, 5.99);
    cout << "add:" << ar.add()<<endl;
    cout << "sub:" << ar.sub()<<endl;

    arithmetic<char> ar1('A','B');
    cout << "add:" << (int)ar1.add() << endl;
    cout << "sub:" << (int)ar1.sub() << endl;
}*/
/*tail function

#include <iostream>
#include <stdio.h>
using namespace std;
int fun(int n)
{
    if (n > 0)
    {

        fun(n - 1);
        printf("%d", n);
        return 0;
    }

}
int main()
{
    int x = 3;
    fun(x);

}*/
/*head function

#include <iostream>
#include <stdio.h>
using namespace std;
int fun(int n)
{
    if (n > 0)
    {
     
        fun(n - 1);
        printf("%d", n);
        return 0;
    }

}
int main()
{
    int x=3;
    fun(x);
  
}*/

/*Static variable*/

/*#include <iostream>
#include <stdio.h>
using namespace std;
int fun(int n)
{
    static int x;
    if (n > 0)
    {   
        x++;
        return fun(n - 1)+x;
    }
    return 0;
}
int main()
{
    int r;
    r=fun(5);
    printf("%d", r);
    return 0;

}*/
/* Tree recursion */
/*#include <iostream>
#include <stdio.h>
using namespace std;
int fun(int n)
{
    if (n > 0)
    {
        printf("%d", n);
        fun(n - 1);
        fun(n - 1);
    }
    return 0;
}
int main()
{
    fun(3);
    return 0;
}*/

/*INDIRECT RECURION*/

/*#include <iostream>
#include <stdio.h>
using namespace std;
int funb(int n);
int funa(int n)
{
    if (n > 0)
    {
        printf("%d\n", n);
        funb(n - 1);
    }
    return 0;
}
int funb(int n)
{
    if (n > 1)
    {
        printf("%d\n", n);
            funa(n/2);
    }
    return 0;
}

int main()
{
    funa(20);
    return 0;
}*/

/*NESTED RECURSION*/

/*#include <iostream>
#include <stdio.h>
using namespace std;
int fun(int n)
{
    if (n > 100)
        return n - 10;
    else   
        return fun(fun(n + 11));
}

int main()
{
    int r;
    r = fun(95);
    printf("%d\n", r);
    return 0;
}*/

/*SUM OF N NATURAL NUMBERS*/

/*#include <iostream>
#include <stdio.h>
using namespace std;
int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return sum(n-1)+n;
}

int main()
{
    int a;
    a = sum(5);
    printf("%d\n", a);
    return 0;
}
*/

/*#include <iostream>
#include <stdio.h>
using namespace std;
int sum(int n)
{
    int i, s = 0;
    for(int i=1;i<=n;i++)
        s=s+i;
    return s;
}

int main()
{
    int a;
    a = sum(5);
    printf("%d\n", a);
    return 0;
}*/

checking with pull and push
