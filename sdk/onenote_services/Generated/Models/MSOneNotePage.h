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

@class MSOneNotePageLinks;
@class NSStream;
@class MSOneNoteSection;
@class MSOneNoteNotebook;

#import <Foundation/Foundation.h>
#import "MSOneNoteProtocols.h"
#import "MSOrcBaseEntity.h"

/**
* The header for type Page.
*/

@interface MSOneNotePage : MSOrcBaseEntity
@property (retain, nonatomic, readwrite, getter=title, setter=setTitle:) NSString *title;
@property (retain, nonatomic, readwrite, getter=createdByAppId, setter=setCreatedByAppId:) NSString *createdByAppId;
@property (retain, nonatomic, readwrite, getter=links, setter=setLinks:) MSOneNotePageLinks *links;
@property (retain, nonatomic, readwrite, getter=contentUrl, setter=setContentUrl:) NSString *contentUrl;
@property (retain, nonatomic, readwrite, getter=content, setter=setContent:) NSStream *content;
@property (retain, nonatomic, readwrite, getter=lastModifiedTime, setter=setLastModifiedTime:) NSDate *lastModifiedTime;
@property (retain, nonatomic, readwrite, getter=id, setter=setId:) NSString *id;
@property (retain, nonatomic, readwrite, getter=self, setter=setSelf:) NSString *self;
@property (retain, nonatomic, readwrite, getter=createdTime, setter=setCreatedTime:) NSDate *createdTime;
@property (retain, nonatomic, readwrite, getter=parentSection, setter=setParentSection:) MSOneNoteSection *parentSection;
@property (retain, nonatomic, readwrite, getter=parentNotebook, setter=setParentNotebook:) MSOneNoteNotebook *parentNotebook;

@end