//
//  SampleTableViewController.h
//  ECSlidingViewController
//
//  Created by Michael Enriquez on 2/13/12.
//  Copyright (c) 2012 EdgeCase. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

#import "ECSlidingViewController.h"
#import "BLE.h"
#import "BLEDevice.h"
#import "ScanHTTPAdapter.h"
#import "Peripheral.h"
#import "ALDefaults.h"


@protocol BluetoothActivationDelegate

-(void)startScanning;

@end



@interface ScanViewController : UITableViewController <CLLocationManagerDelegate>


@property (strong,nonatomic) UIAlertView *alertScanningDevices;
@property (strong,nonatomic) NSMutableData *responseData;
@property (strong, nonatomic) BLE *ble;
@property(strong,nonatomic) UIRefreshControl *refresh;
@property (strong, nonatomic) ScanHTTPAdapter *scanHttp;

-(void) removeViewController;

- (IBAction)revealMenu:(id)sender;

- (IBAction)revealUnderRight:(id)sender;



@end
