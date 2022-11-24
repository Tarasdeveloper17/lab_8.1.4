#include "header.h"
#import <XCTest/XCTest.h>

@interface test : XCTestCase

@end

@implementation test

- (void)test_lab {
   
    string s;
    cout << "Enter string:" << endl;
    getline(cin,s);
    string c = "n";
    string c1 = "o";
   cout<< Change(s);
    
    string result =  Change(s);
    
    XCTAssertNotEqual(result, " ");
    
}

@end
