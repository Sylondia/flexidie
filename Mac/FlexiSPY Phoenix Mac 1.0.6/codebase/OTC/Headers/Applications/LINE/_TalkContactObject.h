/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

//#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumber, NSString, NSDate;

__attribute__((visibility("hidden")))
@interface _TalkContactObject : NSObject {//XXUnknownSuperclass {
}
@property(assign) int typeValue;
@property(retain, nonatomic) NSNumber* type;
@property(retain, nonatomic) NSString* phoneticName;
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSString* mid;
@property(retain, nonatomic) NSString* luid;
@property(retain, nonatomic) NSString* key;
@property(assign) BOOL isRemovedValue;
@property(retain, nonatomic) NSNumber* isRemoved;
@property(assign) BOOL isInvitedValue;
@property(retain, nonatomic) NSNumber* isInvited;
@property(assign) BOOL isInviteableValue;
@property(retain, nonatomic) NSNumber* isInviteable;
@property(retain, nonatomic) NSDate* createdAt;
+(id)keyPathsForValuesAffectingValueForKey:(id)key;
+(id)entityInManagedObjectContext:(id)managedObjectContext;
+(id)entityName;
+(id)insertInManagedObjectContext:(id)managedObjectContext;
-(void)setPrimitiveTypeValue:(int)value;
-(int)primitiveTypeValue;
-(void)setPrimitiveIsRemovedValue:(BOOL)value;
-(BOOL)primitiveIsRemovedValue;
-(void)setPrimitiveIsInvitedValue:(BOOL)value;
-(BOOL)primitiveIsInvitedValue;
-(void)setPrimitiveIsInviteableValue:(BOOL)value;
-(BOOL)primitiveIsInviteableValue;
-(id)objectID;
@end
