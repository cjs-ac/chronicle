#include <iostream>
#include <string>
using namespace std;
#include "pugixml/src/pugixml.cpp"
#include "Lesson.cpp"

int main() {
  Lesson TestLesson;
  TestLesson.LoadFile("test/lessons.xmc");
}
