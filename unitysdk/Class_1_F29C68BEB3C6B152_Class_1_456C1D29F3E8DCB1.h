#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_73B4B5B888D66DD6;
class Class_2_9E3E3CDA608A4F58;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_F29C68BEB3C6B152_CLASS_1_456C1D29F3E8DCB1_METHOD_1_734D3310D2263F81_OFFSET UNITYSDK_OFFSET(0xBA98C30)
#define CLASS_1_F29C68BEB3C6B152_CLASS_1_456C1D29F3E8DCB1__CTOR_OFFSET UNITYSDK_OFFSET(0xBA98C20)

inline static constexpr unsigned int Class_1_F29C68BEB3C6B152_Class_1_456C1D29F3E8DCB1_TypeDefinitionIndex = 74249;

class Class_1_F29C68BEB3C6B152_Class_1_456C1D29F3E8DCB1 : public ::System::Object
{
public:
	::System::Action* Field_1_5; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_0; // 0x20
	::Class_1_73B4B5B888D66DD6* Field_1_2; // 0x28
	::System::Action* Field_1_4; // 0x30
	::Foundation::Coroutine::CoroutineHandle Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_456C1D29F3E8DCB1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_734D3310D2263F81(::Class_2_9E3E3CDA608A4F58* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9E3E3CDA608A4F58*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_456C1D29F3E8DCB1_METHOD_1_734D3310D2263F81_OFFSET))(this, a1, a2);
	}
};
