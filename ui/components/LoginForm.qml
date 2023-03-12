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

    function logout() {
        usernameField.text = "";
        passwordField.text = "";
        errorText.text = "";
        usernameField.forceActiveFocus();
    }

    function onSubmit(username, password) {
        errorText.text = "";
        root.submit(username, password);
        usernameField.text = "";
        passwordField.text = "";
    }

    Component.onCompleted: {
        usernameField.forceActiveFocus();
    }

    Connections {
        target: usernameField
        function onAccepted() {
               passwordField.forceActiveFocus();
        }
    }

    Connections {
        target: passwordField
        function onAccepted() {
               root.onSubmit(usernameField.text, passwordField.text)
        }
    }

    ColumnLayout {
        id: loginLayout
        anchors.fill: parent
        spacing: 0

        TextField {
            id: usernameField
            leftPadding: 5
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
            placeholderText: "Username"
        }

        TextField {
            id: passwordField
            leftPadding: 5
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
            placeholderText: "Password"
            echoMode: TextInput.Password
        }

        Button {
            implicitWidth: passwordField.width
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
            text: "Submit"

            background: Rectangle {
                anchors.fill: parent
                color: theme.secondary_color
                }

            onClicked: () => (usernameField.text !== "" && passwordField.text !== "") ? root.submit(usernameField.text, passwordField.text) : {};
        }

        Text {
            id: errorText
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
            Layout.fillWidth: true
            text: ''
            font.pixelSize: 24
            color: theme.error_color
        }
    }
}