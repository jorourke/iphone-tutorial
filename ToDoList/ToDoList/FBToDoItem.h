//
//  FBToDoItem.h
//  ToDoList
//
//  Created by James ORourke on 14/08/2014.
//  Copyright (c) 2014 FitBugg Pty Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FBToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end