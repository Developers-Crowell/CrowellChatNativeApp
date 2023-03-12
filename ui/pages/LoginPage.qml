import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

import dev.crowell.crowellchatqtclient.CrowellChatQtClient_ui 0.1

Item {
    id: root
    property alias errorMessage: loginForm.errorMessage

    signal login(var username, var password)
    signal logout()

    function onLogout() {
        root.logout()
    }

    Connections {
        target: loginForm
        function onSubmit(username, password) {
            root.login(username, password)
        }
    }


    ColumnLayout {
        id: loginFormLayout
        anchors.fill: parent

        LoginForm {
               id: loginForm
               Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
               Layout.margins: 0

            Connections {
                target: root
                function onLogout() {
                    loginForm.logout()
                }
            }
        }
    }
}