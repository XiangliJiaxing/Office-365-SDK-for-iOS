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

@class MSGraphOAuth2PermissionGrantOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphOAuth2PermissionGrantFetcher.
*/

@protocol MSGraphOAuth2PermissionGrantFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSGraphOAuth2PermissionGrant *oAuth2PermissionGrant, MSODataException *exception))callback;
- (id<MSGraphOAuth2PermissionGrantFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphOAuth2PermissionGrantFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSGraphOAuth2PermissionGrantFetcher>)select:(NSString *)params;
- (id<MSGraphOAuth2PermissionGrantFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSGraphOAuth2PermissionGrantOperations *operations;


@end

@interface MSGraphOAuth2PermissionGrantFetcher : MSODataEntityFetcher<MSGraphOAuth2PermissionGrantFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateOAuth2PermissionGrant:(MSGraphOAuth2PermissionGrant *)oAuth2PermissionGrant callback:(void (^)(MSGraphOAuth2PermissionGrant *oAuth2PermissionGrant, MSODataException *error))callback;
- (NSURLSessionTask *) deleteOAuth2PermissionGrant:(void (^)(int status, MSODataException *exception))callback;

@end