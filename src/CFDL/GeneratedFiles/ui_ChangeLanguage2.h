/********************************************************************************
** Form generated from reading UI file 'ChangeLanguage2.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGELANGUAGE2_H
#define UI_CHANGELANGUAGE2_H

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

class Ui_ChangeLanguage2Dialog
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

    void setupUi(QDialog *ChangeLanguage2Dialog)
    {
        if (ChangeLanguage2Dialog->objectName().isEmpty())
            ChangeLanguage2Dialog->setObjectName(QStringLiteral("ChangeLanguage2Dialog"));
        ChangeLanguage2Dialog->resize(351, 142);
        ChangeLanguage2Dialog->setStyleSheet(QStringLiteral("Dialog {border-images: url( E:/Projects/FDL/favicon.png)}"));
        verticalLayout = new QVBoxLayout(ChangeLanguage2Dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, -1);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mTipLabel = new QLabel(ChangeLanguage2Dialog);
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
        horizontalSpacer = new QSpacerItem(160, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mSavePushButton = new QPushButton(ChangeLanguage2Dialog);
        mSavePushButton->setObjectName(QStringLiteral("mSavePushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSavePushButton->sizePolicy().hasHeightForWidth());
        mSavePushButton->setSizePolicy(sizePolicy1);
        mSavePushButton->setMinimumSize(QSize(88, 29));
        mSavePushButton->setMaximumSize(QSize(88, 29));

        horizontalLayout->addWidget(mSavePushButton);

        mCacelPushButton = new QPushButton(ChangeLanguage2Dialog);
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


        retranslateUi(ChangeLanguage2Dialog);
        QObject::connect(mSavePushButton, SIGNAL(clicked()), ChangeLanguage2Dialog, SLOT(accept()));
        QObject::connect(mCacelPushButton, SIGNAL(clicked()), ChangeLanguage2Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ChangeLanguage2Dialog);
    } // setupUi

    void retranslateUi(QDialog *ChangeLanguage2Dialog)
    {
        ChangeLanguage2Dialog->setWindowTitle(QApplication::translate("ChangeLanguage2Dialog", "FDL - PyQt5 Downloader", nullptr));
        mTipLabel->setText(QApplication::translate("ChangeLanguage2Dialog", "    \347\225\214\351\235\242\350\257\255\350\250\200\345\260\206\345\234\250 FDL \351\207\215\345\220\257\344\271\213\345\220\216\346\224\271\345\217\230\357\274\214 \346\202\250\345\270\214\346\234\233\347\216\260\345\234\250\351\207\215\345\220\257 FDL \345\220\227?", nullptr));
        mSavePushButton->setText(QApplication::translate("ChangeLanguage2Dialog", "\346\230\257", nullptr));
        mCacelPushButton->setText(QApplication::translate("ChangeLanguage2Dialog", "\345\220\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeLanguage2Dialog: public Ui_ChangeLanguage2Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGELANGUAGE2_H
