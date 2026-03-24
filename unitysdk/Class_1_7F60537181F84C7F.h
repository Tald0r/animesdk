#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Object.h"

class Class_1_061801F5C4991F1A;
class Class_1_236FD73ABC492E3F;
class Class_2_4521B631ACA75155;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7F60537181F84C7F_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7256E80)
#define CLASS_1_7F60537181F84C7F_FROMFLX_OFFSET UNITYSDK_OFFSET(0x72575C0)
#define CLASS_1_7F60537181F84C7F_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x7257640)
#define CLASS_1_7F60537181F84C7F_METHOD_1_529A9CA1CFAF7016_OFFSET UNITYSDK_OFFSET(0x7256EE0)
#define CLASS_1_7F60537181F84C7F__CTOR_OFFSET UNITYSDK_OFFSET(0x72588F0)

inline static constexpr unsigned int Class_1_7F60537181F84C7F_TypeDefinitionIndex = 79890;

class Class_1_7F60537181F84C7F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_1_9; // 0x10
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_1_11; // 0x18
	::System::String* Field_1_8; // 0x20
	::System::String* Field_1_1; // 0x28
	::System::String* Field_1_7; // 0x30
	::System::String* Field_1_3; // 0x38
	::System::Collections::Generic::List_1<::Class_1_061801F5C4991F1A*>* Field_1_5; // 0x40
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_1_10; // 0x48
	::MoleMole::Config::BaseProperty Field_1_0; // 0x50
	::MoleMole::Config::BaseProperty Field_1_2; // 0x54
	::System::Boolean Field_1_6; // 0x58
	::System::Boolean Field_1_4; // 0x59

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F60537181F84C7F__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7F60537181F84C7F_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_7F60537181F84C7F_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_7F60537181F84C7F_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_529A9CA1CFAF7016(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7F60537181F84C7F_METHOD_1_529A9CA1CFAF7016_OFFSET))(this, a1, a2);
	}
};
