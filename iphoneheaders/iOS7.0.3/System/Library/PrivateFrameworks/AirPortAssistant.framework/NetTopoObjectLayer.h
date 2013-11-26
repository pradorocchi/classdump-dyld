/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIImage, NSString, BubbleTextLayer, NSTimer, TopoNumberBadge, TopoProgressBar, NSMutableArray;

@interface NetTopoObjectLayer : CALayer {

	id _associatedNode;
	id _owningView;
	float _layoutScale;
	BOOL _smallSize;
	int _topoStyle;
	CGSize _boundsSizeConstraint;
	UIImage* _statusBadgeImage;
	BOOL _selectable;
	CGColorRef _selectionColor;
	CGColorRef _labelUnselectedFillColor;
	CGColorRef _labelSelectedFillColor;
	CGColorRef _labelSelectedFillColor2;
	CGColorRef _labelUnselectedTextColor;
	CGColorRef _labelSelectedTextColor;
	CGColorRef _secondaryLabelUnselectedTextColor;
	CGColorRef _secondaryLabelSelectedTextColor;
	CGRect _imageFrame;
	CGRect _imageCoreFrame;
	CGRect _imageSelectionFrame;
	float _selectionCornerRadius;
	float _selectionRectOutset;
	NSString* _labelString;
	BubbleTextLayer* _labelLayer;
	float _labelPinnedHeight;
	NSString* _secondaryLabelString;
	BubbleTextLayer* _secondaryLabelLayer;
	UIImage* _statusLights[4];
	NSTimer* _statusLightTimer;
	float _statusLightInterval;
	unsigned _statusLightState;
	unsigned _statusLightMode;
	TopoNumberBadge* _topoNumberBadge;
	unsigned _topoBadgeNumber;
	TopoProgressBar* _topoProgressBar;
	float _topoProgressValue;
	id _userObject;
	NSString* _saveLable;
	unsigned _row;
	unsigned _column;
	CGPoint _layoutOrigin;
	unsigned _number;
	float _prelim;
	float _mod;
	float _change;
	float _shift;
	BOOL _isExpanded;
	NetTopoObjectLayer* _contourThread;
	NetTopoObjectLayer* _ancestor;
	BOOL _selected;
	BOOL _ghosted;
	NetTopoObjectLayer* _parent;
	NSMutableArray* _children;
	NSString* _saveLabel;
	CGImageRef _objectImage;

}

