#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ModelPartRoot; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MODELPARTROOT_CLASS_1_901CD2C08737046B_METHOD_1_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0xB5F4170)
#define MOLEMOLE_MODELPARTROOT_CLASS_1_901CD2C08737046B_METHOD_1_E4BDA120676AE806_OFFSET UNITYSDK_OFFSET(0xB5F3C10)
#define MOLEMOLE_MODELPARTROOT_CLASS_1_901CD2C08737046B__CTOR_OFFSET UNITYSDK_OFFSET(0xB5F3C00)

namespace MoleMole
{
	inline static constexpr unsigned int ModelPartRoot_Class_1_901CD2C08737046B_TypeDefinitionIndex = 79740;

	class ModelPartRoot_Class_1_901CD2C08737046B : public ::System::Object
	{
	public:
		::System::Action* Field_1_3; // 0x10
		::MoleMole::ModelPartRoot* Field_1_0; // 0x18
		::System::Boolean Field_1_2; // 0x20
		::System::Int32 Field_1_1; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_CLASS_1_901CD2C08737046B__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_E4BDA120676AE806(::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_CLASS_1_901CD2C08737046B_METHOD_1_E4BDA120676AE806_OFFSET))(this, a1);
		}

		::System::Void Method_1_B732DC7FA82BA621()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_CLASS_1_901CD2C08737046B_METHOD_1_B732DC7FA82BA621_OFFSET))(this);
		}
	};
}
