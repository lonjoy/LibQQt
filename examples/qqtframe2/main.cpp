#include "mainwindow.h"
#include <QApplication>
#include <qqtapplication.h>
#include <qqtframe.h>
#include <QSettings>

class MyApp : public QQtApplication
{
public:
    explicit MyApp ( int& argc, char** argv ) : QQtApplication ( argc, argv ) {
        QApplication::setOrganizationName ( "qqtframe" );
        QApplication::setOrganizationDomain ( "www.qqtframe.com" ); // 专为Mac OS X 准备的
        QApplication::setApplicationName ( "QQtFrame" );
        QSettings::setPath ( QSettings::NativeFormat, QSettings::UserScope, CONFIG_PATH );
        QSettings::setPath ( QSettings::NativeFormat, QSettings::SystemScope, CONFIG_PATH );
    }
};

int main ( int argc, char* argv[] )
{
    MyApp a ( argc, argv );
    MainWindow w;
    w.show();

    return a.exec();
}
