#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class RuntimeMaterialCompRecorderInfo; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_CLASS_1_55DB1D8C6AA0B65D_METHOD_1_D225A00F91FE70B1_OFFSET UNITYSDK_OFFSET(0x994BA20)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_CLASS_1_55DB1D8C6AA0B65D__CTOR_OFFSET UNITYSDK_OFFSET(0x994BA10)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialBehavior_Class_1_55DB1D8C6AA0B65D_TypeDefinitionIndex = 58356;

	class RuntimeMaterialBehavior_Class_1_55DB1D8C6AA0B65D : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_CLASS_1_55DB1D8C6AA0B65D__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_D225A00F91FE70B1(::MoleMole::Timeline::RuntimeMaterialCompRecorderInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::RuntimeMaterialCompRecorderInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_CLASS_1_55DB1D8C6AA0B65D_METHOD_1_D225A00F91FE70B1_OFFSET))(this, a1);
		}
	};
}
