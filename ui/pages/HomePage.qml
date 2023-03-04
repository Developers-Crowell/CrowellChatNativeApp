import QtQuick
import QtQuick.Layouts

import dev.crowell.crowellchatqtclient.CrowellChatQtClient_ui 0.1

Item {
    id: root

    property var theme: CrowellChatTheme {}
    property var color: theme.secondary_color

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
}