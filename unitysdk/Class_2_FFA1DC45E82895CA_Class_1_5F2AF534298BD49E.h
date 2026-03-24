#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define CLASS_2_FFA1DC45E82895CA_CLASS_1_5F2AF534298BD49E_METHOD_1_6D22CA609E35E6FB_OFFSET UNITYSDK_OFFSET(0xE29D190)
#define CLASS_2_FFA1DC45E82895CA_CLASS_1_5F2AF534298BD49E_METHOD_1_BA8DA10955CBCD4F_OFFSET UNITYSDK_OFFSET(0xE29D210)
#define CLASS_2_FFA1DC45E82895CA_CLASS_1_5F2AF534298BD49E__CTOR_OFFSET UNITYSDK_OFFSET(0xE29D180)

inline static constexpr unsigned int Class_2_FFA1DC45E82895CA_Class_1_5F2AF534298BD49E_TypeDefinitionIndex = 57757;

class Class_2_FFA1DC45E82895CA_Class_1_5F2AF534298BD49E : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_CLASS_1_5F2AF534298BD49E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6D22CA609E35E6FB(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_CLASS_1_5F2AF534298BD49E_METHOD_1_6D22CA609E35E6FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BA8DA10955CBCD4F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_CLASS_1_5F2AF534298BD49E_METHOD_1_BA8DA10955CBCD4F_OFFSET))(this);
	}
};
