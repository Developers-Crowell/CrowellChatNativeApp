import QtQuick
import QtQuick.Layouts
import QtQuick.Controls

Item {
    id: root
    implicitWidth: 300
    implicitHeight: 150

    property var theme: CrowellChatTheme {}
    property alias errorMessage: errorText.text
    signal submit(string username, string password)

    ColumnLayout {
        anchors.fill: parent
        spacing: 0

        TextField {
            id: usernameField
            leftPadding: 5
            placeholderText: "Username"
        }

        TextField {
            id: passwordField
            leftPadding: 5
            placeholderText: "Password"
            echoMode: TextInput.Password
        }

        Button {
            text: "Submit"
            onClicked: (usernameField.text !== "" && passwordField.text !== "") ? root.submit(usernameField.text, passwordField.text) : {}
        }

        Text {
            id: errorText
            Layout.fillWidth: true

            text: ''
            color: theme.error_color
        }
    }
}