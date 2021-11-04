//
// Created by JavaMan on 2021/11/3.
//

#include "AddStudentInfoBox.h"

AddStudentInfoBox::AddStudentInfoBox() {
    this->setWindowTitle("添加学生信息");
    // 不能用智能指针;
//    std::unique_ptr<QVBoxLayout> vBoxLayout(new QVBoxLayout);
//    std::unique_ptr<QFormLayout> formLayout(new QFormLayout);
    QVBoxLayout *vBoxLayout = new QVBoxLayout;
    QFormLayout *formLayout = new QFormLayout;
    this->idEditField = new QLineEdit;
    this->nameEditField = new QLineEdit;
    this->sexEditField = new QLineEdit;
    this->ageEditField = new QLineEdit;
    this->chineseScoreEditField = new QLineEdit;
    this->mathScoreEditField = new QLineEdit;
    this->englishScoreEditField = new QLineEdit;

    formLayout->addRow("学号", idEditField);
    formLayout->addRow("名字", nameEditField);
    formLayout->addRow("性别", sexEditField);
    formLayout->addRow("年龄", ageEditField);
    formLayout->addRow("汉语成绩", chineseScoreEditField);
    formLayout->addRow("数学成绩", mathScoreEditField);
    formLayout->addRow("英语成绩", englishScoreEditField);

    formLayout->setRowWrapPolicy(QFormLayout::WrapLongRows);

//    std::unique_ptr<QHBoxLayout> hBoxLayout(new QHBoxLayout);
    QHBoxLayout *hBoxLayout = new QHBoxLayout;
    this->submitButton = new QPushButton("提交");
    this->cancelButton = new QPushButton("取消");
    hBoxLayout->addWidget(submitButton);
    hBoxLayout->addWidget(cancelButton);
//    vBoxLayout->addLayout(formLayout.get(), 4);
    vBoxLayout->addLayout(formLayout, 4);
//    vBoxLayout->addLayout(hBoxLayout.get(), 1);
    vBoxLayout->addLayout(hBoxLayout, 1);

//    this->setLayout(vBoxLayout.get());
    this->setLayout(vBoxLayout);

    QObject::connect(submitButton, &QPushButton::clicked, this, &AddStudentInfoBox::saveStudentInfo);
    QObject::connect(cancelButton, &QPushButton::clicked, this, &AddStudentInfoBox::close);
}

// 自动生成的, 所以不需要实现, 写了就要报错;
//void AddStudentInfoBox::onBoxClosed() {
//
//}

void AddStudentInfoBox::saveStudentInfo() {
    QString id = this->idEditField->text();
//    QString
    if (id == "") {
        return;
    }
//    if ()
}

void AddStudentInfoBox::emitCloseBoxMessage() {
    emit onBoxClosed();
}
