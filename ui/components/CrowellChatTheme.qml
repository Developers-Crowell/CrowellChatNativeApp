import QtQuick

Item {
    id: root
    // App Color Scheme
    readonly property color primary_color: Qt.rgba(0/255, 0/255, 0/255, 1)
    readonly property color secondary_color: Qt.rgba(255/255, 204/255, 5/255, 1)
    readonly property color tertiary_color: Qt.rgba(255/255, 255/255, 255/255, 1)

    // Selection Colors
    readonly property color primary_color_selected: Qt.lighter(primary_color, 0.8)
    readonly property color secondary_color_selected: Qt.lighter(secondary_color, 0.8)
    readonly property color tertiary_color_selected: Qt.lighter(tertiary_color, 0.8)

    // Fonts
    readonly property font default_font: Qt.font({family: "Roboto", pixelSize: 14, weight: Font.Normal, styleName: "Regular"})
    readonly property font title_font: Qt.font({family: "Roboto", pixelSize: 20, weight: Font.Bold, styleName: "Bold"})
    readonly property font subtitle_font: Qt.font({family: "Roboto", pixelSize: 16, weight: Font.Bold, styleName: "Bold"})
    readonly property font subtext_font: Qt.font({family: "Roboto", pixelSize: 12, weight: Font.Normal, styleName: "Regular"})
}