#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd::Animation { class NPCUnionAnimator_NpcTransformCache; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define CLASS_1_B8CAC2D0B001D4A8_METHOD_1_78DB76B0E64804D4_OFFSET UNITYSDK_OFFSET(0x15AB6300)
#define CLASS_1_B8CAC2D0B001D4A8_PROVIDECHARACTERRENDERINGTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x15AB59B0)
#define CLASS_1_B8CAC2D0B001D4A8_RELEASE_OFFSET UNITYSDK_OFFSET(0x15AB6090)
#define CLASS_1_B8CAC2D0B001D4A8__CCTOR_OFFSET UNITYSDK_OFFSET(0x15AB6160)
#define CLASS_1_B8CAC2D0B001D4A8__CTOR_OFFSET UNITYSDK_OFFSET(0x15AB6150)

inline static constexpr unsigned int Class_1_B8CAC2D0B001D4A8_TypeDefinitionIndex = 53728;

class Class_1_B8CAC2D0B001D4A8 : public ::System::Object
{
public:
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_Field_1_0()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8CAC2D0B001D4A8_TypeDefinitionIndex)->GetStaticField(0x3DEF0);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_Field_1_1()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8CAC2D0B001D4A8_TypeDefinitionIndex)->GetStaticField(0x3DEF8);
	}
	::NPCCrowd::Animation::NPCUnionAnimator_NpcTransformCache* Field_1_4; // 0x10
	::Class_3_F2DAD7F45F518868* Field_1_2; // 0x18
	::NPCCrowd::Animation::NPCUnionAnimator_NpcTransformCache* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CAC2D0B001D4A8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8CAC2D0B001D4A8__CCTOR_OFFSET))();
	}

	::System::Void ProvideCharacterRenderingTransforms(::UnityEngine::Vector3& a1, ::UnityEngine::Matrix4x4& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + CLASS_1_B8CAC2D0B001D4A8_PROVIDECHARACTERRENDERINGTRANSFORMS_OFFSET))(this, a1, a2);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CAC2D0B001D4A8_RELEASE_OFFSET))(this);
	}

	::System::Void Method_1_78DB76B0E64804D4(::Class_3_F2DAD7F45F518868* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + CLASS_1_B8CAC2D0B001D4A8_METHOD_1_78DB76B0E64804D4_OFFSET))(this, a1);
	}
};
