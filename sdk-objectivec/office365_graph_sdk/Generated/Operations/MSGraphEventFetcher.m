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

#import "MSGraphODataEntities.h"

@implementation MSGraphEventFetcher

@synthesize operations = _operations;

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {

    if (self = [super initWithUrl:urlComponent parent:parent asClass:[MSGraphEvent class]]) {

		_operations = [[MSGraphEventOperations alloc] initOperationWithUrl:urlComponent parent:parent];
    }

    return self;
}

- (NSURLSessionTask *)updateEvent:(id)entity callback:(void (^)(MSGraphEvent *event, MSODataException *exception))callback {

	return [super updateEntity:entity callback:callback];
}

- (NSURLSessionTask *)deleteEvent:(void (^)(int status, MSODataException *exception))callback {

	return [super deleteWithCallback:callback];
}

- (MSGraphAttachmentCollectionFetcher *)getAttachments {

    return [[MSGraphAttachmentCollectionFetcher alloc] initWithUrl:@"Attachments" parent:self asClass:[MSGraphAttachment class]];
}

- (id<MSGraphAttachmentFetcher>)getAttachmentsById:(NSString *)_id {

    return [[[MSGraphAttachmentCollectionFetcher alloc] initWithUrl:@"Attachments" parent:self asClass:[MSGraphAttachment class]] getById:_id];
}

- (MSGraphCalendarFetcher *) getCalendar {

	 return [[MSGraphCalendarFetcher alloc] initWithUrl:@"Calendar" parent:self asClass:[MSGraphCalendar class]];
}

- (MSGraphEventCollectionFetcher *)getInstances {

    return [[MSGraphEventCollectionFetcher alloc] initWithUrl:@"Instances" parent:self asClass:[MSGraphEvent class]];
}

- (id<MSGraphEventFetcher>)getInstancesById:(NSString *)_id {

    return [[[MSGraphEventCollectionFetcher alloc] initWithUrl:@"Instances" parent:self asClass:[MSGraphEvent class]] getById:_id];
}

@end