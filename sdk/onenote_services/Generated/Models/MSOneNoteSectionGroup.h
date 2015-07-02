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

@class MSOneNoteNotebook;
@class MSOneNoteSectionGroup;
@class MSOneNoteSection;

#import <Foundation/Foundation.h>
#import "MSOneNoteProtocols.h"
#import "MSOrcBaseEntity.h"

/**
* The header for type SectionGroup.
*/

@interface MSOneNoteSectionGroup : MSOrcBaseEntity
@property (retain, nonatomic, readwrite, getter=sectionsUrl, setter=setSectionsUrl:) NSString *sectionsUrl;
@property (retain, nonatomic, readwrite, getter=sectionGroupsUrl, setter=setSectionGroupsUrl:) NSString *sectionGroupsUrl;
@property (retain, nonatomic, readwrite, getter=name, setter=setName:) NSString *name;
@property (retain, nonatomic, readwrite, getter=createdBy, setter=setCreatedBy:) NSString *createdBy;
@property (retain, nonatomic, readwrite, getter=lastModifiedBy, setter=setLastModifiedBy:) NSString *lastModifiedBy;
@property (retain, nonatomic, readwrite, getter=lastModifiedTime, setter=setLastModifiedTime:) NSDate *lastModifiedTime;
@property (retain, nonatomic, readwrite, getter=id, setter=setId:) NSString *id;
@property (retain, nonatomic, readwrite, getter=self, setter=setSelf:) NSString *self;
@property (retain, nonatomic, readwrite, getter=createdTime, setter=setCreatedTime:) NSDate *createdTime;
@property (retain, nonatomic, readwrite, getter=parentNotebook, setter=setParentNotebook:) MSOneNoteNotebook *parentNotebook;
@property (retain, nonatomic, readwrite, getter=parentSectionGroup, setter=setParentSectionGroup:) MSOneNoteSectionGroup *parentSectionGroup;
@property (retain, nonatomic, readwrite, getter=sections, setter=setSections:) NSMutableArray<MSOneNoteSection> *sections;
@property (retain, nonatomic, readwrite, getter=sectionGroups, setter=setSectionGroups:) NSMutableArray<MSOneNoteSectionGroup> *sectionGroups;

@end