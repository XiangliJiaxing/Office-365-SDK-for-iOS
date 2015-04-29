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

@class MSGraphDirectoryLinkChangeOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphDirectoryLinkChangeFetcher.
*/

@protocol MSGraphDirectoryLinkChangeFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSGraphDirectoryLinkChange *directoryLinkChange, MSODataException *exception))callback;
- (id<MSGraphDirectoryLinkChangeFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphDirectoryLinkChangeFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSGraphDirectoryLinkChangeFetcher>)select:(NSString *)params;
- (id<MSGraphDirectoryLinkChangeFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSGraphDirectoryLinkChangeOperations *operations;


@end

@interface MSGraphDirectoryLinkChangeFetcher : MSODataEntityFetcher<MSGraphDirectoryLinkChangeFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateDirectoryLinkChange:(MSGraphDirectoryLinkChange *)directoryLinkChange callback:(void (^)(MSGraphDirectoryLinkChange *directoryLinkChange, MSODataException *error))callback;
- (NSURLSessionTask *) deleteDirectoryLinkChange:(void (^)(int status, MSODataException *exception))callback;

@end