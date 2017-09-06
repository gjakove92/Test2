#include <QString>
#include <QtTest>

class UnitTest : public QObject
{
    Q_OBJECT

public:
    UnitTest();

private Q_SLOTS:
    void testCase1_data();
    void testCase1();
};

UnitTest::UnitTest()
{
}

void UnitTest::testCase1_data()
{
    QTest::addColumn<QString>("data");
    QTest::newRow("0") << QString();
}

void UnitTest::testCase1()
{
    QFETCH(QString, data);
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(UnitTest)

#include "tst_UnitTest.moc"
