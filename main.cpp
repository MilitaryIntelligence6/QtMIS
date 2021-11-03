
#include <QApplication>
#include "MainWidget.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
//    MainWindow w;
//    w.show();
//    MainWidget mainWidget;
//    mainWidget.show();
    auto *mainWidget = new MainWidget();
    mainWidget->show();

    return app.exec();
}
