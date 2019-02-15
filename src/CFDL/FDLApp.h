#ifndef FDLAPP_H
#define FDLAPP_H

#include "ui_FDLDialog.h"

class FDLApp : public QMainWindow {
	Q_OBJECT
public:
	FDLApp(QWidget *parent = 0);
	~FDLApp();
public slots:
	void showNewTaskDialog(bool);
private:
	Ui::MainWindow ui;
};

#endif