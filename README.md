# WPClipView
# Any help, Pls contact scocsdn@gmail.com

# Preview
<img src="https://github.com/Jonhson123/WPClipView/blob/master/demo.gif" width = "297" height = "205" align=center />

# Usage
```objc
#import "ViewController.h"
#import <WPClipView/WPClipView.h>

@interface ViewController ()

@property (weak, nonatomic) IBOutlet WPClipView *clipView;

@end

@implementation ViewController

- (void)viewDidLoad {
[super viewDidLoad];

self.clipView.showMidLines = YES;
self.clipView.initMaskScale = .8f;
self.clipView.pointLineColor = [UIColor redColor];
self.clipView.pointSelectedColor = [UIColor yellowColor];
self.clipView.image = [UIImage imageNamed:@"test"];

//add area
NSMutableArray *areas = [[NSMutableArray alloc] init];
NSDictionary *area1 = [NSDictionary dictionaryWithObjectsAndKeys:@80, @"x",@80, @"y", @100, @"width", @100, @"height", nil];
[areas addObject:area1];
self.clipView.areas = areas;

//add point
NSMutableArray *points = [[NSMutableArray alloc] init];
NSDictionary *point1 = [NSDictionary dictionaryWithObjectsAndKeys:@250, @"x",@250, @"y", nil];
[points addObject:point1];
self.clipView.points = points;
}


@end
```
