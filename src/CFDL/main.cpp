#include <QtWidgets/QApplication>
#include <QtCore/QThread>
#include <QtCore/QDebug>
#include "FDLApp.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FDLApp dialog;
	dialog.show();
	qDebug() << "current Thread ID is: " << QThread::currentThreadId();
	return a.exec();
}
