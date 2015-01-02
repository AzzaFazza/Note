//
//  ViewController.h
//  Note
//
//  Created by Adam Fallon on 02/01/2015.
//  Copyright (c) 2015 com.dotly.note. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TodayViewController : UIViewController<UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, retain) NSMutableArray *todaysTasks;
@property (nonatomic, retain) UITableView *todaysTasksTableView;

@end

