//
//  HeaderViewDURates.h
//  TransmissionRPCClient
//
//  Created by Alexey Chechetkin on 07.07.15.
//  Copyright (c) 2015 Alexey Chechetkin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HeaderViewDURates : UIView

+ (HeaderViewDURates*)view;

- (void)setBoundsFromTableView:(UITableView*)tableView;

@property(nonatomic) NSString*  uploadString;
@property(nonatomic) NSString*  downloadString;
@property(nonatomic) BOOL       limitsIsOn;

@end
