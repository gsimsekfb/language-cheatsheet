
// Next:
	- Java	

// Next later:
	es2018: http://2ality.com/2017/02/ecmascript-2018.html
    https://babeljs.io/learn-es2015/    
    https://github.com/lukehoban/es6features
    
// Sources
    . C++ 11/14/17
        https://github.com/AnthonyCalandra/modern-cpp-features

    . ES2017    
        http://exploringjs.com/es2016-es2017/pt_es2017.html    
                
//// -------------------------------------- Javascript ---------------------------------------------
{
Lang:           JavaScript
First appeared: 1995
Designed by:    Brendan Eich
Paradigm:       High-level, dynamic, weakly typed, prototype-based, multi-paradigm, and 
                interpreted programming language.    

---
				
ES2018 (ES9)
    Asynchronous Iteration              ( for await (let e of elems) {...} )
    Promise.finally()					( .finally(() => {...} )
	Rest/Spread for objects				( function restParam({ a, ...x }) and const { a, ...x } = myObject )
	Regular Expression Improvements		()
	
    * Ref:
        https://www.sitepoint.com/es2018-whats-new/   
                	
ES2017 (ES8)
    // -- Major Features
    Async Functions                     ( async function asyncFunc() { const result = await otherAsyncFunc().. } )
      (aka async and await)                             
    Shared Memory & Atomics             ( SharedArrayBuffer, Atomics.store(), Atomics.load() ...) 
    
	// -- Other Features
    Object.entries() & Object.values()  ( for(const [key,val] of Object.entries(obj))..., for (const val of Object.values(obj)) )
    String - padStart() and padEnd()    ( 'x'.padStart(5, 'ab') /*'ababx' */ , 'x'.padEnd(5, 'ab') //'xabab')
    Object.getOwnPropertyDescriptors()  ( Object.getOwnPropertyDescriptors(obj) )     
    Trailing commas                     ( let arr = [12, 13, 14,] )
    
    * Ref:
        http://exploringjs.com/es2016-es2017/index.html                 	
		
ES2016 (ES7)
    Array method includes    	( ['a', 'b', 'c'].includes('a') // true )
    Exponentiation op. (**) 	( x ** y produces the same result as Math.pow(x, y) )

    *Ref:
        http://exploringjs.com/es2016-es2017/index.html
    
ES2015 (ES6)
    // -- Major Features
    Classes                 (classes instead of constructor functions, e.g. class Person {...}
      and Derived classes   (e.g. class Employee extends Person {...}
    Promises                (function f1() { return new Promise((resolve, reject) => {..}) } )
    Modules                 (ES2015 Modules instead of CommonJS modules, e.g. export const COUNT = 44, 
                             export function square(x) {...}, import { xx, yy } from 'lib';  )
    Error class             (subclassing Error class instead of custom error constructors)
    Map                     (Maps instead of objects, e.g. let myMap = new Map(), 
                             arbitrary values for keys & values, not just strings)
    // -- Features
    const/let               (const/let (block-scoped) instead of var (function-scoped) )	
    New Array methods       (e.g. arr.findIndex(x => Number.isNaN(x)), Array.from(),fill() etc.. ) 
    New string methods      (str.startsWith(), endsWith(), includes(), repeat() ...)
    String interpolation    (console.log(`(${x}, ${y})`) instead of console.log('('+x+', '+y+')') )
    Multi-line strings      (e.g. `1st_Line 2nd_Line etc..` ) 
    Arrow functions         (arrow functions don't shadow this, 
                             e.g. x => x * x instead of function (x) { return x * x } )
    Destructing arrays      (const [, year, month, day] = arr    // skip arr[0] )
    Destructing objects     (const {name, age} = person )                        
    Default parameters      (function foo(a, b = 1) )                            
    Rest parameters         (Use ...args instead of arguments (arguments) e.g. function aggr(initVal, ...restParams))
    Spread operator '...'   (spread operator '...' instead of apply() e.g. arr1.push(...arr2) )
    Method definitions      (const myFuncs = { f1() {...}, f2() {...} } )
        
    *Ref:
        http://exploringjs.com/es6/ch_core-features.html
        https://github.com/lukehoban/es6features
}

//// -------------------------------------- C++ ---------------------------------------------
{

Lang:            C++    
First appeared:  1985
Designed by:     Bjarne Stroustrup
Paradigm:        Multi-paradigm: procedural, functional, object-oriented, generic[1]

----

C++20 (major)
	// -- Major Features
	Concepts						()
	Modules							()
	Coroutines						()
	Ranges							()
	Contracts						()
	
	// -- Other Features
	operator<=>						( auto operator<=>(const Person &) = default; // request compiler generated compare 
																				  // funcs.  ( ==, !=, <, >, <=, >= ) )

	// .. todo

	*Ref:
		https://www.reddit.com/r/cpp/comments/au0c4x/201902_kona_iso_c_committee_trip_report_c20/
		https://en.wikipedia.org/wiki/C%2B%2B20

C++17 (medium)
    // -- Major Features
    Parallel STL algorithms           (permit parallel/unseq/vectorel execution: std::sort(std::par, vec.begin(), vec.end()))
    Filesystem library                (std::filesystem::path, directory iterators, files ops: copy/move, create, symlinks)
                                      
    // -- Other Features                    
    Structured Binding (decomposers)  (const auto [a, b, c] = array - or cooler - for (const auto& [key,val] : myMap)) {...} )    
    Nested namespaces                 (e.g., namespace X::Y { ... } instead of namespace X { namespace Y { ... }} )    
    string_view                       (non-owning view of original string; a pointer to the internal buffer and the length)
    std::optional                     (elegant way to return objects from functions that are allowed to be empty)
    std::variant                      (Type safe unions! std::variant<int, float, std::string> var)
    std::any                          (can create and assign to existing object any type. Replaces void*)
    Inline variables                  (class ... { inline static const int COUNT = 100; } )
    Init-statement for if/switch      (if (auto val = GetValue(); condition(val)) {...} )
    if constexpr                      (The static/compile time-if for C++!, if constexpr(cond) { ... })
    constexpr lambda                  (Compile-time lambdas, e.g. constexpr auto add = [] (int x, int y).. )
    Template argument deduction       (std::pair pp(10, 3.14) - instead of - std::pair<int,double> pp(10, 3.14) )
    UTF-8 Character Literals          (Euro sign: U+20AC - HEX, 4 bytes)
    std::byte                         (Neither an integer nor a character, just data)
    New algorithms                    (for_each_n, reduce, transform_reduce, exclusive_scan.. )
    Searchers                         (boyer_moore_searcher, boyer_moore_horspool_searcher w/ std::search)
                                      
    // -- Removed Features            
    'auto_ptr' removed                
    'register' keyword removed        
    throw() removed                   (void fooThrowsInt(int a) throw(int) {...} --> use noexcept instead) 
        
    *Ref: 
        http://www.bfilipek.com/2017/11/cpp17summary.html
        https://stackoverflow.com/questions/38060436/what-are-the-new-features-in-c17
        https://github.com/AnthonyCalandra/modern-cpp-features#c171411
        https://en.wikipedia.org/wiki/C%2B%2B17     

C++14 (minor)
    // -- Features
    Automatic return type deduction   (for functions and lambdas, e.g.: 
                                       auto f() { return 42; } // return type auto deduced as int )
    Generic lambdas                   (auto saveEvent = [](auto const& event) { ... } )
    Extended capturing in lambdas     (auto timer = [val = system_clock::now()] { ... } )
    decltype(auto)                    (auto for generic (template) code, to perfectly forward a return type )       
    Binary literals                   (auto a3 = 0b101010;  // ... binary )
    Time literals                     (auto msec = 42ms;   // millisecond )
    String literals                   (auto strA = "42"s;      // std::string )    
    The [[deprecated]] attribute      ( [[ deprecated ]] void f() { ... } )
    Digit separators                  (auto million = 1'000'000 )
    Shared timed mutex & shared lock  (std::shared_timed_mutex)
     
    *Ref: https://isocpp.org/wiki/faq/cpp14-language

C++11 (major)
    // -- Major Features
    Multithreading memory model (and official support for multithreaded programming)    
    Concurreny Support          (std::thread, std::async, std::future, std::mutex, std::condition_variable etc...)                                        
    Move semantics              (perf boost when used correctly instead of copy, e.g. newStr = std::move(str) )
    
    // -- Other Features
    Smart pointers              (unique_ptr, shared_ptr, weak_ptr)    
    auto                        (automatic type deduction: e.g. auto x = Foo(..) )
    nullptr                     (std::nullptr object instead of usage null or 0)
    Range for loop              (e.g. for(auto const& name : names) {...} )        
    Initializer lists           (std::vector<std::string> vec { "a", "b", "cd" } )
    constexpr                   (Do things at compile time, constexpr int get_five() {return 5;} )
    Uniform initialization      (Foo f{'a', 43}, uniform type initialization that works on any object)
    using                       (using FunctionType = void (*)(double) - instead of - typedef void (*FunctionType)(double))
    default'ed member functions (e.g. SomeType() = default; // Request compiler generated default constructor)
    delete'ed member functions  (e.g. NonCopyable(const NonCopyable&) = delete; // Forbid copy construction)
    override                    (class method identifier to make sure that base method is overridden)
    final                       (final classes not extendable and class methods not be overridden)
    Strongly-typed enums        (class enum instead of enum)
    Lambdas                     (Functions defined on the fly e.g. [&captured_var](int e){return e*e})
    non-member begin() & end()  (e.g. begin(myVector))
    static_assert               (assertion check at compile-time) 
                                (e.g. static_assert(Size < 3, "Size is too small") )
    Type traits                 (e.g. static_assert(std::is_integral<T1>::value, "Type T1 must be integral") )
    Variadic templates          (templates can take variable numbers of template parameters)
    New string literals         (supports three Unicode encodings: UTF-8, UTF-16, and UTF-32)
    long long int               (have no fewer than 64 bits. Solves 32-bit/64-bit problems of C++03 long int)
    Attributes                  ([[ noreturn ]] void f() { throw "error"; }, syntax for compiler/tool extensions)
    Hash tables                 (std::unordered_set, std::unordered_multiset, std::unordered_map, std::unordered_multimap)
    Regular expressions         (new library, defined in the new header <regex>: std::regex, std::regex_search etc...)
    Random number facilities    (Support for a number of standard distributions and three base generator engine algorithms)
    std::auto_ptr is deprecated (use std::unique_ptr instead)
        
    *Ref: https://en.wikipedia.org/wiki/C%2B%2B11
          https://www.codeproject.com/Articles/570638/Ten-Cplusplus-Features-Every-Cplusplus-Developer

C++03 (TC, bug fixes only)	
	
C++98 (Major)            

}








