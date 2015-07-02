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

#import "MSOneNoteModels.h"

/**
* The implementation file for type SiteMetadata.
*/

@implementation MSOneNoteSiteMetadata	

@synthesize odataType = _odataType;
@synthesize siteCollectionId = _siteCollectionId;
@synthesize siteId = _siteId;

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.OneNote.Api.SiteMetadata";
	}

	return self;
}

 
- (void)setSiteCollectionId:(NSString *)  siteCollectionId;
{
    _siteCollectionId =  siteCollectionId;
    [self valueChanged:siteCollectionId forProperty:@"siteCollectionId"];
}

 
- (void)setSiteId:(NSString *)  siteId;
{
    _siteId =  siteId;
    [self valueChanged:siteId forProperty:@"siteId"];
}


@end