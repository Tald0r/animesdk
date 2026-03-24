#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_D16CCEE747C194BE;
class Class_2_9E3E3CDA608A4F58;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_F29C68BEB3C6B152_CLASS_1_70864A1DD7E52BC8_METHOD_1_556B61E17E5B82F0_OFFSET UNITYSDK_OFFSET(0x9AE4D30)
#define CLASS_1_F29C68BEB3C6B152_CLASS_1_70864A1DD7E52BC8__CTOR_OFFSET UNITYSDK_OFFSET(0x9AE4D20)

inline static constexpr unsigned int Class_1_F29C68BEB3C6B152_Class_1_70864A1DD7E52BC8_TypeDefinitionIndex = 75432;

class Class_1_F29C68BEB3C6B152_Class_1_70864A1DD7E52BC8 : public ::System::Object
{
public:
	::System::Action* Field_1_4; // 0x10
	::System::String* Field_1_1; // 0x18
	::Class_1_D16CCEE747C194BE* Field_1_2; // 0x20
	::System::Action* Field_1_5; // 0x28
	::System::String* Field_1_0; // 0x30
	::Foundation::Coroutine::CoroutineHandle Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_70864A1DD7E52BC8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_556B61E17E5B82F0(::Class_2_9E3E3CDA608A4F58* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9E3E3CDA608A4F58*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_70864A1DD7E52BC8_METHOD_1_556B61E17E5B82F0_OFFSET))(this, a1, a2);
	}
};