@property (assign,nonatomic) float layoutScale;                                //@synthesize layoutScale=_layoutScale - In the implementation block
@property (assign,nonatomic) BOOL smallSize;                                   //@synthesize smallSize=_smallSize - In the implementation block
@property (assign,nonatomic) CGSize boundsSizeConstraint; 
@property (assign,nonatomic) unsigned row;                                     //@synthesize row=_row - In the implementation block
@property (assign,nonatomic) unsigned column;                                  //@synthesize column=_column - In the implementation block
@property (assign,nonatomic) CGPoint layoutOrigin;                             //@synthesize layoutOrigin=_layoutOrigin - In the implementation block
@property (assign,nonatomic) float prelim;                                     //@synthesize prelim=_prelim - In the implementation block
@property (assign,nonatomic) float mod;                                        //@synthesize mod=_mod - In the implementation block
@property (assign,nonatomic) float change;                                     //@synthesize change=_change - In the implementation block
@property (assign,nonatomic) float shift;                                      //@synthesize shift=_shift - In the implementation block
@property (assign,nonatomic) unsigned number;                                  //@synthesize number=_number - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                  //@synthesize isExpanded=_isExpanded - In the implementation block
@property (assign,nonatomic) NetTopoObjectLayer * contourThread;               //@synthesize contourThread=_contourThread - In the implementation block
@property (assign,nonatomic) NetTopoObjectLayer * ancestor;                    //@synthesize ancestor=_ancestor - In the implementation block
@property (nonatomic,retain) id associatedNode;                                //@synthesize associatedNode=_associatedNode - In the implementation block
@property (assign,nonatomic) id owningView;                                    //@synthesize owningView=_owningView - In the implementation block
@property (nonatomic,retain) NSString * label; 
@property (assign,nonatomic) float labelPinnedHeight; 
@property (nonatomic,retain) NSString * secondaryLabel; 
@property (nonatomic,retain) NetTopoObjectLayer * parent;                      //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) NetTopoObjectLayer * parentDevice; 
@property (nonatomic,retain) NSMutableArray * children;                        //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) unsigned numberOfChildren; 
@property (nonatomic,retain) CGImageRef objectImage;                           //@synthesize objectImage=_objectImage - In the implementation block
@property (nonatomic,retain) UIImage * statusBadgeImage; 
@property (assign,nonatomic) unsigned statusLightMode; 
@property (assign,nonatomic) unsigned topoBadgeNumber;                         //@synthesize topoBadgeNumber=_topoBadgeNumber - In the implementation block
@property (assign,nonatomic) float topoProgressValue;                          //@synthesize topoProgressValue=_topoProgressValue - In the implementation block
@property (nonatomic,retain) id userObject;                                    //@synthesize userObject=_userObject - In the implementation block
@property (nonatomic,retain) NSString * saveLabel;                             //@synthesize saveLabel=_saveLabel - In the implementation block
@property (assign,getter=isSelectable,nonatomic) BOOL selectable;              //@synthesize selectable=_selectable - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                  //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isGhosted,nonatomic) BOOL ghosted;                    //@synthesize ghosted=_ghosted - In the implementation block
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(void)dealloc;
-(void)setShift:(float)arg1 ;
-(id)init;
-(unsigned)row;
-(id)debugDescription;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isExpanded;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)lastChild;
-(id)firstChild;
-(void)setExpanded:(BOOL)arg1 ;
-(void)removeChild:(id)arg1 ;
-(float)shift;
-(id)secondaryLabel;
-(void)setSecondaryLabel:(id)arg1 ;
-(unsigned)number;
-(void)setSelectable:(BOOL)arg1 ;
-(BOOL)isSelectable;
-(void)setOwningView:(id)arg1 ;
-(CGSize)boundsSizeConstraint;
-(id)owningView;
-(void)setBoundsSizeConstraint:(CGSize)arg1 ;
-(void)loadStatusImagesForScale:(float)arg1 ;
-(void)initNetTopoObjectLayerCommonWithStyle:(int)arg1 andOwningView:(id)arg2 ;
-(void)setObjectImage:(CGImageRef)arg1 ;
-(void)deallocStatusImages;
-(unsigned)statusLightMode;
-(void)setStatusLightMode:(unsigned)arg1 ;
-(BOOL)smallSize;
-(void)setStatusBadgeImagePriv:(id)arg1 ;
-(void)setStatusLightStateFromMode;
-(void)statusLightUpdateTimer:(id)arg1 ;
-(float)labelPinnedHeight;
-(CGImageRef)objectImage;
-(BOOL)isGhosted;
-(unsigned)column;
-(id)describeOne:(id)arg1 uiLayer:(id)arg2 indent:(unsigned)arg3 ;
-(id)initWithUIStyle:(int)arg1 andOwningView:(id)arg2 ;
-(void)pickCorrectImagesForContentsScale:(float)arg1 ;
-(id)parentDevice;
-(void)setGhosted:(BOOL)arg1 ;
-(void)setLabelPinnedHeight:(float)arg1 ;
-(float)topoProgressValue;
-(void)setTopoProgressValue:(float)arg1 ;
-(void)setTopoBadgeNumber:(unsigned)arg1 ;
-(id)statusBadgeImage;
-(void)setStatusBadgeImage:(id)arg1 ;
-(void)setLayoutScale:(float)arg1 ;
-(float)layoutScale;
-(SCD_Struct_Ne15)getConnectionAttachmentLocations;
-(CGRect)getUserInteractionBounds;
-(CGRect)getFrameContainingAllSublayers;
-(void)setSmallSize:(BOOL)arg1 ;
-(CGPoint)layoutOrigin;
-(void)setLayoutOrigin:(CGPoint)arg1 ;
-(float)prelim;
-(void)setPrelim:(float)arg1 ;
-(float)mod;
-(void)setMod:(float)arg1 ;
-(float)change;
-(void)setChange:(float)arg1 ;
-(id)contourThread;
-(void)setContourThread:(id)arg1 ;
-(id)ancestor;
-(void)setAncestor:(id)arg1 ;
-(id)associatedNode;
-(void)setAssociatedNode:(id)arg1 ;
-(unsigned)topoBadgeNumber;
-(id)userObject;
-(void)setUserObject:(id)arg1 ;
-(id)saveLabel;
-(void)setSaveLabel:(id)arg1 ;
-(void)setChildren:(id)arg1 ;
-(unsigned)numberOfChildren;
-(void)addChild:(id)arg1 ;
-(id)childAtIndex:(unsigned)arg1 ;
-(void)setRow:(unsigned)arg1 ;
-(void)insertChild:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setColumn:(unsigned)arg1 ;
-(void)setNumber:(unsigned)arg1 ;
-(id)children;
-(void)setParent:(id)arg1 ;
-(id)parent;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)layoutSublayers;
@end

