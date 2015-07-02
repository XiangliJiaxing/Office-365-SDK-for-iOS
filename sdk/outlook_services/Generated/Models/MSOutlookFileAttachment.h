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

@class NSData;

#import <Foundation/Foundation.h>
#import "MSOutlookProtocols.h"
#import "MSOutlookAttachment.h"

/**
* The header for type FileAttachment.
*/

@interface MSOutlookFileAttachment : MSOutlookAttachment
@property (retain, nonatomic, readwrite, getter=contentId, setter=setContentId:) NSString *ContentId;
@property (retain, nonatomic, readwrite, getter=contentLocation, setter=setContentLocation:) NSString *ContentLocation;
@property (nonatomic, getter=isContactPhoto, setter=setIsContactPhoto:) BOOL IsContactPhoto;
@property (retain, nonatomic, readwrite, getter=contentBytes, setter=setContentBytes:) NSData *ContentBytes;

@end