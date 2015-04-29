/*******************************************************************************
Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the MIT or Apache License; see LICENSE in the source repository
root for authoritative license information.﻿

**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).
******************************************************************************/

#import "MSGraphODataEntities.h"

@implementation MSGraphServicePrincipalFetcher

@synthesize operations = _operations;

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {

    if (self = [super initWithUrl:urlComponent parent:parent asClass:[MSGraphServicePrincipal class]]) {

		_operations = [[MSGraphServicePrincipalOperations alloc] initOperationWithUrl:urlComponent parent:parent];
    }

    return self;
}

- (NSURLSessionTask *)updateServicePrincipal:(id)entity callback:(void (^)(MSGraphServicePrincipal *servicePrincipal, MSODataException *exception))callback {

	return [super updateEntity:entity callback:callback];
}

- (NSURLSessionTask *)deleteServicePrincipal:(void (^)(int status, MSODataException *exception))callback {

	return [super deleteWithCallback:callback];
}

- (MSGraphAppRoleAssignmentFetcher *) getappRoleAssignedTo {

	 return [[MSGraphAppRoleAssignmentFetcher alloc] initWithUrl:@"appRoleAssignedTo" parent:self asClass:[MSGraphAppRoleAssignment class]];
}

- (MSGraphAppRoleAssignmentCollectionFetcher *)getappRoleAssignments {

    return [[MSGraphAppRoleAssignmentCollectionFetcher alloc] initWithUrl:@"appRoleAssignments" parent:self asClass:[MSGraphAppRoleAssignment class]];
}

- (id<MSGraphAppRoleAssignmentFetcher>)getappRoleAssignmentsById:(NSString *)_id {

    return [[[MSGraphAppRoleAssignmentCollectionFetcher alloc] initWithUrl:@"appRoleAssignments" parent:self asClass:[MSGraphAppRoleAssignment class]] getById:_id];
}

- (MSGraphOAuth2PermissionGrantCollectionFetcher *)getoauth2PermissionGrants {

    return [[MSGraphOAuth2PermissionGrantCollectionFetcher alloc] initWithUrl:@"oauth2PermissionGrants" parent:self asClass:[MSGraphOAuth2PermissionGrant class]];
}

- (id<MSGraphOAuth2PermissionGrantFetcher>)getoauth2PermissionGrantsById:(NSString *)_id {

    return [[[MSGraphOAuth2PermissionGrantCollectionFetcher alloc] initWithUrl:@"oauth2PermissionGrants" parent:self asClass:[MSGraphOAuth2PermissionGrant class]] getById:_id];
}

- (MSGraphDirectoryObjectCollectionFetcher *)getmemberOf {

    return [[MSGraphDirectoryObjectCollectionFetcher alloc] initWithUrl:@"memberOf" parent:self asClass:[MSGraphDirectoryObject class]];
}

- (id<MSGraphDirectoryObjectFetcher>)getmemberOfById:(NSString *)_id {

    return [[[MSGraphDirectoryObjectCollectionFetcher alloc] initWithUrl:@"memberOf" parent:self asClass:[MSGraphDirectoryObject class]] getById:_id];
}

- (MSGraphDirectoryObjectFetcher *) getcreatedOnBehalfOf {

	 return [[MSGraphDirectoryObjectFetcher alloc] initWithUrl:@"createdOnBehalfOf" parent:self asClass:[MSGraphDirectoryObject class]];
}

- (MSGraphDirectoryObjectCollectionFetcher *)getcreatedObjects {

    return [[MSGraphDirectoryObjectCollectionFetcher alloc] initWithUrl:@"createdObjects" parent:self asClass:[MSGraphDirectoryObject class]];
}

- (id<MSGraphDirectoryObjectFetcher>)getcreatedObjectsById:(NSString *)_id {

    return [[[MSGraphDirectoryObjectCollectionFetcher alloc] initWithUrl:@"createdObjects" parent:self asClass:[MSGraphDirectoryObject class]] getById:_id];
}

- (MSGraphDirectoryObjectCollectionFetcher *)getowners {

    return [[MSGraphDirectoryObjectCollectionFetcher alloc] initWithUrl:@"owners" parent:self asClass:[MSGraphDirectoryObject class]];
}

- (id<MSGraphDirectoryObjectFetcher>)getownersById:(NSString *)_id {

    return [[[MSGraphDirectoryObjectCollectionFetcher alloc] initWithUrl:@"owners" parent:self asClass:[MSGraphDirectoryObject class]] getById:_id];
}

- (MSGraphDirectoryObjectCollectionFetcher *)getownedObjects {

    return [[MSGraphDirectoryObjectCollectionFetcher alloc] initWithUrl:@"ownedObjects" parent:self asClass:[MSGraphDirectoryObject class]];
}

- (id<MSGraphDirectoryObjectFetcher>)getownedObjectsById:(NSString *)_id {

    return [[[MSGraphDirectoryObjectCollectionFetcher alloc] initWithUrl:@"ownedObjects" parent:self asClass:[MSGraphDirectoryObject class]] getById:_id];
}

@end