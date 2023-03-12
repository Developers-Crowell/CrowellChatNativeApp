import QtQuick
import QtQuick.Layouts

import dev.crowell.crowellchatqtclient.CrowellChatQtClient_ui 0.1

Item {
    id: root

    property var theme: CrowellChatTheme {}
    property var color: theme.secondary_color

    signal logout()

    Connections {
        target: header
        function onLogoutClicked() {
            root.logout()
        }
    }

    Header {
        id: header
        anchors {
            top: parent.top
            left: parent.left
            right: parent.right
        }
        height: Screen.height * 0.1
    }

    Rectangle {
        id: headerSeparator
        width: parent.width
        anchors {
            top: header.bottom
            left: parent.left
            right: parent.right
        }
        height: 1
        color: theme.secondary_color
    }

    ColumnLayout {
        id: columnLayout
        anchors.fill: parent

        Text {
            id: motd

            text: "Welcome to CrowellChat!"
            font.pixelSize: 24
            color: "white"
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
        }
    }

    Rectangle {
        id: footerSeparator
        width: parent.width
        anchors {
            bottom: footer.top
            left: parent.left
            right: parent.right
        }
        height: 1
        color: theme.secondary_color
    }

    Footer {
        id: footer
        anchors {
            bottom: parent.bottom
            left: parent.left
            right: parent.right
        }
        height: Screen.height * 0.1
    }
}