#ifdef __cplusplus
extern "C" {
#endif

NSString * propertyLineGenerator(NSString *attributes, NSString *name);
NSMutableArray * propertiesArrayFromString(NSString *propertiesString);
NSString * buildProtocolFile(Protocol *currentProtocol);
BOOL hasMalformedID(NSString *parts);
NSString *representedStructFromStruct(NSString *inStruct, NSString *inName, BOOL inIvarList, BOOL isFinal);
NSString *representedUnionFromUnion(NSString *inUnion);
NSString *commonTypes(NSString *atype, NSString **inName, BOOL inIvarList);
NSString *generateMethodLines(Class someclass, BOOL isInstanceMethod, NSMutableArray *propertiesArray);

#ifdef __cplusplus
}
#endif
