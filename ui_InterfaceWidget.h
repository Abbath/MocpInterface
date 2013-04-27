/********************************************************************************
** Form generated from reading UI file 'InterfaceWidget.ui'
**
** Created: Wed Mar 20 20:31:58 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACEWIDGET_H
#define UI_INTERFACEWIDGET_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QLabel>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_InterfaceWidget
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *serverStateLabel;
    QLabel *artistLabel;
    QLabel *timeLabel;

    void setupUi(QWidget *InterfaceWidget)
    {
        if (InterfaceWidget->objectName().isEmpty())
            InterfaceWidget->setObjectName(QString::fromUtf8("InterfaceWidget"));
        InterfaceWidget->resize(363, 18);
        InterfaceWidget->setMinimumSize(QSize(363, 18));
        InterfaceWidget->setMaximumSize(QSize(363, 18));
        QPalette palette;
        QBrush brush(QColor(0, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(32, 31, 31, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(48, 48, 48, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        QBrush brush3(QColor(96, 95, 94, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        InterfaceWidget->setPalette(palette);
        InterfaceWidget->setContextMenuPolicy(Qt::ActionsContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/mocp_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        InterfaceWidget->setWindowIcon(icon);
        InterfaceWidget->setWindowOpacity(0.85);
        InterfaceWidget->setAutoFillBackground(false);
        layoutWidget = new QWidget(InterfaceWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(1, 1, 363, 18));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        serverStateLabel = new QLabel(layoutWidget);
        serverStateLabel->setObjectName(QString::fromUtf8("serverStateLabel"));
        serverStateLabel->setMinimumSize(QSize(21, 16));
        serverStateLabel->setMaximumSize(QSize(21, 16));
        QFont font;
        font.setPointSize(8);
        serverStateLabel->setFont(font);
        serverStateLabel->setContextMenuPolicy(Qt::NoContextMenu);
        serverStateLabel->setFrameShape(QFrame::NoFrame);

        horizontalLayout->addWidget(serverStateLabel);

        artistLabel = new QLabel(layoutWidget);
        artistLabel->setObjectName(QString::fromUtf8("artistLabel"));
        artistLabel->setMinimumSize(QSize(261, 16));
        artistLabel->setMaximumSize(QSize(261, 16));
        artistLabel->setFont(font);
        artistLabel->setContextMenuPolicy(Qt::NoContextMenu);
        artistLabel->setFrameShape(QFrame::NoFrame);
        artistLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(artistLabel);

        timeLabel = new QLabel(layoutWidget);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setMinimumSize(QSize(71, 16));
        timeLabel->setMaximumSize(QSize(71, 16));
        timeLabel->setFont(font);
        timeLabel->setContextMenuPolicy(Qt::NoContextMenu);
        timeLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(timeLabel);


        retranslateUi(InterfaceWidget);

        QMetaObject::connectSlotsByName(InterfaceWidget);
    } // setupUi

    void retranslateUi(QWidget *InterfaceWidget)
    {
        InterfaceWidget->setWindowTitle(QApplication::translate("InterfaceWidget", "Mocp interface" ));
        serverStateLabel->setText(QApplication::translate("InterfaceWidget", "Off"));
        timeLabel->setText(QApplication::translate("InterfaceWidget", "00:00/00:00"));
    } // retranslateUi

};

namespace Ui {
    class InterfaceWidget: public Ui_InterfaceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACEWIDGET_H
