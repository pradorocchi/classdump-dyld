#ifdef __cplusplus
extern "C" {
#endif

BOOL isMachOExecutable(const char *image);
BOOL is64BitMachO(const char *image);
BOOL fileExistsOnDisk(const char *image);
BOOL arch64();
BOOL priorToiOS7();

void printHelp();
NSString * copyrightMessage(char *image);
NSString * print_free_memory();

void loadBar(int x, int n, int r, int w, const char *className);

NSMutableArray * generateForbiddenClassesArray(BOOL isRecursive);
NSMutableArray * generateForbiddenPathsArray(BOOL isRecursive);

int locationOfString(const char *haystack, const char *needle);

#ifdef __cplusplus
}
#endif
