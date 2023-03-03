import QtQuick
import QtQuick.Controls

import dev.crowell.crowellchatqtclient.CrowellChatQtClient_ui 0.1


/*!
\qmltype HelloWorld
\inqmlmodule dev.crowell.crowellchatqtclient.CrowellChatQtClient_ui
\inherits Item
\brief Displays a simple rectangle containing the text "Hello World".

The HelloWorld type displays rectangle containing the text "Hello World" with a button to close.

The text can be changed.  For example:

\qml
    HelloWorld {
        mainText: "Hello Universe!"
    }
\endqml
*/
Item {
    id: root

    property alias mainText: mainWindowText.text
    property var greeter: null
    property var closer: null
    property alias mainButton: closeButton
    property var theme: null

    signal close()

    CrowellChatTheme {}


    onClose: {
        closer != null ? closer.close() : alert("No closer set")
    }

    Rectangle {
        id: mainWindowBackground
        color: theme.primary_color
        anchors.fill: parent
    }

    Text {
        id: mainWindowText
        color: theme.tertiary_color
        anchors.centerIn: parent
        text: qsTr(greeter ? greeter.greet() : "Hello World!")
        font.pointSize: 72
    }

    Button {
        id: closeButton
        height: 75
        width: 150
        background: Rectangle {
            color: theme.secondary_color

            anchors {
                fill: parent
            }
        }
        anchors {
            horizontalCenter: parent.horizontalCenter
            top: mainWindowText.bottom
            topMargin: 50
        }

        text: qsTr('Close')
        onClicked: root.close()
    }
}
