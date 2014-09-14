/*
 * Copyright (c) 2011-2014 BlackBerry Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import bb.cascades 1.2

Page {
    Container {
        layout: DockLayout {}
        horizontalAlignment: HorizontalAlignment.Fill
        verticalAlignment: VerticalAlignment.Fill
        Container {
            horizontalAlignment: HorizontalAlignment.Center
            verticalAlignment: VerticalAlignment.Center
            CustomButton {
                text: "Get position"
                onClicked: {
                    _app.getGps()
                }
            }
            Container {
                topPadding: 50
                horizontalAlignment: HorizontalAlignment.Center
                verticalAlignment: VerticalAlignment.Center
                Container {
                    layout: StackLayout {
                        orientation: LayoutOrientation.LeftToRight
                    }
                    Label {
                        text: "Latitude:"
                    }
                    Label {
                        text: _app.latitude
                    }
                }
                Container {
                    layout: StackLayout {
                        orientation: LayoutOrientation.LeftToRight
                    }
                    Label {
                        text: "Longitude:"
                    }
                    Label {
                        text: _app.longitude
                    }
                }
                Container {
                    layout: StackLayout {
                        orientation: LayoutOrientation.LeftToRight
                    }
                    Label {
                        text: "Altitude:"
                    }
                    Label {
                        text: _app.altitude
                    }
                }
                Container {
                    layout: StackLayout {
                        orientation: LayoutOrientation.LeftToRight
                    }
                    Label {
                        text: "Precision (in meter):"
                    }
                    Label {
                        text: _app.precision
                    }
                }
            }
        }
        Container {
            horizontalAlignment: HorizontalAlignment.Center
            verticalAlignment: VerticalAlignment.Center
            CircularProgress {
                running: _app.precision > 100
                visible: running
            }
        }

    }
}
