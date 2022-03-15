// Copyright (c) Microsoft Corporation.  All Rights Reserved.  Licensed under the MIT License.  See License in the project root for license information.





#import "MSGraphIdentitySource.h"

@interface MSGraphDomainIdentitySource : MSGraphIdentitySource

@property (nullable, nonatomic, setter=setDisplayName:, getter=displayName) NSString* displayName;
@property (nullable, nonatomic, setter=setDomainName:, getter=domainName) NSString* domainName;

@end
