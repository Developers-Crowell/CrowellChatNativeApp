import QtQuick
import QtQuick.Layouts

Item {
    id: root

    property var theme: CrowellChatTheme {}

    RowLayout {
        id: conversationsColumn
        anchors.fill: parent
        spacing: 5

        ListView {
            id: conversationsList
            model: conversationsModel
            Layout.fillHeight: true

            delegate: Item {
                width: parent.width
                height: conversationRectangle.height

                Rectangle {
                    id: conversationRectangle
                    color: "transparent"
                    width: parent.width
                    anchors.margins: 15
                    height: conversationName.implicitHeight + conversationText.implicitHeight + 20
                    Layout.fillWidth: true

                    MouseArea {
                        width: root.width
                        height: parent.height
                        onClicked: {
                            console.log("Clicked on " + model.name)
                        }
                    }

                    RowLayout {
                        anchors.fill: parent
                        spacing: 10



                        Rectangle {
                            id: conversationImage
                            color: theme.secondary_color
                            width: 50
                            height: 50
                            Layout.alignment: Qt.AlignLeft
                            Layout.leftMargin: 10
                        }

                        ColumnLayout {
                            Layout.fillWidth: true
                            Layout.fillHeight: true
                            Layout.alignment: Qt.AlignLeft

                            Text {
                                id: conversationName
                                text: qsTr(model.name)
                                color: "white"
                                font.bold: true
                                font.pixelSize: 16
                            }

                            Text {
                                id: conversationText
                                text: qsTr(model.lastMessage)
                                color: "white"
                                font.pixelSize: 14
                            }
                        }
                    }
                }
            }
        }
    }

    ListModel {
        id: conversationsModel
        ListElement {
            name: "John"
            lastMessage: "Hello"
        }
        ListElement {
            name: "Jane"
            lastMessage: "Hi"
        }
    }
}
