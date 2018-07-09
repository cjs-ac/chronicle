class Lesson {
public:

  /* Members*/
  pugi::xml_document XMLDocument;
  unsigned char DateDay;
  unsigned char DateMonth;
  unsigned int DateYear;
  string Period;
  unsigned int TimeStart;
  unsigned int TimeEnd;
  string Room;
  string Class;
  string Content;

  /* Methods */
  bool LoadFile(string FileName) {
    pugi::xml_parse_result Result = XMLDocument.load_file(FileName.c_str());
    if (Result == true) {
      int i;
      for (pugi::xml_node child: XMLDocument.children()) {
        cout << child.name() << "\n";
      }
    }
    return Result;
  }
};
