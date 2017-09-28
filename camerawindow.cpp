#include "camerawindow.h"
#include "ui_camerawindow.h"

#include <QCamera>
#include <QCameraInfo>
#include <QCameraViewfinder>

CameraWindow::CameraWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CameraWindow)
{
    ui->setupUi(this);

    QCamera *camera = new QCamera(QCameraInfo::availableCameras().at(0));
    //QCameraViewfinder *viewFinder = new QCameraViewfinder(this);
    camera->setViewfinder(ui->centralWidget);
    //ui->centralWidget->verticalLayout->addWidget(viewFinder);
    camera->start();

    this->showFullScreen();
}

CameraWindow::~CameraWindow()
{
    delete ui;
}
