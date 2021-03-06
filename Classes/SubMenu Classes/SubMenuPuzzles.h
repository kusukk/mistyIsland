//
//  SubMenuPuzzles.h
//  Misty-Island-Rescue-iPad
//
//  Created by Henrik Nord on 11/22/10.
//  Copyright 2010 Haunted House. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SubMenuViewController.h"

@class SubMenuViewController;

@interface SubMenuPuzzles : UIViewController {
	
	SubMenuViewController *myparent;
	
	IBOutlet UIImageView *selectframe;
	
	IBOutlet UIImageView *easybutton;
	IBOutlet UIImageView *hardbutton;
	
	UIImage *easyimage;
	UIImage *easyimageSelected;
	UIImage *hardimage;
	UIImage *hardimageSelected;
	
	BOOL isEasy;
	
	int levelOfDifficulty;
	int selectedPuzzle;
	
}

@property (nonatomic, retain) UIImage *easyimage;
@property (nonatomic, retain) UIImage *easyimageSelected;
@property (nonatomic, retain) UIImage *hardimage;
@property (nonatomic, retain) UIImage *hardimageSelected;

-(void)initWithParent:(id)parent;

-(void)menuTappedWithThumb:(int)thumb;

@end
