/*
  Glaurung, a chess program for the Apple iPhone.
  Copyright (C) 2004-2010 Tord Romstad, Marco Costalba, Joona Kiiski.

  Glaurung is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Glaurung is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#import <UIKit/UIKit.h>

@class OptionsViewController;

@interface StrengthOptionController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource> {
  OptionsViewController *parentController;
}

- (id)initWithParentViewController:(OptionsViewController *)ovc;
- (NSInteger)numberOfComponentsInPickerView:(UIPickerView *)pickerView;
- (NSInteger)pickerView:(UIPickerView *)pickerView
numberOfRowsInComponent:(NSInteger)component;
- (NSString *)pickerView:(UIPickerView *)pickerView
             titleForRow:(NSInteger)row
            forComponent:(NSInteger)component;
- (void)pickerView:(UIPickerView *)pickerView
      didSelectRow:(NSInteger)row
       inComponent:(NSInteger)component;

@end
