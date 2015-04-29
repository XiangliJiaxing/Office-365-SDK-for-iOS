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

@class MSDirectoryDirectoryObjectFetcher;
@class MSDirectoryDirectoryObjectCollectionFetcher;
@class MSDirectoryDeviceOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSDirectoryModels.h"

/**
* The header for type MSDirectoryDeviceFetcher.
*/

@protocol MSDirectoryDeviceFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSDirectoryDevice *device, MSODataException *exception))callback;
- (id<MSDirectoryDeviceFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSDirectoryDeviceFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSDirectoryDeviceFetcher>)select:(NSString *)params;
- (id<MSDirectoryDeviceFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSDirectoryDeviceOperations *operations;

- (MSDirectoryDirectoryObjectCollectionFetcher *)getregisteredOwners;
- (MSDirectoryDirectoryObjectFetcher *) getregisteredOwnersById:(NSString*)_id;
- (MSDirectoryDirectoryObjectCollectionFetcher *)getregisteredUsers;
- (MSDirectoryDirectoryObjectFetcher *) getregisteredUsersById:(NSString*)_id;

@end

@interface MSDirectoryDeviceFetcher : MSODataEntityFetcher<MSDirectoryDeviceFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateDevice:(MSDirectoryDevice *)device callback:(void (^)(MSDirectoryDevice *device, MSODataException *error))callback;
- (NSURLSessionTask *) deleteDevice:(void (^)(int status, MSODataException *exception))callback;

@end