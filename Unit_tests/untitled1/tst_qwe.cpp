#include <QtTest>
#include "../Server/func_for_server.h"

// add necessary includes here

class qwe : public QObject
{
    Q_OBJECT

public:
    qwe();
    ~qwe();

private slots:
    void test_case1();
    void test_case2();
};

qwe::qwe()
{

}

qwe::~qwe()
{

}

void qwe::test_case1()
{
    QString params = "1;1;0;1;0;0;0;1";
    QCOMPARE(first_task(params),"(~A0U~A1U~A2)+(A0U~A1U~A2)+(A0UA1U~A2)+(A0UA1UA2)");
}

void qwe::test_case2()
{
    QString params = "1;1;0;1";
    QCOMPARE(second_task(params),"(A&B&~B)");
}

QTEST_APPLESS_MAIN(qwe)

#include "tst_qwe.moc"
