
#include <QApplication>
#include "MainWidget.h"


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    std::unique_ptr<MainWidget> mainWidget(new MainWidget());
    mainWidget->show();
    return QApplication::exec();
}
