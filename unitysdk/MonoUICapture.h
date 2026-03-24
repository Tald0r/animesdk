#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::UI { class RawImage; }

#define MONOUICAPTURE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xAA96FB0)
#define MONOUICAPTURE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAA96A00)
#define MONOUICAPTURE_ONUICAPTURE_OFFSET UNITYSDK_OFFSET(0xAA96A70)
#define MONOUICAPTURE_UICAPTUREFINISHED_OFFSET UNITYSDK_OFFSET(0xAA96CF0)
#define MONOUICAPTURE__CCTOR_OFFSET UNITYSDK_OFFSET(0xAA971E0)
#define MONOUICAPTURE__CTOR_OFFSET UNITYSDK_OFFSET(0xAA971B0)

inline static constexpr unsigned int MonoUICapture_TypeDefinitionIndex = 54279;

class MonoUICapture : public ::UnityEngine::MonoBehaviour
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_properties()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUICapture_TypeDefinitionIndex)->GetStaticField(0x2EB80);
	}
	static ::System::UInt32* StaticGet__UICaptureIndex()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoUICapture_TypeDefinitionIndex)->GetStaticField(0xA880);
	}
	::System::Int32 downSample; // 0x18
	::System::Single blurRadius; // 0x1C
	::UnityEngine::RenderTexture* rt; // 0x20
	::System::Int32 propertyID; // 0x28
	::UnityEngine::UI::RawImage* image; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUICAPTURE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOUICAPTURE__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUICAPTURE_ONENABLE_OFFSET))(this);
	}

	::System::Void OnUICapture()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUICAPTURE_ONUICAPTURE_OFFSET))(this);
	}

	::System::Void UICaptureFinished()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUICAPTURE_UICAPTUREFINISHED_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUICAPTURE_ONDISABLE_OFFSET))(this);
	}
};
