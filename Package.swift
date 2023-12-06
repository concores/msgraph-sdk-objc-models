// swift-tools-version: 5.9

import PackageDescription

let package = Package(
	name: "MSGraphClientModels",
	platforms: [
		.iOS(.v12),
	],
	products: [
		.library(
			name: "MSGraphClientModels",
			targets: ["MSGraphClientModels"]),
	],
	targets: [
		.target(
			name: "MSGraphClientModels",
			exclude: ["LICENSE", "Makefile", "SECURITY.md"],
			sources: ["BaseModels", "GeneratedModels"],
			publicHeadersPath: "./"),
		.testTarget(
			name: "MSGraphClientModelsTests",
			dependencies: ["MSGraphClientModels"],
			path: "MSGraphClientModelsTests")
	]
)
