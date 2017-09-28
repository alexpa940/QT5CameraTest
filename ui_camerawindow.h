/********************************************************************************
** Form generated from reading UI file 'camerawindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERAWINDOW_H
#define UI_CAMERAWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include "qcameraviewfinder.h"

QT_BEGIN_NAMESPACE

class Ui_CameraWindow
{
public:
    QCameraViewfinder *centralWidget;

    void setupUi(QMainWindow *CameraWindow)
    {
        if (CameraWindow->objectName().isEmpty())
            CameraWindow->setObjectName(QStringLiteral("CameraWindow"));
        CameraWindow->resize(400, 300);
        centralWidget = new QCameraViewfinder(CameraWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        CameraWindow->setCentralWidget(centralWidget);

        retranslateUi(CameraWindow);

        QMetaObject::connectSlotsByName(CameraWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CameraWindow)
    {
        CameraWindow->setWindowTitle(QApplication::translate("CameraWindow", "CameraWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class CameraWindow: public Ui_CameraWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERAWINDOW_H
