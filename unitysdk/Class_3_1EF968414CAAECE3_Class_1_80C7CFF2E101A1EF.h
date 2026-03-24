#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_3_1EF968414CAAECE3_Class_1_3E05A2677F6F2423_8;
namespace MoleMole::Config { class ConfigDynamicAttachItem; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_1EF968414CAAECE3_CLASS_1_80C7CFF2E101A1EF_METHOD_1_E99C966CD7207CE4_OFFSET UNITYSDK_OFFSET(0x9225030)
#define CLASS_3_1EF968414CAAECE3_CLASS_1_80C7CFF2E101A1EF__CTOR_OFFSET UNITYSDK_OFFSET(0x9225020)

inline static constexpr unsigned int Class_3_1EF968414CAAECE3_Class_1_80C7CFF2E101A1EF_TypeDefinitionIndex = 61193;

class Class_3_1EF968414CAAECE3_Class_1_80C7CFF2E101A1EF : public ::System::Object
{
public:
	::Class_3_1EF968414CAAECE3_Class_1_3E05A2677F6F2423_8* Field_1_1; // 0x10
	::MoleMole::Config::ConfigDynamicAttachItem* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_CLASS_1_80C7CFF2E101A1EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E99C966CD7207CE4(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_1EF968414CAAECE3_CLASS_1_80C7CFF2E101A1EF_METHOD_1_E99C966CD7207CE4_OFFSET))(this, a1, a2);
	}
};
