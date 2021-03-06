/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class EmbossedTextField, NSProgressIndicator, NSString, NSTextField;

@interface MetalTabLabelView : NSView
{
    EmbossedTextField *_labelField;
    NSTextField *_editField;
    NSProgressIndicator *_progressMeter;
    id _delegate;
    int _state;
    float _preciseWidth;
    NSString *_labelInfo;
}

+ (id)_frameColor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)drawRect:(struct _NSRect)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (void)setLabelInfo:(id)arg1;
- (void)setState:(int)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (float)preciseWidth;
- (void)beginEditing;
- (void)terminateEditing;
- (id)tabMaskImage;
- (void)controlTextDidEndEditing:(id)arg1;
- (id)_tabFramePathPart:(int)arg1;
- (void)tabLabelView:(id)arg1 didChangeLabel:(id)arg2;

@end

