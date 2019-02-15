/********************************************************************************
** Form generated from reading UI file 'UrlLinkDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_URLLINKDIALOG_H
#define UI_URLLINKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UrlLinkDialog
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *mAddressLabel;
    QComboBox *mLinkComboBox;
    QPushButton *mSavePushButton;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mCacelPushButton;

    void setupUi(QDialog *UrlLinkDialog)
    {
        if (UrlLinkDialog->objectName().isEmpty())
            UrlLinkDialog->setObjectName(QStringLiteral("UrlLinkDialog"));
        UrlLinkDialog->resize(546, 74);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UrlLinkDialog->sizePolicy().hasHeightForWidth());
        UrlLinkDialog->setSizePolicy(sizePolicy);
        widget = new QWidget(UrlLinkDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 523, 56));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mAddressLabel = new QLabel(widget);
        mAddressLabel->setObjectName(QStringLiteral("mAddressLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mAddressLabel->sizePolicy().hasHeightForWidth());
        mAddressLabel->setSizePolicy(sizePolicy1);
        mAddressLabel->setMinimumSize(QSize(0, 0));
        mAddressLabel->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(mAddressLabel, 0, 0, 1, 1);

        mLinkComboBox = new QComboBox(widget);
        mLinkComboBox->setObjectName(QStringLiteral("mLinkComboBox"));
        mLinkComboBox->setEditable(true);

        gridLayout->addWidget(mLinkComboBox, 0, 1, 1, 1);

        mSavePushButton = new QPushButton(widget);
        mSavePushButton->setObjectName(QStringLiteral("mSavePushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mSavePushButton->sizePolicy().hasHeightForWidth());
        mSavePushButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mSavePushButton, 0, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(438, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mCacelPushButton = new QPushButton(widget);
        mCacelPushButton->setObjectName(QStringLiteral("mCacelPushButton"));
        sizePolicy2.setHeightForWidth(mCacelPushButton->sizePolicy().hasHeightForWidth());
        mCacelPushButton->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(mCacelPushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 3);


        retranslateUi(UrlLinkDialog);
        QObject::connect(mCacelPushButton, SIGNAL(clicked()), UrlLinkDialog, SLOT(close()));
        QObject::connect(mSavePushButton, SIGNAL(clicked()), UrlLinkDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(UrlLinkDialog);
    } // setupUi

    void retranslateUi(QDialog *UrlLinkDialog)
    {
        UrlLinkDialog->setWindowTitle(QApplication::translate("UrlLinkDialog", "Input Task Download Url", nullptr));
        mAddressLabel->setText(QApplication::translate("UrlLinkDialog", "\345\234\260\345\235\200", nullptr));
        mSavePushButton->setText(QApplication::translate("UrlLinkDialog", "\347\241\256\345\256\232", nullptr));
        mCacelPushButton->setText(QApplication::translate("UrlLinkDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UrlLinkDialog: public Ui_UrlLinkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_URLLINKDIALOG_H
