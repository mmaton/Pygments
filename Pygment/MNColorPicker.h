//
//  MNColorPicker.h
//  MNColorPicker
//

#import <UIKit/UIKit.h>
#import "MNColorWheelView.h"
#import "MNBrightnessView.h"
#import "MNColorView.h"

@protocol MNColorPickerDelegate;

@interface MNColorPicker : UIViewController <MNColorWheelViewDelegate> {
	id <MNColorPickerDelegate> __weak _delegate;
	MNColorView *_colorView;
	MNColorWheelView *_colorWheelView;
	MNBrightnessView *_brightnessView;
	UIColor *_color;
	BOOL _continuous;
}

@property (weak, nonatomic) id<MNColorPickerDelegate> delegate;
@property (strong) UIColor *color;
@property (getter=isContinuous) BOOL continuous;



@end


@protocol MNColorPickerDelegate <NSObject>

@required
- (void)colorPicker:(MNColorPicker *)picker didFinishWithColor:(UIColor *)color;

@optional
- (void)colorPicker:(MNColorPicker *)picker didChangeColor:(UIColor *)color;

@end
