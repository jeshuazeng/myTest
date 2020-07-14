#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWebEngineWidgets/QWebEngineView>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QWebEngineView *pEngView = new QWebEngineView(this);
        pEngView->setContextMenuPolicy(Qt::NoContextMenu);
        //pEngView->load(QUrl("E:\\my_Documents\\echartTest\\testEcharts.html"));
        pEngView->load(QUrl("file:///" + qApp->applicationDirPath() + "/htmlEcharts/testEcharts.html"));

        pEngView->show();
     setCentralWidget(pEngView);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

}
