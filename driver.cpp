#include <iostream>
#include <string>
#include "DoublyList.hpp"

using namespace std;

int main() {

    cout << "INT DATATYPE" << endl;
    DoublyList<int> intList;

    cout << "append" << endl;
    intList.append(10);
    intList.append(20);
    intList.append(30);
    cout << intList;

    cout << "insert" << endl;
    intList.insert(0, 5);
    intList.insert(intList.getLength(), 40);
    cout << intList;

    cout << "getElement" << endl;
    cout << "Element 0: " << intList.getElement(0) << endl;
    cout << "Element 2: " << intList.getElement(2) << endl;

    cout << "replace" << endl;
    intList.replace(1, 99);
    cout << intList;

    cout << "search" << endl;
    cout << "search(20): " << (intList.search(20) ? "true" : "false") << endl;

    cout << "remove" << endl;
    intList.remove(0);
    intList.remove(intList.getLength() - 1);
    cout << intList;

    cout << "exception tests" << endl;
    try { intList.getElement(-1); }
    catch (string& e) { cout << e << endl; }

    try { intList.insert(100, 5); }
    catch (string& e) { cout << e << endl; }

    try { intList.remove(100); }
    catch (string& e) { cout << e << endl; }

    cout << "copy constructor" << endl;
    DoublyList<int> copyInt(intList);
    cout << copyInt;

    cout << "assignment operator" << endl;
    DoublyList<int> assignInt;
    assignInt = intList;
    cout << assignInt;

    cout << "clear" << endl;
    intList.clear();
    cout << intList;
    cout << "isEmpty: " << (intList.isEmpty() ? "true" : "false") << endl;


    cout << "\nSTRING DATATYPE" << endl;
    DoublyList<string> stringList;

    stringList.append("CS20");
    stringList.append("Doubly");
    stringList.append("List");
    cout << stringList;

    stringList.insert(1, "is");
    cout << stringList;

    stringList.replace(0, "Hello");
    cout << stringList;

    cout << "search(\"List\"): "
         << (stringList.search("List") ? "true" : "false") << endl;

    stringList.remove(2);
    cout << stringList;

    return 0;
}
