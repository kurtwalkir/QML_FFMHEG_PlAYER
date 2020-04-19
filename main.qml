import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import ffmpeg_player 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("FFMPEG Media player")

    Button {
          id: open_file_button
          anchors.verticalCenter: parent.verticalCenter
          anchors.left: parent.horizontalCenter
          anchors.leftMargin: 15
          text: qsTr("Press me 2")

          contentItem: Text {
              text: open_file_button.text
              color: open_file_button.pressed ? "green" : "black"
          }

          background: Rectangle {
              color: open_file_button.pressed ? "black" : "green"
              border.color: open_file_button.pressed ? "green" : "black"
              border.width: 2
              radius: 5
          }
          MouseArea {
              anchors.fill: parent
              acceptedButtons: Qt.LeftButton
              onClicked: {
                  MP.openFile("/home/mordyk/qt_ffmpeg/qt_ffmpeg/RaspberryPi4.mp4");
              }
          }
      }


}
