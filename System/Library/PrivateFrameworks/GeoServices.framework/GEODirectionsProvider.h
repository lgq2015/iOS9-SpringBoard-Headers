/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEODirectionsProvider : NSObject {

	BOOL _isLoading;
	int _requestType;
	/*^block*/id _finishedHandler;
	/*^block*/id _errorHandler;

}

@property (assign,nonatomic) BOOL isLoading;                //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,copy) id finishedHandler;              //@synthesize finishedHandler=_finishedHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                 //@synthesize errorHandler=_errorHandler - In the implementation block
-(void)dealloc;
-(BOOL)isLoading;
-(void)startRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)cancelRequest;
-(void)providerReceivedError:(id)arg1 problemDetails:(SCD_Struct_GE62*)arg2 ;
-(void)providerReceivedResponse:(id)arg1 ;
-(id)finishedHandler;
-(void)providerReceivedErrorCode:(long long)arg1 userInfo:(id)arg2 problemDetails:(SCD_Struct_GE62*)arg3 ;
-(void)requestCompleted;
-(void)cancelProviderRequest;
-(void)setIsLoading:(BOOL)arg1 ;
-(void)providerDidCancel;
-(void)setErrorHandler:(id)arg1 ;
-(void)startProviderWithRequest:(id)arg1 ;
-(void)setFinishedHandler:(id)arg1 ;
-(id)errorHandler;
@end

