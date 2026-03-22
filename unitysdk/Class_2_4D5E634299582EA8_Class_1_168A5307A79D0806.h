#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4D5E634299582EA8_Enum_3_554CAED038424452.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_2_4D5E634299582EA8;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_2_4D5E634299582EA8_CLASS_1_168A5307A79D0806_METHOD_1_2CA7A456F23971D0_OFFSET UNITYSDK_OFFSET(0x674BA90)
#define CLASS_2_4D5E634299582EA8_CLASS_1_168A5307A79D0806_METHOD_1_4B4F27F8A1528C8D_OFFSET UNITYSDK_OFFSET(0x674BB80)
#define CLASS_2_4D5E634299582EA8_CLASS_1_168A5307A79D0806__CTOR_OFFSET UNITYSDK_OFFSET(0x674BA80)

inline static constexpr unsigned int Class_2_4D5E634299582EA8_Class_1_168A5307A79D0806_TypeDefinitionIndex = 71705;

class Class_2_4D5E634299582EA8_Class_1_168A5307A79D0806 : public ::System::Object
{
public:
	::System::Action_3<::Foundation::AssetPath, ::System::Int32, ::System::Int32>* Field_1_0; // 0x10
	::Class_2_4D5E634299582EA8* Field_1_4; // 0x18
	::System::UInt64 Field_1_1; // 0x20
	::Class_2_4D5E634299582EA8_Enum_3_554CAED038424452 Field_1_5; // 0x28
	::System::Int32 Field_1_2; // 0x2C
	::System::Int32 Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_168A5307A79D0806__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2CA7A456F23971D0(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_168A5307A79D0806_METHOD_1_2CA7A456F23971D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4B4F27F8A1528C8D(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_168A5307A79D0806_METHOD_1_4B4F27F8A1528C8D_OFFSET))(this, a1, a2);
	}
};
