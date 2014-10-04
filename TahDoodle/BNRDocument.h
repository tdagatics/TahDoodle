//
//  BNRDocument.h
//  TahDoodle
//
//  Created by Anthony Dagati on 10/4/14.
//  Copyright (c) 2014 Black Rail Capital. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface BNRDocument : NSDocument <NSTableViewDataSource>

@property (nonatomic) NSMutableArray *tasks;
@property (nonatomic) IBOutlet NSTableView *taskTable;

-(IBAction)addTask:(id)sender;
-(IBAction)deleteTask:(id)sender row:(NSInteger)row;


@end
