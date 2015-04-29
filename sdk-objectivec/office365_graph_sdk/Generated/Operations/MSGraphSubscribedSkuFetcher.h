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

@class MSGraphSubscribedSkuOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphSubscribedSkuFetcher.
*/

@protocol MSGraphSubscribedSkuFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSGraphSubscribedSku *subscribedSku, MSODataException *exception))callback;
- (id<MSGraphSubscribedSkuFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphSubscribedSkuFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSGraphSubscribedSkuFetcher>)select:(NSString *)params;
- (id<MSGraphSubscribedSkuFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSGraphSubscribedSkuOperations *operations;


@end

@interface MSGraphSubscribedSkuFetcher : MSODataEntityFetcher<MSGraphSubscribedSkuFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateSubscribedSku:(MSGraphSubscribedSku *)subscribedSku callback:(void (^)(MSGraphSubscribedSku *subscribedSku, MSODataException *error))callback;
- (NSURLSessionTask *) deleteSubscribedSku:(void (^)(int status, MSODataException *exception))callback;

@end