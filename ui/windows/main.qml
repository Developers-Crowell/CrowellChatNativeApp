import QtQuick
import QtQuick.Controls
import QtQuick.Window

import dev.crowell.crowellchatqtclient.CrowellChatQtClient_ui 0.1

import dev.crowell.crowellchatqtclient.greeter 0.1
import dev.crowell.crowellchatqtclient.closer 0.1

Window {
    id: mainWindow
    width: (Screen.width / 3) * 2
    height: (Screen.height / 3) * 2
    visible: true
    title:qsTr('CrowellChatQtClient')

    HelloWorld {
        id: helloWorld
        anchors.fill: parent

        greeter: Greeter {
            id: greeter
        }

        closer: Closer {
            id: closer
        }
    }

    Component.onCompleted: {
        x = screen.virtualX + ((screen.width - width) / 2)
        y = screen.virtualY + ((screen.height - height) / 2)
    }
}
