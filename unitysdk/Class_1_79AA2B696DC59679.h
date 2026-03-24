#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0C791B68CB2A5BF5;
class Class_1_E13183B148E560DC;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class TextureSheetData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SpriteRenderer; }
namespace UnityEngine { class Transform; }

#define CLASS_1_79AA2B696DC59679_METHOD_1_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x9F6B3E0)
#define CLASS_1_79AA2B696DC59679_METHOD_1_0BA114B592B3A582_OFFSET UNITYSDK_OFFSET(0x9F6B5F0)
#define CLASS_1_79AA2B696DC59679_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x9F6B7C0)
#define CLASS_1_79AA2B696DC59679_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x9F6B8D0)
#define CLASS_1_79AA2B696DC59679_METHOD_1_9A4B8D8B70CE3845_OFFSET UNITYSDK_OFFSET(0x9F6B570)
#define CLASS_1_79AA2B696DC59679_METHOD_1_A15BA9596DA44418_OFFSET UNITYSDK_OFFSET(0x9F6B8F0)
#define CLASS_1_79AA2B696DC59679__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F6B3A0)
#define CLASS_1_79AA2B696DC59679__CTOR_OFFSET UNITYSDK_OFFSET(0x9F6B2B0)

inline static constexpr unsigned int Class_1_79AA2B696DC59679_TypeDefinitionIndex = 54202;

class Class_1_79AA2B696DC59679 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_79AA2B696DC59679_TypeDefinitionIndex)->GetStaticField(0xEC60);
	}
	static ::System::Single* StaticGet_Field_1_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_79AA2B696DC59679_TypeDefinitionIndex)->GetStaticField(0xEC64);
	}
	static ::System::Single* StaticGet_Field_1_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_79AA2B696DC59679_TypeDefinitionIndex)->GetStaticField(0xEC68);
	}
	::UnityEngine::GameObject* Field_1_4; // 0x10
	::UnityEngine::Transform* Field_1_3; // 0x18
	::DG::Tweening::Tween* Field_1_13; // 0x20
	::UnityEngine::Transform* Field_1_5; // 0x28
	::DG::Tweening::Tween* Field_1_12; // 0x30
	::Class_1_E13183B148E560DC* Field_1_7; // 0x38
	::UnityEngine::SpriteRenderer* Field_1_6; // 0x40
	::System::Boolean Field_1_10; // 0x48
	::System::Boolean Field_1_11; // 0x49
	::System::Single Field_1_9; // 0x4C
	::System::Int32 Field_1_8; // 0x50

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_79AA2B696DC59679__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_79AA2B696DC59679__CCTOR_OFFSET))();
	}

	::System::Void Method_1_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79AA2B696DC59679_METHOD_1_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_1_9A4B8D8B70CE3845(::Class_1_0C791B68CB2A5BF5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0C791B68CB2A5BF5*))((::PBYTE)hIl2Cpp + CLASS_1_79AA2B696DC59679_METHOD_1_9A4B8D8B70CE3845_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BA114B592B3A582()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79AA2B696DC59679_METHOD_1_0BA114B592B3A582_OFFSET))(this);
	}

	::System::Void Method_1_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_79AA2B696DC59679_METHOD_1_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79AA2B696DC59679_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_A15BA9596DA44418(::MoleMole::TextureSheetData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetData*))((::PBYTE)hIl2Cpp + CLASS_1_79AA2B696DC59679_METHOD_1_A15BA9596DA44418_OFFSET))(this, a1);
	}
};
