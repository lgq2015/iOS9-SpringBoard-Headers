/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:03 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNContact.h>

@class NSArray, NSString, NSData, NSDateComponents, CNActivityAlert, NSDate, CNContact, NSSet, NSDictionary;

@interface CNMutableContact : CNContact {

	BOOL _hasChanges;

}

@property (nonatomic,copy) NSArray * birthdays; 
@property (copy) NSString * nameTitle; 
@property (copy) NSString * firstName; 
@property (copy) NSString * lastName; 
@property (copy) NSString * maidenName; 
@property (copy) NSString * phoneticFirstName; 
@property (copy) NSString * phoneticLastName; 
@property (copy) NSString * companyName; 
@property (copy) NSArray * relatedNames; 
@property (assign,nonatomic) long long contactType; 
@property (nonatomic,copy) NSString * namePrefix; 
@property (nonatomic,copy) NSString * givenName; 
@property (nonatomic,copy) NSString * middleName; 
@property (nonatomic,copy) NSString * familyName; 
@property (nonatomic,copy) NSString * previousFamilyName; 
@property (nonatomic,copy) NSString * nameSuffix; 
@property (nonatomic,copy) NSString * nickname; 
@property (nonatomic,copy) NSString * phoneticGivenName; 
@property (nonatomic,copy) NSString * phoneticMiddleName; 
@property (nonatomic,copy) NSString * phoneticFamilyName; 
@property (nonatomic,copy) NSString * organizationName; 
@property (nonatomic,copy) NSString * departmentName; 
@property (nonatomic,copy) NSString * jobTitle; 
@property (nonatomic,copy) NSString * note; 
@property (nonatomic,copy) NSData * imageData; 
@property (nonatomic,copy) NSArray * phoneNumbers; 
@property (nonatomic,copy) NSArray * emailAddresses; 
@property (nonatomic,copy) NSArray * postalAddresses; 
@property (nonatomic,copy) NSArray * urlAddresses; 
@property (nonatomic,copy) NSArray * contactRelations; 
@property (nonatomic,copy) NSArray * socialProfiles; 
@property (nonatomic,copy) NSArray * instantMessageAddresses; 
@property (nonatomic,copy) NSDateComponents * birthday; 
@property (nonatomic,copy) NSDateComponents * nonGregorianBirthday; 
@property (nonatomic,copy) NSArray * dates; 
@property (assign,nonatomic) CGRect cropRect; 
@property (nonatomic,copy) NSData * thumbnailImageData; 
@property (nonatomic,copy) NSData * fullscreenImageData; 
@property (nonatomic,copy) CNActivityAlert * callAlert; 
@property (nonatomic,copy) CNActivityAlert * textAlert; 
@property (nonatomic,copy) NSString * phonemeData; 
@property (nonatomic,copy) NSString * sortingGivenName; 
@property (nonatomic,copy) NSString * sortingFamilyName; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (assign,nonatomic) long long displayNameOrder; 
@property (nonatomic,copy) NSString * mapsData; 
@property (nonatomic,readonly) BOOL hasChanges;                                              //@synthesize hasChanges=_hasChanges - In the implementation block
@property (nonatomic,copy) NSString * pronunciationGivenName; 
@property (nonatomic,copy) NSString * pronunciationFamilyName; 
@property (assign,getter=isPreferredForName,nonatomic) BOOL preferredForName; 
@property (assign,getter=isPreferredForImage,nonatomic) BOOL preferredForImage; 
@property (nonatomic,copy) NSArray * linkedContacts; 
@property (nonatomic,copy) NSString * linkIdentifier; 
@property (assign,nonatomic) int iOSLegacyIdentifier; 
@property (assign,nonatomic) BOOL imageDataAvailable; 
@property (nonatomic,copy) NSArray * calendarURIs; 
@property (nonatomic,copy) NSString * cardDAVUID; 
@property (nonatomic,copy) NSString * accountIdentifier; 
@property (nonatomic,copy) CNContact * snapshot; 
@property (nonatomic,copy) NSSet * availableKeys; 
@property (nonatomic,copy) NSString * storeIdentifier; 
@property (nonatomic,copy) NSDictionary * storeInfo; 
@property (nonatomic,copy) NSDictionary * activityAlerts; 
@property (nonatomic,copy) NSString * sectionForSortingByGivenName; 
@property (nonatomic,copy) NSString * sectionForSortingByFamilyName; 
+(id)contactWithRecord:(void*)arg1 ;
+(id)contactWithRecord:(void*)arg1 unify:(BOOL)arg2 ;
+(id)contactWithRecordID:(int)arg1 addressBook:(void*)arg2 ;
+(id)unifyContacts:(id)arg1 ;
-(id)initWithRecord:(void*)arg1 ;
-(void)addToGroup:(void*)arg1 ;
-(id)addProperties:(id)arg1 excludingProperties:(id)arg2 fromContact:(id)arg3 ;
-(BOOL)saveContactInStore:(id)arg1 group:(id)arg2 container:(id)arg3 ;
-(void)removePhoto;
-(void)updateContactType:(BOOL)arg1 ;
-(BOOL)hasNonPersistedData;
-(void)setBirthdays:(NSArray *)arg1 ;
-(void)setNameTitle:(NSString *)arg1 ;
-(void)setMaidenName:(NSString *)arg1 ;
-(void)setPhoneticFirstName:(NSString *)arg1 ;
-(void)setPhoneticLastName:(NSString *)arg1 ;
-(void)setCompanyName:(NSString *)arg1 ;
-(void)setRelatedNames:(NSArray *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)phoneticFamilyName;
-(NSString *)phoneticGivenName;
-(NSString *)phoneticMiddleName;
-(NSArray *)instantMessageAddresses;
-(void)setInstantMessageAddresses:(NSArray *)arg1 ;
-(NSString *)pronunciationGivenName;
-(NSString *)pronunciationFamilyName;
-(NSString *)cardDAVUID;
-(NSArray *)calendarURIs;
-(void)setIOSLegacyIdentifier:(int)arg1 ;
-(void)setStoreInfo:(NSDictionary *)arg1 ;
-(void)setPreviousFamilyName:(NSString *)arg1 ;
-(void)setPhoneticGivenName:(NSString *)arg1 ;
-(void)setPhoneticMiddleName:(NSString *)arg1 ;
-(void)setPhoneticFamilyName:(NSString *)arg1 ;
-(void)setPronunciationGivenName:(NSString *)arg1 ;
-(void)setPronunciationFamilyName:(NSString *)arg1 ;
-(NSString *)sortingGivenName;
-(void)setSortingGivenName:(NSString *)arg1 ;
-(NSString *)sortingFamilyName;
-(void)setSortingFamilyName:(NSString *)arg1 ;
-(void)setSectionForSortingByGivenName:(NSString *)arg1 ;
-(void)setSectionForSortingByFamilyName:(NSString *)arg1 ;
-(void)setDepartmentName:(NSString *)arg1 ;
-(void)setImageDataAvailable:(BOOL)arg1 ;
-(NSString *)linkIdentifier;
-(void)setLinkIdentifier:(NSString *)arg1 ;
-(void)setPreferredForName:(BOOL)arg1 ;
-(void)setPreferredForImage:(BOOL)arg1 ;
-(void)setCalendarURIs:(NSArray *)arg1 ;
-(void)setDates:(NSArray *)arg1 ;
-(NSArray *)contactRelations;
-(void)setContactRelations:(NSArray *)arg1 ;
-(CNActivityAlert *)callAlert;
-(void)setCallAlert:(CNActivityAlert *)arg1 ;
-(CNActivityAlert *)textAlert;
-(void)setTextAlert:(CNActivityAlert *)arg1 ;
-(void)setDisplayNameOrder:(long long)arg1 ;
-(id)freezeWithSelfAsSnapshot;
-(id)copyWithSelfAsSnapshot;
-(BOOL)preferredForName;
-(BOOL)preferredForImage;
-(void)setCardDAVUID:(NSString *)arg1 ;
-(void)setActivityAlerts:(NSDictionary *)arg1 ;
-(void)setAvailableKeys:(NSSet *)arg1 ;
-(void)setLinkedContacts:(NSArray *)arg1 ;
-(BOOL)imageDataAvailable;
-(long long)contactType;
-(NSString *)previousFamilyName;
-(NSString *)jobTitle;
-(NSString *)departmentName;
-(void)setThumbnailImageData:(NSData *)arg1 ;
-(void)setFullscreenImageData:(NSData *)arg1 ;
-(NSData *)thumbnailImageData;
-(NSData *)fullscreenImageData;
-(NSSet *)availableKeys;
-(NSString *)mapsData;
-(long long)displayNameOrder;
-(NSDateComponents *)birthday;
-(NSDateComponents *)nonGregorianBirthday;
-(void)setNonGregorianBirthday:(NSDateComponents *)arg1 ;
-(NSString *)sectionForSortingByFamilyName;
-(NSString *)sectionForSortingByGivenName;
-(void)setBirthday:(NSDateComponents *)arg1 ;
-(NSString *)givenName;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)middleName;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSArray *)postalAddresses;
-(void)setUrlAddresses:(NSArray *)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(NSArray *)urlAddresses;
-(void)setPostalAddresses:(NSArray *)arg1 ;
-(void)setPhoneNumbers:(NSArray *)arg1 ;
-(void)setContactType:(long long)arg1 ;
-(void)setGivenName:(NSString *)arg1 ;
-(void)setOrganizationName:(NSString *)arg1 ;
-(void)setMapsData:(NSString *)arg1 ;
-(NSArray *)emailAddresses;
-(BOOL)hasChanges;
-(id)freeze;
-(NSData *)imageData;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)familyName;
-(void)setSnapshot:(CNContact *)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(NSString *)organizationName;
-(void)setJobTitle:(NSString *)arg1 ;
-(NSArray *)phoneNumbers;
-(NSArray *)dates;
-(void)setNote:(NSString *)arg1 ;
-(NSString *)note;
-(void)setNilValueForKey:(id)arg1 ;
-(void)setNamePrefix:(NSString *)arg1 ;
-(void)setNameSuffix:(NSString *)arg1 ;
-(NSString *)namePrefix;
-(NSString *)nameSuffix;
-(NSString *)phonemeData;
-(void)setPhonemeData:(NSString *)arg1 ;
-(NSArray *)socialProfiles;
-(void)setSocialProfiles:(NSArray *)arg1 ;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
@end
