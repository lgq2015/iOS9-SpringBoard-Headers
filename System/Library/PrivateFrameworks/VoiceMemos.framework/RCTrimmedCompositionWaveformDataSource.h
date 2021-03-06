/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:08 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/RCCompositionWaveformDataSource.h>

@class NSURL;

@interface RCTrimmedCompositionWaveformDataSource : RCCompositionWaveformDataSource {

	NSURL* _destinationWaveformURL;

}

@property (nonatomic,readonly) NSURL * destinationWaveformURL;              //@synthesize destinationWaveformURL=_destinationWaveformURL - In the implementation block
-(id)initWithSourceComposition:(id)arg1 destinationWaveformURL:(id)arg2 ;
-(BOOL)preferLoadingFragmentWaveforms;
-(id)generatedWaveformOutputURL;
-(NSURL *)destinationWaveformURL;
@end

