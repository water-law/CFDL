/********************************************************************************
** Form generated from reading UI file 'ChangeLanguage.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGELANGUAGE_H
#define UI_CHANGELANGUAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChangeLanguageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *mTipLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mSavePushButton;
    QPushButton *mCacelPushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ChangeLanguageDialog)
    {
        if (ChangeLanguageDialog->objectName().isEmpty())
            ChangeLanguageDialog->setObjectName(QStringLiteral("ChangeLanguageDialog"));
        ChangeLanguageDialog->resize(473, 175);
        ChangeLanguageDialog->setStyleSheet(QStringLiteral("Dialog {border-images: url( E:/Projects/FDL/favicon.png)}"));
        verticalLayout = new QVBoxLayout(ChangeLanguageDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, -1);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mTipLabel = new QLabel(ChangeLanguageDialog);
        mTipLabel->setObjectName(QStringLiteral("mTipLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mTipLabel->sizePolicy().hasHeightForWidth());
        mTipLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Ebrima"));
        font.setPointSize(9);
        font.setKerning(true);
        mTipLabel->setFont(font);
        mTipLabel->setTabletTracking(false);
        mTipLabel->setAcceptDrops(false);
        mTipLabel->setAutoFillBackground(false);
        mTipLabel->setStyleSheet(QStringLiteral("QLabel {background-color: #fff}"));
        mTipLabel->setInputMethodHints(Qt::ImhNone);
        mTipLabel->setTextFormat(Qt::AutoText);
        mTipLabel->setScaledContents(false);
        mTipLabel->setWordWrap(true);

        gridLayout->addWidget(mTipLabel, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(290, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mSavePushButton = new QPushButton(ChangeLanguageDialog);
        mSavePushButton->setObjectName(QStringLiteral("mSavePushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSavePushButton->sizePolicy().hasHeightForWidth());
        mSavePushButton->setSizePolicy(sizePolicy1);
        mSavePushButton->setMinimumSize(QSize(88, 29));
        mSavePushButton->setMaximumSize(QSize(88, 29));

        horizontalLayout->addWidget(mSavePushButton);

        mCacelPushButton = new QPushButton(ChangeLanguageDialog);
        mCacelPushButton->setObjectName(QStringLiteral("mCacelPushButton"));
        sizePolicy1.setHeightForWidth(mCacelPushButton->sizePolicy().hasHeightForWidth());
        mCacelPushButton->setSizePolicy(sizePolicy1);
        mCacelPushButton->setMinimumSize(QSize(88, 29));
        mCacelPushButton->setMaximumSize(QSize(88, 29));

        horizontalLayout->addWidget(mCacelPushButton);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(ChangeLanguageDialog);
        QObject::connect(mSavePushButton, SIGNAL(clicked()), ChangeLanguageDialog, SLOT(accept()));
        QObject::connect(mCacelPushButton, SIGNAL(clicked()), ChangeLanguageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ChangeLanguageDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangeLanguageDialog)
    {
        ChangeLanguageDialog->setWindowTitle(QApplication::translate("ChangeLanguageDialog", "FDL - PyQt5 Downloader", nullptr));
        mTipLabel->setText(QApplication::translate("ChangeLanguageDialog", "  The language changes on the main dialog will apply only after only after restart FDL.\n"
"  Do you wish to restart FDL now?", nullptr));
        mSavePushButton->setText(QApplication::translate("ChangeLanguageDialog", "\346\230\257", nullptr));
        mCacelPushButton->setText(QApplication::translate("ChangeLanguageDialog", "\345\220\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeLanguageDialog: public Ui_ChangeLanguageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGELANGUAGE_H
