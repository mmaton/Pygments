//
//  MNColorView.h
//  MNColorPicker
//

#import <UIKit/UIKit.h>

@protocol MNColorViewDelegate;


@interface MNColorView : UIView {
	id <MNColorViewDelegate> __weak _delegate;
	UIColor *_color;
}

@property (readwrite, weak) id <MNColorViewDelegate> delegate;
@property (readwrite, strong) UIColor *color;

@end


@protocol MNColorViewDelegate

- (void)didTouchColorView:(MNColorView *)colorView;

@end
