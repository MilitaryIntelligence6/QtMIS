//
// Created by JavaMan on 2021/11/3.
//

#ifndef QTMIS_STUDENT_H
#define QTMIS_STUDENT_H

#include <QString>


class Student {

private:
    QString id;

    QString name;

    QString sex;

    QString age;

    QString chineseScore;

    QString mathScore;

    QString englishScore;

public:
    QString getId() const;

    void setId(const QString &value);

    QString getName() const;

    void setName(const QString &value);

    QString getSex() const;

    void setSex(const QString &value);

    QString getAge() const;

    void setAge(const QString &value);

    QString getChineseScore() const;

    void setChineseScore(const QString &value);

    QString getMathScore() const;

    void setMathScore(const QString &value);

    QString getEnglishScore() const;

    void setEnglishScore(const QString &value);
};


#endif //QTMIS_STUDENT_H
