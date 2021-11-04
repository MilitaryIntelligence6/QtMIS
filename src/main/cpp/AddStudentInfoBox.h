//
// Created by JavaMan on 2021/11/3.
//

#ifndef QTMIS_ADDSTUDENTINFOBOX_H
#define QTMIS_ADDSTUDENTINFOBOX_H

#include <QDialog>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QFile>
#include <QDataStream>
#include <QFormLayout>
#include <QPushButton>

//namespace Widget{
//    class AddStudentInfoBox {
//
//    };
//}

class AddStudentInfoBox : public QDialog {

Q_OBJECT

private:
    QLineEdit *idEditField;

    QLineEdit *nameEditField;

    QLineEdit *sexEditField;

    QLineEdit *ageEditField;

    QLineEdit *chineseScoreEditField;

    QLineEdit *mathScoreEditField;

    QLineEdit *englishScoreEditField;

    QPushButton *submitButton;

    QPushButton *cancelButton;

public:
    AddStudentInfoBox();


signals:
    void onBoxClosed();

public slots:
    void saveStudentInfo();

public:
    /**
     * 发射关闭窗口信号;
     */
    void emitCloseBoxMessage();
};


#endif //QTMIS_ADDSTUDENTINFOBOX_H
