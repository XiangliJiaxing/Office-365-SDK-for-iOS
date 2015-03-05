/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * Licensed under the Apache License, Version 2.0.
 * See License.txt in the project root for license information.
 ******************************************************************************/

#import <Foundation/Foundation.h>

@protocol MSODataResponse

@required
-(id)initWithPayload : (NSData*)payload : (NSURLResponse*) response;
-(NSData *)getPayload;
-(int)getStatus;
-(NSURLResponse*)getResponse;
-(NSInputStream *)getStream;

@optional
-(void) close;

@end