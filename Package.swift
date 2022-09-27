// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "RealmUmbrella",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "RealmUmbrella",
            targets: [
                "Realm",
                "RealmSwift"
            ]),
    ],
    targets: [
        .binaryTarget(name: "Realm", path: "Frameworks/Realm.xcframework"),
        .binaryTarget(name: "RealmSwift", path: "Frameworks/RealmSwift.xcframework")
    ]
)
