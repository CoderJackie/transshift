//
//  ChooseServerToAddTorrentController.h
//  TransmissionRPCClient
//
//  Created by Alexey Chechetkin on 29.06.15.
//  Copyright (c) 2015 Alexey Chechetkin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GlobalConsts.h"
#import "CommonTableController.h"

#define CONTROLLER_ID_CHOOSESERVER  @"chooseServerToAddController"

@class RPCServerConfig;

@interface ChooseServerToAddTorrentController : CommonTableController

@property(nonatomic,readonly) RPCServerConfig *rpcConfig;   // using only for returning config
@property(nonatomic) int bandwidthPriority;
@property(nonatomic) BOOL startImmidiately;

@end
