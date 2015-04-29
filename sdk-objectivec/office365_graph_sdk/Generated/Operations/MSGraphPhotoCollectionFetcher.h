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

@class MSGraphPhotoFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphPhotoCollectionFetcher.
*/

@protocol MSGraphPhotoCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSGraphPhoto> *photos, MSODataException *exception))callback;

- (id<MSGraphPhotoCollectionFetcher>)select:(NSString *)params;
- (id<MSGraphPhotoCollectionFetcher>)filter:(NSString *)params;
- (id<MSGraphPhotoCollectionFetcher>)top:(int)value;
- (id<MSGraphPhotoCollectionFetcher>)skip:(int)value;
- (id<MSGraphPhotoCollectionFetcher>)expand:(NSString *)value;
- (id<MSGraphPhotoCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSGraphPhotoCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphPhotoCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSGraphPhotoFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addPhoto:(MSGraphPhoto *)entity callback:(void (^)(MSGraphPhoto *photo, MSODataException *e))callback;

@end

@interface MSGraphPhotoCollectionFetcher : MSODataCollectionFetcher<MSGraphPhotoCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end