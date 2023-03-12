import QtQuick
import QtQuick.Layouts

Item {
    id: root
    property alias background: footerBackground

    Rectangle {
        id: footerBackground
        anchors.fill: parent
        color: "transparent"
    }

    RowLayout {
        id: footerLayout
        anchors.fill: parent

        Text {
            id: footerText
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
            text: "CrowellChat"

            font.pixelSize: 24
            color: "white"
        }
    }
}