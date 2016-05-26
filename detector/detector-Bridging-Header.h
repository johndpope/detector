//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface UIImage (ColorAtPixel)

- (UIColor *)colorAtPixel:(CGPoint)point;

@end

@interface Detector: NSObject

- (id)init;
- (NSMutableArray *)detectPoint:(UIImage *)image;
- (UIImage *)detectImage:(UIImage *)image;

@end