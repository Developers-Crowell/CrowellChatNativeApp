// a simple header for a mobile screen in QML

import QtQuick
import QtQuick.Layouts

Item {
    id: root

    property var background: Rectangle {
        id: headerBackground
        anchors.fill: parent
        color: "transparent"
    }

    signal logoutClicked()

    RowLayout {
        id: headerContent
        anchors {
            top: parent.top
            left: parent.left
            right: parent.right
            margins: 0
        }
        height: parent.height * 0.8
        spacing: 0

        Text {
            id: headerText
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
            Layout.topMargin: 20
            text: "CrowellChat"
            font.pixelSize: 30
            color: "white"
        }
    }

    RowLayout{
        id: buttonRow
        anchors {
            top: headerContent.bottom
            left: parent.left
            right: parent.right
        }
        height: parent.height * 0.2

        Text {
            id: logoutButton
            Layout.alignment: Qt.AlignRight | Qt.AlignBottom
            Layout.bottomMargin: 10
            Layout.rightMargin: 20
            text: "Logout"
            color: "white"

            MouseArea {
                anchors.fill: parent
                onClicked: root.logoutClicked()
            }
        }
    }

}