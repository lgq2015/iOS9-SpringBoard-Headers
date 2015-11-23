/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMUIEvent.h>

@class NSString;

@interface DOMKeyboardEvent : DOMUIEvent

@property (copy,readonly) NSString * keyIdentifier; 
@property (readonly) unsigned location; 
@property (readonly) unsigned keyLocation; 
@property (readonly) BOOL ctrlKey; 
@property (readonly) BOOL shiftKey; 
@property (readonly) BOOL altKey; 
@property (readonly) BOOL metaKey; 
@property (readonly) BOOL altGraphKey; 
@property (readonly) int keyCode; 
@property (readonly) int charCode; 
-(unsigned)location;
-(int)keyCode;
-(BOOL)ctrlKey;
-(BOOL)shiftKey;
-(BOOL)altKey;
-(BOOL)metaKey;
-(NSString *)keyIdentifier;
-(unsigned)keyLocation;
-(BOOL)altGraphKey;
-(int)charCode;
-(BOOL)getModifierState:(id)arg1 ;
-(void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 location:(unsigned)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10 altGraphKey:(BOOL)arg11 ;
-(void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 location:(unsigned)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10 ;
-(void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10 altGraphKey:(BOOL)arg11 ;
-(void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10 ;
@end
