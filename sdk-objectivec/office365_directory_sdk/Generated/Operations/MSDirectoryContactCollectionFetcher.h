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

@class MSDirectoryContactFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSDirectoryModels.h"

/**
* The header for type MSDirectoryContactCollectionFetcher.
*/

@protocol MSDirectoryContactCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSDirectoryContact> *contacts, MSODataException *exception))callback;

- (id<MSDirectoryContactCollectionFetcher>)select:(NSString *)params;
- (id<MSDirectoryContactCollectionFetcher>)filter:(NSString *)params;
- (id<MSDirectoryContactCollectionFetcher>)top:(int)value;
- (id<MSDirectoryContactCollectionFetcher>)skip:(int)value;
- (id<MSDirectoryContactCollectionFetcher>)expand:(NSString *)value;
- (id<MSDirectoryContactCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSDirectoryContactCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSDirectoryContactCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSDirectoryContactFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addContact:(MSDirectoryContact *)entity callback:(void (^)(MSDirectoryContact *contact, MSODataException *e))callback;

@end

@interface MSDirectoryContactCollectionFetcher : MSODataCollectionFetcher<MSDirectoryContactCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end