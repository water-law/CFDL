#include <QtCore/QCoreApplication.h>
#include <QtCore/QMimeData>
#include <QtCore/QThread>
#include <QtCore/QDebug>
#include <QtWidgets/QMessageBox>
#include <QtWidgets/QApplication>
#include <QtGUi/QClipboard>
#include "FDLApp.h"

FDLApp::FDLApp(QWidget *parent)
	:QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.mAddNewTaskAction, SIGNAL(triggered(bool)), this, SLOT(showNewTaskDialog(bool)));
	qDebug() << "current Thread ID is: " << QThread::currentThreadId();
	connect(ui.mExitAction, SIGNAL(triggered(bool)), qApp, SLOT(quit()), Qt::QueuedConnection);
}


void FDLApp::showNewTaskDialog(bool b)
{
	QMessageBox::information(this, QString::fromLocal8Bit("ÌבÊ¾"), "success");
	const QClipboard *clipboard = QApplication::clipboard();
	const QMimeData *mimeData = clipboard->mimeData();
}

FDLApp::~FDLApp()
{
}