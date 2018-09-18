//
//  datoNiv2Portafolio_iphone.h
//  INSValores
//
//  Created by Novacomp on 3/9/17.
//  Copyright © 2017 Novacomp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIView+NibLoading.h"

@interface datoNiv2Portafolio_iphone : NibLoadedView

@property (weak, nonatomic) IBOutlet UIView *mainView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *leadingMainViewConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *trailingMainViewConstraint;
@property (weak, nonatomic) IBOutlet UIView *topLine;
@property (weak, nonatomic) IBOutlet UIView *bordeIz;
@property (weak, nonatomic) IBOutlet UIView *bordeDer;
@property (weak, nonatomic) IBOutlet UILabel *titulo;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *leadingTituloConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *trailingTituloConstraint;



@end