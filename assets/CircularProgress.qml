import bb.cascades 1.2

Container {
    property bool running 
    layout: DockLayout {}
    horizontalAlignment: HorizontalAlignment.Fill
    verticalAlignment: VerticalAlignment.Fill
    onRunningChanged: {
        if (running)
            rotationTransition.play()
        else 
            rotationTransition.stop()                        
    }
    Container {
        horizontalAlignment: HorizontalAlignment.Center
        verticalAlignment: VerticalAlignment.Center
        ImageView {
            id: imageView
            imageSource: "asset:///circularProgress.png"
            animations: [
                RotateTransition {
                    id: rotationTransition
                    fromAngleZ: 0
                    toAngleZ: 360
                    duration: 1000
                    easingCurve: StockCurve.Linear
                    repeatCount: AnimationRepeatCount.Forever
                }
            ]
        }        
    }
}
