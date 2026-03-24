#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_2_4521B631ACA75155;
namespace MoleMole::Config { class DynamicFloat; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_061801F5C4991F1A_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x9DC0B90)
#define CLASS_1_061801F5C4991F1A_FROMFLX_OFFSET UNITYSDK_OFFSET(0x9DC1020)
#define CLASS_1_061801F5C4991F1A_METHOD_1_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x9DC10A0)
#define CLASS_1_061801F5C4991F1A_METHOD_1_41430AFD3BF44B19_OFFSET UNITYSDK_OFFSET(0x9DC0BF0)
#define CLASS_1_061801F5C4991F1A__CTOR_OFFSET UNITYSDK_OFFSET(0x9DC1960)

inline static constexpr unsigned int Class_1_061801F5C4991F1A_TypeDefinitionIndex = 51025;

class Class_1_061801F5C4991F1A : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_061801F5C4991F1A__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_061801F5C4991F1A_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_061801F5C4991F1A_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_41430AFD3BF44B19(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_061801F5C4991F1A_METHOD_1_41430AFD3BF44B19_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_061801F5C4991F1A_METHOD_1_00531776927FE5B6_OFFSET))(this, a1);
	}
};
