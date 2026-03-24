#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_2_C219469667DBAA6A;
namespace UnityEngine { class GameObject; }

#define CLASS_2_C219469667DBAA6A_CLASS_1_460B495E4E8CDADF_METHOD_1_F5E815947BE31210_OFFSET UNITYSDK_OFFSET(0x82C7740)
#define CLASS_2_C219469667DBAA6A_CLASS_1_460B495E4E8CDADF__CTOR_OFFSET UNITYSDK_OFFSET(0x82C7730)

inline static constexpr unsigned int Class_2_C219469667DBAA6A_Class_1_460B495E4E8CDADF_TypeDefinitionIndex = 39304;

class Class_2_C219469667DBAA6A_Class_1_460B495E4E8CDADF : public ::System::Object
{
public:
	::Class_2_C219469667DBAA6A* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_460B495E4E8CDADF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F5E815947BE31210(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_460B495E4E8CDADF_METHOD_1_F5E815947BE31210_OFFSET))(this, a1, a2);
	}
};
