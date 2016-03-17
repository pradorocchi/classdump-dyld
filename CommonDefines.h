#define RESET       "\e[m"
#define BOLDWHITE   "\e[1m\e[37m"
#define CLEARSCREEN "\e[1;1H\e[2J"

#include <stdio.h>
#include <dlfcn.h>
#include <dirent.h>
#include <limits.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/sysctl.h>
#include <mach-o/dyld.h>
#include <mach-o/nlist.h>
#include <mach-o/dyld_images.h>
#include <objc/runtime.h>

@interface NSArray (extras)
- (id)reversedArray;
@end

#ifdef __cplusplus
extern "C" {
#endif

const struct dyld_all_image_infos *dyld_all_image_infos;
struct dyld_all_image_infos* _dyld_get_all_image_infos();
NSString * propertyLineGenerator(NSString *attributes, NSString *name);
NSString * commonTypes(NSString *atype, NSString **inName, BOOL inIvarList);

extern BOOL addHeadersFolder;
extern BOOL shouldImportStructs;
extern NSMutableArray *allStructsFound;
extern NSMutableArray *classesInStructs;
extern NSMutableArray *classesInClass;
extern NSMutableArray *processedImages;
extern NSString *classID;
extern NSString *onlyOneClass;

#ifdef __cplusplus
}
#endif
