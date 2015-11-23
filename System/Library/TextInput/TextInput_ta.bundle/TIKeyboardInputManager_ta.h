/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/TextInput_ta.bundle/TextInput_ta
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_ta/TextInput_ta-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_ta : TIKeyboardInputManagerZephyr {

	void* _internalToExternalTransliterator;
	void* _externalToInternalTransliterator;
	BOOL _isQWERTYLayout;

}
-(void)dealloc;
-(void)configureTransliterators;
-(void)closeTransliterators;
-(void)initTransliteratorsWithID:(id)arg1 ;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(BOOL)dictionaryUsesExternalEncoding;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned long long*)arg4 fromVariantKey:(BOOL)arg5 ;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(id)nonstopPunctuationCharacters;
-(BOOL)doesComposeText;
-(void)syncToLayoutState:(id)arg1 ;
@end
