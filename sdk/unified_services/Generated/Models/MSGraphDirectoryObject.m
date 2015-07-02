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

#import "MSGraphModels.h"

/**
* The implementation file for type MSGraphDirectoryObject.
*/

@implementation MSGraphDirectoryObject	

@synthesize odataType = _odataType;
@synthesize objectType = _objectType;
@synthesize objectId = _objectId;
@synthesize deletionTimestamp = _deletionTimestamp;

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.Graph.DirectoryObject";
    }

	return self;
}

 
- (void)setObjectType:(NSString *)  objectType;
{
    _objectType =  objectType;
    [self valueChanged:objectType forProperty:@"objectType"];
}

 
- (void)setObjectId:(NSString *)  objectId;
{
    _objectId =  objectId;
    [self valueChanged:objectId forProperty:@"objectId"];
}

 
- (void)setDeletionTimestamp:(NSDate *)  deletionTimestamp;
{
    _deletionTimestamp =  deletionTimestamp;
    [self valueChanged:deletionTimestamp forProperty:@"deletionTimestamp"];
}

@end