#ifndef TEST_TEST_H
#define TEST_TEST_H


class test
{
    private:
        static int m_nNum ;//宣告 static member variable
    public:
        static int GetNum(){ return m_nNum; }//宣告 static member function
};


#endif //TEST_TEST_H