//
//  ContentCellCollectionViewCell.h
//  DialogViewer
//
//  Created by Deokgon Kim on 2018. 6. 4..
//  Copyright © 2018년 Deokgon Kim. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ContentCell : UICollectionViewCell

@property (strong, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *text;

+ (CGSize)sizeForContentString:(NSString *)s;

@end
