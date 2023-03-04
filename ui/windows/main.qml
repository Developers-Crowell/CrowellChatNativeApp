import QtQuick
import QtQuick.Controls
import QtQuick.Window
import QtQuick.Layouts

import dev.crowell.crowellchatqtclient.CrowellChatQtClient_ui 0.1

Window {
    id: root
    width: (Screen.width / 3) * 2
    height: (Screen.height / 3) * 2
    visible: true
    title: qsTr('CrowellChat')

    Connections {
        target: loginPage
        function onLogin(username, password) {
            if(username === "test" && password === "test") {
                stackView.push(page2)
                background.color = page2.color
            } else {
                loginPage.errorMessage = "Invalid username or password"
            }
        }
    }

    StackView {
        id: stackView
        initialItem: loginPage
        background: Rectangle {
            id: background
            color: style.primary_color
        }

        // Add more items to the stack view here

        anchors.fill: parent
    }

    // Define the LoginForm component as a separate QML file
    LoginPage {
        id: loginPage
        visible: false
    }

    HomePage {
        id: page2
        visible: false
    }

    CrowellChatTheme {
        id: style
    }
}
