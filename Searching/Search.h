#ifndef SEARCH_H
#define SEARCH_H


class SearchStrategy
{
  public:
    const char * title = "";

    SearchStrategy(const char * title): title(title) {}
    virtual ~SearchStrategy(){}
    virtual bool Search(int A[], int n, int value) = 0;
};




#endif
