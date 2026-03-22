#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_2_4D5E634299582EA8;
namespace UnityEngine { class GameObject; }

#define CLASS_2_4D5E634299582EA8_CLASS_1_460B495E4E8CDADF_METHOD_1_F5E815947BE31210_OFFSET UNITYSDK_OFFSET(0xBCB09F0)
#define CLASS_2_4D5E634299582EA8_CLASS_1_460B495E4E8CDADF__CTOR_OFFSET UNITYSDK_OFFSET(0xBCB09E0)

inline static constexpr unsigned int Class_2_4D5E634299582EA8_Class_1_460B495E4E8CDADF_TypeDefinitionIndex = 71702;

class Class_2_4D5E634299582EA8_Class_1_460B495E4E8CDADF : public ::System::Object
{
public:
	::Class_2_4D5E634299582EA8* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_460B495E4E8CDADF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F5E815947BE31210(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_460B495E4E8CDADF_METHOD_1_F5E815947BE31210_OFFSET))(this, a1, a2);
	}
};
