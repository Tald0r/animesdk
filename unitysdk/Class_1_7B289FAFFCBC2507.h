#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_680AB6E273A984FB.h"
#include "unitysdk/System/Object.h"

class Class_2_A8F5ABF31E066ED4;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_7B289FAFFCBC2507_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xE132BD0)
#define CLASS_1_7B289FAFFCBC2507_METHOD_1_25B56728711195E5_OFFSET UNITYSDK_OFFSET(0xE132E70)
#define CLASS_1_7B289FAFFCBC2507_METHOD_1_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0xE132D00)
#define CLASS_1_7B289FAFFCBC2507__CTOR_OFFSET UNITYSDK_OFFSET(0xE132BC0)

inline static constexpr unsigned int Class_1_7B289FAFFCBC2507_TypeDefinitionIndex = 57553;

class Class_1_7B289FAFFCBC2507 : public ::System::Object
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_1_1; // 0x10
	::UnityEngine::GameObject* Field_1_3; // 0x18
	::UnityEngine::RectTransform* Field_1_2; // 0x20
	::System::Boolean Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B289FAFFCBC2507__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B289FAFFCBC2507_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B289FAFFCBC2507_METHOD_1_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::System::Void Method_1_25B56728711195E5(::System::UInt32 a1, ::Enum_3_680AB6E273A984FB a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_680AB6E273A984FB, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7B289FAFFCBC2507_METHOD_1_25B56728711195E5_OFFSET))(this, a1, a2, a3);
	}
};
