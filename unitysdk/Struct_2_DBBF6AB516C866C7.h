#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigNewbie_NewbieInputLogicType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_DBBF6AB516C866C7_METHOD_2_4F49AC32E99BB202_OFFSET UNITYSDK_OFFSET(0x32B260)
#define STRUCT_2_DBBF6AB516C866C7_METHOD_2_5E256ABCBB78EAD2_1_OFFSET UNITYSDK_OFFSET(0x32B390)
#define STRUCT_2_DBBF6AB516C866C7_METHOD_2_5E256ABCBB78EAD2_OFFSET UNITYSDK_OFFSET(0x32B1C0)
#define STRUCT_2_DBBF6AB516C866C7_METHOD_2_A538D7DBA7BF5017_OFFSET UNITYSDK_OFFSET(0x7789D20)
#define STRUCT_2_DBBF6AB516C866C7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x32B300)
#define STRUCT_2_DBBF6AB516C866C7__CCTOR_OFFSET UNITYSDK_OFFSET(0x7789CC0)

inline static constexpr unsigned int Struct_2_DBBF6AB516C866C7_TypeDefinitionIndex = 43606;

struct alignas(8) Struct_2_DBBF6AB516C866C7
{
	static ::Struct_2_DBBF6AB516C866C7* StaticGet_Field_2_11()
	{
		return (::Struct_2_DBBF6AB516C866C7*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_DBBF6AB516C866C7_TypeDefinitionIndex)->GetStaticField(0x33E50);
	}
	::System::Single Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x14
	::System::Boolean Field_2_2; // 0x15
	::System::UInt64 Field_2_3; // 0x18
	::System::Single Field_2_4; // 0x20
	::System::Boolean Field_2_5; // 0x24
	::MoleMole::ConfigNewbie_NewbieInputLogicType Field_2_6; // 0x28
	::System::Boolean Field_2_7; // 0x2C
	::System::Boolean Field_2_8; // 0x2D
	::System::String* Field_2_9; // 0x30
	::System::Boolean Field_2_10; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_DBBF6AB516C866C7__CCTOR_OFFSET))();
	}

	::Struct_2_DBBF6AB516C866C7 Method_2_5E256ABCBB78EAD2(::System::Single a1)
	{
		return ((::Struct_2_DBBF6AB516C866C7(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_DBBF6AB516C866C7_METHOD_2_5E256ABCBB78EAD2_OFFSET))(this, a1);
	}

	::Struct_2_DBBF6AB516C866C7 Method_2_4F49AC32E99BB202(::System::Boolean a1)
	{
		return ((::Struct_2_DBBF6AB516C866C7(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_DBBF6AB516C866C7_METHOD_2_4F49AC32E99BB202_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DBBF6AB516C866C7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Struct_2_DBBF6AB516C866C7 Method_2_5E256ABCBB78EAD2_1(::System::Single a1)
	{
		return ((::Struct_2_DBBF6AB516C866C7(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_DBBF6AB516C866C7_METHOD_2_5E256ABCBB78EAD2_1_OFFSET))(this, a1);
	}

	static ::Struct_2_DBBF6AB516C866C7 Method_2_A538D7DBA7BF5017()
	{
		return ((::Struct_2_DBBF6AB516C866C7(*)())((::PBYTE)hIl2Cpp + STRUCT_2_DBBF6AB516C866C7_METHOD_2_A538D7DBA7BF5017_OFFSET))();
	}
};
