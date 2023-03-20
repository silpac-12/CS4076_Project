/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *AddRecepie;
    QPushButton *ShowRecepie;
    QPushButton *EditRecepie;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(449, 304);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        AddRecepie = new QPushButton(centralwidget);
        AddRecepie->setObjectName("AddRecepie");
        AddRecepie->setGeometry(QRect(10, 170, 101, 24));
        AddRecepie->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));
        ShowRecepie = new QPushButton(centralwidget);
        ShowRecepie->setObjectName("ShowRecepie");
        ShowRecepie->setGeometry(QRect(110, 170, 101, 24));
        ShowRecepie->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));
        EditRecepie = new QPushButton(centralwidget);
        EditRecepie->setObjectName("EditRecepie");
        EditRecepie->setGeometry(QRect(210, 170, 111, 24));
        EditRecepie->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 30, 101, 21));
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(10, 80, 101, 21));
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(10, 130, 101, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 101, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 60, 101, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 110, 101, 21));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(120, 130, 101, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 449, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        AddRecepie->setText(QCoreApplication::translate("MainWindow", "Add Recipie", nullptr));
        ShowRecepie->setText(QCoreApplication::translate("MainWindow", "Show Recipie", nullptr));
        EditRecepie->setText(QCoreApplication::translate("MainWindow", "Edit Recipie", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Enter recepie name", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Enter calories", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Ingredients", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Confirm recepie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
