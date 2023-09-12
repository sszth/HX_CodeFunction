import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    flags: Qt.Window | Qt.FramelessWindowHint | Qt.WindowMinMaxButtonsHint
    width: 640
    height: 480
    title: qsTr("Hello World")
	color:"transparent"

	Rectangle{
		id:bug
        anchors.fill:parent
		radius:10
		color:"transparent"
		border.width:1
		border.color:"#ff0000"
	}
}
