import QtQuick
import QtQuick.Controls
import QtQuick.Window
import QtQuick.Layouts

import dev.crowell.crowellchatqtclient.CrowellChatQtClient_ui 0.1

ApplicationWindow {
    id: root
    width: (Screen.width / 3) * 2
    minimumWidth: calculateMinimumWidth()
    minimumHeight: calculateMinimumHeight()
    height: (Screen.height / 3) * 2
    visible: true
    title: qsTr('CrowellChat')

    signal logout();

    function calculateMinimumHeight() {
        return (Screen.height / 3)
    }

    function calculateMinimumWidth() {
        return (Screen.width / 3)
    }

    Connections {
        target: loginPage
        function onLogin(username, password) {
            if(username === "test" && password === "test") {
                stackView.push(page2)
            } else {
                loginPage.errorMessage = "Invalid username or password"
            }
        }
    }

    Connections {
        target: page2
        function onLogout() {
            stackView.pop()
            root.logout()
        }
    }

    StackView {
        id: stackView
        initialItem: loginPage
        anchors {
            fill: parent
        }
        background: Rectangle {
            id: background
            color: style.primary_color
        }

    }

    LoginPage {
        id: loginPage
        visible: false

        Connections {
            target: root
            function onLogout() {
                loginPage.onLogout()
            }
        }
    }

    HomePage {
        id: page2
        visible: false
    }

    CrowellChatTheme {
        id: style
    }
}
