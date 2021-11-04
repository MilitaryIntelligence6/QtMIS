//
// Created by JavaMan on 2021/11/3.
//

#include "Student.h"

QString Student::getId() const {
    return this->id;
}

void Student::setId(const QString &value) {
    this->id = value;
}

QString Student::getName() const {
    return this->name;
}

void Student::setName(const QString &value) {
    this->name = value;
}

QString Student::getSex() const {
    return this->sex;
}

void Student::setSex(const QString &value) {
    this->sex = value;
}

QString Student::getAge() const {
    return this->age;
}

void Student::setAge(const QString &value) {
    this->age = value;
}

QString Student::getChineseScore() const {
    return this->chineseScore;
}

void Student::setChineseScore(const QString &value) {
    this->chineseScore = value;
}

QString Student::getMathScore() const {
    return this->mathScore;
}

void Student::setMathScore(const QString &value) {
    this->mathScore = value;
}

QString Student::getEnglishScore() const {
    return this->englishScore;
}

void Student::setEnglishScore(const QString &value) {
    this->englishScore = value;
}


