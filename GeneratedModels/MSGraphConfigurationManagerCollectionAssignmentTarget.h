// Copyright (c) Microsoft Corporation.  All Rights Reserved.  Licensed under the MIT License.  See License in the project root for license information.





#import "MSGraphDeviceAndAppManagementAssignmentTarget.h"

@interface MSGraphConfigurationManagerCollectionAssignmentTarget : MSGraphDeviceAndAppManagementAssignmentTarget

@property (nullable, nonatomic, setter=setCollectionId:, getter=collectionId) NSString* collectionId;

@end