//
//  SPColorWell.h
//  SPColorWell
//
//  Created by Philip Dow on 11/16/11.
//  Copyright 2011 Philip Dow / Sprouted. All rights reserved.
//

/*

	Redistribution and use in source and binary forms, with or without modification, 
	are permitted provided that the following conditions are met:

	* Redistributions of source code must retain the above copyright notice, this list 
	of conditions and the following disclaimer.

	* Redistributions in binary form must reproduce the above copyright notice, this 
	list of conditions and the following disclaimer in the documentation and/or other 
	materials provided with the distribution.

	* Neither the name of the author nor the names of its contributors may be used to 
	endorse or promote products derived from this software without specific prior 
	written permission.

	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS “AS IS” AND ANY 
	EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES 
	OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT 
	SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, 
	INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED 
	TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR 
	BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
	CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN 
	ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH 
	DAMAGE.

*/

/*
	For non-attribution licensing options refer to http://phildow.net/licensing/
*/


#import <Foundation/Foundation.h>

@class SPColorPicker;

@interface SPColorWell : NSColorWell <NSMenuDelegate> {
@private
    NSString *title;
    BOOL bordered;
    BOOL canRemoveColor;
    
    SEL removeColorAction;
    id removeColorTarget;
    
    NSMenu *_colorPickerMenu;
    SPColorPicker *_colorPicker;
}

@property(readwrite,copy) NSString *title;
@property(readwrite,getter=isBordered) BOOL bordered;
@property(readwrite) BOOL canRemoveColor;

@property(readwrite) SEL removeColorAction;
@property(readwrite,assign) id removeColorTarget;

- (void)drawTitleInside:(NSRect)insideRect;
- (void)drawWellInside:(NSRect)insideRect;

@end
