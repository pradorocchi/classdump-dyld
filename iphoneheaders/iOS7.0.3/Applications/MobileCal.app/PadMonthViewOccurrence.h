/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <MobileCal/MobileCal-Structs.h>
@class UIColor, EKEvent, NSMutableArray, UIFont, UIImage, NSString;

@interface PadMonthViewOccurrence : NSObject {

	UIColor* _color;
	EKEvent* _occurrence;
	CGRect _frame;
	unsigned _isAllDay : 1;
	unsigned _isFacebook : 1;
	unsigned _isBirthday : 1;
	unsigned _tentative : 1;
	unsigned _needsReply : 1;
	unsigned _declined : 1;
	unsigned _canceled : 1;
	unsigned _cachedEndRange;
	unsigned _selected : 1;
	unsigned _drawsBackground : 1;
	NSMutableArray* _subOccurrences;
	PadMonthViewOccurrence* _parent;
	BOOL _drawsEmpty;
	BOOL _splitLeftEdge;
	BOOL _splitRightEdge;
	BOOL _isZoomedDay;
	float _firstWidth;
	UIFont* _font;
	UIImage* _dotImage;
	NSString* _occurrenceString;
	NSString* _timeString;
	NSString* _endTimeString;
	NSRange _dayRange;

}

@property (assign,nonatomic) BOOL drawsEmpty;                          //@synthesize drawsEmpty=_drawsEmpty - In the implementation block
@property (assign,nonatomic) BOOL splitLeftEdge;                       //@synthesize splitLeftEdge=_splitLeftEdge - In the implementation block
@property (assign,nonatomic) BOOL splitRightEdge;                      //@synthesize splitRightEdge=_splitRightEdge - In the implementation block
@property (assign,nonatomic) float firstWidth;                         //@synthesize firstWidth=_firstWidth - In the implementation block
@property (assign,nonatomic) NSRange dayRange;                         //@synthesize dayRange=_dayRange - In the implementation block
@property (assign,nonatomic) BOOL isZoomedDay;                         //@synthesize isZoomedDay=_isZoomedDay - In the implementation block
@property (nonatomic,retain) UIFont * font;                            //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIImage * dotImage;                       //@synthesize dotImage=_dotImage - In the implementation block
@property (nonatomic,retain) NSString * occurrenceString;              //@synthesize occurrenceString=_occurrenceString - In the implementation block
@property (nonatomic,retain) NSString * timeString;                    //@synthesize timeString=_timeString - In the implementation block
@property (nonatomic,retain) NSString * endTimeString;                 //@synthesize endTimeString=_endTimeString - In the implementation block
+(id)zoomedDayTextFont;
+(id)_blendColor:(id)arg1 withColor:(id)arg2 alpha:(float)arg3 ;
+(id)zoomedDayHourFont;
+(id)hourFont;
+(id)textFont;
-(unsigned)startRange;
-(unsigned)gapBetweenBlock:(id)arg1 ;
-(NSRange)dayRange;
-(id)initWithOccurrence:(id)arg1 forDayRange:(NSRange)arg2 ;
-(void)drawInFrame:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(unsigned)endRange;
-(void)resetSegments;
-(void)setSplitLeftEdge:(BOOL)arg1 splitRightEdge:(BOOL)arg2 ;
-(void)addSegmentWithFrame:(CGRect)arg1 splitLeftEdge:(BOOL)arg2 splitRightEdge:(BOOL)arg3 ;
-(id)initWithOccurrence:(id)arg1 forDayRange:(NSRange)arg2 isZoomedDay:(BOOL)arg3 ;
-(BOOL)isSingleDay;
-(BOOL)isZoomedDay;
-(void)setIsZoomedDay:(BOOL)arg1 ;
-(UIEdgeInsets)_backgroundInsets;
-(void)_drawBackgroundInFrame:(CGRect)arg1 ;
-(CGPoint)_pointForDotInFrame:(CGRect)arg1 ;
-(UIEdgeInsets)_textInsets;
-(id)_timeColor;
-(id)endTimeString;
-(float)_newXPositionAfterDrawingTime:(id)arg1 textRect:(CGRect)arg2 color:(id)arg3 ;
-(id)timeString;
-(id)occurrenceString;
-(void)setOccurrenceString:(id)arg1 ;
-(void)_updateDotImage;
-(void)_updateTimeStrings;
-(id)_timeString:(id)arg1 ;
-(void)_updateOccurrence;
-(CGRect)intersectingRect:(CGRect)arg1 ;
-(CGRect)isPointInView:(CGPoint)arg1 ;
-(id)lengthForSorting;
-(id)subOccurrences;
-(BOOL)drawsEmpty;
-(void)setDrawsEmpty:(BOOL)arg1 ;
-(BOOL)splitLeftEdge;
-(void)setSplitLeftEdge:(BOOL)arg1 ;
-(BOOL)splitRightEdge;
-(void)setSplitRightEdge:(BOOL)arg1 ;
-(float)firstWidth;
-(void)setFirstWidth:(float)arg1 ;
-(void)setDayRange:(NSRange)arg1 ;
-(id)dotImage;
-(void)setDotImage:(id)arg1 ;
-(void)setEndTimeString:(id)arg1 ;
-(BOOL)isAllDay;
-(BOOL)isTentative;
-(id)occurrence;
-(void)setOccurrence:(id)arg1 ;
-(void)setTimeString:(id)arg1 ;
-(BOOL)isDeclined;
-(BOOL)needsReply;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)_drawsBackground;
-(CGRect)frame;
-(id)description;
-(unsigned)length;
-(void)setFont:(id)arg1 ;
-(id)font;
-(void)setSelected:(BOOL)arg1 ;
-(id)_backgroundImage;
-(void)_setColor:(id)arg1 ;
-(BOOL)selected;
-(double)startTime;
-(id)_titleColor;
-(void).cxx_destruct;
-(void)setParent:(id)arg1 ;
-(id)parent;
@end

