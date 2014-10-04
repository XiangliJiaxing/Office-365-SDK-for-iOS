//
//  Logger.h
//  office365-odata-interfaces
//
//  Created by Gustavo on 10/3/14.
//  Copyright (c) 2014 Microsoft. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "LogLevel.h"

@interface Logger : NSObject

-(void) log : (NSString*) content : (LogLevel*) logLevel;

@end