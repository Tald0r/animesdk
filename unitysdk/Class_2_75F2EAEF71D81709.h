#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Class_2_5E653D9F744DDC7F_Enum_3_8F7F347952F467D6.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_60DDD9C206686F44;
class Class_2_A8F5ABF31E066ED4;
class Class_2_E87F1D15F1D4AC72;
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_75F2EAEF71D81709_METHOD_2_669CABF5293E2465_OFFSET UNITYSDK_OFFSET(0x164EFE60)
#define CLASS_2_75F2EAEF71D81709_METHOD_2_A70A88EC3FDD6DEE_OFFSET UNITYSDK_OFFSET(0x164F0920)
#define CLASS_2_75F2EAEF71D81709_METHOD_2_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x164F0590)
#define CLASS_2_75F2EAEF71D81709_METHOD_2_D755E659050F5CB6_OFFSET UNITYSDK_OFFSET(0x164F0620)
#define CLASS_2_75F2EAEF71D81709_METHOD_2_D75E40B7659649F3_OFFSET UNITYSDK_OFFSET(0x164F0A90)
#define CLASS_2_75F2EAEF71D81709__CTOR_OFFSET UNITYSDK_OFFSET(0x164F0540)

inline static constexpr unsigned int Class_2_75F2EAEF71D81709_TypeDefinitionIndex = 59872;

class Class_2_75F2EAEF71D81709 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x50
	::UnityEngine::GameObject* Field_2_4; // 0x58
	::UnityEngine::GameObject* Field_2_5; // 0x60
	::UnityEngine::GameObject* Field_2_1; // 0x68
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x70
	::UnityEngine::GameObject* Field_2_0; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75F2EAEF71D81709__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_669CABF5293E2465(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_75F2EAEF71D81709_METHOD_2_669CABF5293E2465_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_75F2EAEF71D81709_METHOD_2_B3A88D7849969A71_OFFSET))(this, a1);
	}

	::System::Void Method_2_D755E659050F5CB6(::Class_2_5E653D9F744DDC7F_Enum_3_8F7F347952F467D6 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5E653D9F744DDC7F_Enum_3_8F7F347952F467D6))((::PBYTE)hIl2Cpp + CLASS_2_75F2EAEF71D81709_METHOD_2_D755E659050F5CB6_OFFSET))(this, a1);
	}

	::System::Void Method_2_A70A88EC3FDD6DEE(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_75F2EAEF71D81709_METHOD_2_A70A88EC3FDD6DEE_OFFSET))(this, a1);
	}

	::System::Void Method_2_D75E40B7659649F3(::Foundation::AssetPath a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_75F2EAEF71D81709_METHOD_2_D75E40B7659649F3_OFFSET))(this, a1);
	}
};
