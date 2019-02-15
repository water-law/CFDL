/********************************************************************************
** Form generated from reading UI file 'FDLDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FDLDIALOG_H
#define UI_FDLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *mAddNewTaskAction;
    QAction *mExitAction;
    QAction *mStopDownloadAction;
    QAction *mOptionalAction;
    QAction *mAboutAction;
    QAction *mUpdateAction;
    QAction *mEnglishAction;
    QAction *mChineseAction;
    QWidget *fdldialog;
    QMenuBar *menubar;
    QMenu *mTaskMenu;
    QMenu *mFileMenu;
    QMenu *mDownloadMenu;
    QMenu *mHelpMenu;
    QMenu *mSettingMenu;
    QMenu *menuUI_Language;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(713, 600);
        mAddNewTaskAction = new QAction(MainWindow);
        mAddNewTaskAction->setObjectName(QStringLiteral("mAddNewTaskAction"));
        mExitAction = new QAction(MainWindow);
        mExitAction->setObjectName(QStringLiteral("mExitAction"));
        mStopDownloadAction = new QAction(MainWindow);
        mStopDownloadAction->setObjectName(QStringLiteral("mStopDownloadAction"));
        mOptionalAction = new QAction(MainWindow);
        mOptionalAction->setObjectName(QStringLiteral("mOptionalAction"));
        mAboutAction = new QAction(MainWindow);
        mAboutAction->setObjectName(QStringLiteral("mAboutAction"));
        mUpdateAction = new QAction(MainWindow);
        mUpdateAction->setObjectName(QStringLiteral("mUpdateAction"));
        mEnglishAction = new QAction(MainWindow);
        mEnglishAction->setObjectName(QStringLiteral("mEnglishAction"));
        mChineseAction = new QAction(MainWindow);
        mChineseAction->setObjectName(QStringLiteral("mChineseAction"));
        fdldialog = new QWidget(MainWindow);
        fdldialog->setObjectName(QStringLiteral("fdldialog"));
        MainWindow->setCentralWidget(fdldialog);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 713, 23));
        mTaskMenu = new QMenu(menubar);
        mTaskMenu->setObjectName(QStringLiteral("mTaskMenu"));
        mFileMenu = new QMenu(menubar);
        mFileMenu->setObjectName(QStringLiteral("mFileMenu"));
        mDownloadMenu = new QMenu(menubar);
        mDownloadMenu->setObjectName(QStringLiteral("mDownloadMenu"));
        mHelpMenu = new QMenu(menubar);
        mHelpMenu->setObjectName(QStringLiteral("mHelpMenu"));
        mSettingMenu = new QMenu(menubar);
        mSettingMenu->setObjectName(QStringLiteral("mSettingMenu"));
        menuUI_Language = new QMenu(mSettingMenu);
        menuUI_Language->setObjectName(QStringLiteral("menuUI_Language"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(mTaskMenu->menuAction());
        menubar->addAction(mFileMenu->menuAction());
        menubar->addAction(mDownloadMenu->menuAction());
        menubar->addAction(mSettingMenu->menuAction());
        menubar->addAction(mHelpMenu->menuAction());
        mTaskMenu->addAction(mAddNewTaskAction);
        mTaskMenu->addAction(mExitAction);
        mFileMenu->addAction(mStopDownloadAction);
        mDownloadMenu->addAction(mOptionalAction);
        mHelpMenu->addAction(mAboutAction);
        mHelpMenu->addAction(mUpdateAction);
        mSettingMenu->addAction(menuUI_Language->menuAction());
        menuUI_Language->addAction(mEnglishAction);
        menuUI_Language->addAction(mChineseAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "FDL - PyQt5 Downloader", nullptr));
        mAddNewTaskAction->setText(QApplication::translate("MainWindow", "Add New Task(N)", nullptr));
#ifndef QT_NO_TOOLTIP
        mAddNewTaskAction->setToolTip(QApplication::translate("MainWindow", "add new task", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mAddNewTaskAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        mExitAction->setText(QApplication::translate("MainWindow", "Exit", nullptr));
#ifndef QT_NO_TOOLTIP
        mExitAction->setToolTip(QApplication::translate("MainWindow", "exit", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mExitAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        mStopDownloadAction->setText(QApplication::translate("MainWindow", "Stop Download", nullptr));
#ifndef QT_NO_TOOLTIP
        mStopDownloadAction->setToolTip(QApplication::translate("MainWindow", "stop download", nullptr));
#endif // QT_NO_TOOLTIP
        mOptionalAction->setText(QApplication::translate("MainWindow", "Optional", nullptr));
#ifndef QT_NO_TOOLTIP
        mOptionalAction->setToolTip(QApplication::translate("MainWindow", "optional", nullptr));
#endif // QT_NO_TOOLTIP
        mAboutAction->setText(QApplication::translate("MainWindow", "About", nullptr));
#ifndef QT_NO_TOOLTIP
        mAboutAction->setToolTip(QApplication::translate("MainWindow", "about", nullptr));
#endif // QT_NO_TOOLTIP
        mUpdateAction->setText(QApplication::translate("MainWindow", "Update", nullptr));
#ifndef QT_NO_TOOLTIP
        mUpdateAction->setToolTip(QApplication::translate("MainWindow", "update", nullptr));
#endif // QT_NO_TOOLTIP
        mEnglishAction->setText(QApplication::translate("MainWindow", "English", nullptr));
        mChineseAction->setText(QApplication::translate("MainWindow", "\344\270\255\346\226\207\347\256\200\344\275\223", nullptr));
        mTaskMenu->setTitle(QApplication::translate("MainWindow", "\344\273\273\345\212\241", nullptr));
        mFileMenu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        mDownloadMenu->setTitle(QApplication::translate("MainWindow", "\344\270\213\350\275\275", nullptr));
        mHelpMenu->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        mSettingMenu->setTitle(QApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        menuUI_Language->setTitle(QApplication::translate("MainWindow", "UI Language", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FDLDIALOG_H
