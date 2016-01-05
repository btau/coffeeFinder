//
//  DetailViewController.h
//  
//
//  Created by Brett Tau on 1/5/16.
//
//

#import <UIKit/UIKit.h>
#import "CoffeePlace.h"

@interface DetailViewController : UIViewController

@property CoffeePlace *coffeePlace;
@property CLLocation *currentLocation;

@end
