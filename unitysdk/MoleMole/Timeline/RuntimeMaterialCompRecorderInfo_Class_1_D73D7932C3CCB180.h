#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class RuntimeMaterialInfo; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_CLASS_1_D73D7932C3CCB180_METHOD_1_4770B1AF087E56D8_OFFSET UNITYSDK_OFFSET(0xC26DAB0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_CLASS_1_D73D7932C3CCB180__CTOR_OFFSET UNITYSDK_OFFSET(0xC26DAA0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialCompRecorderInfo_Class_1_D73D7932C3CCB180_TypeDefinitionIndex = 46457;

	class RuntimeMaterialCompRecorderInfo_Class_1_D73D7932C3CCB180 : public ::System::Object
	{
	public:
		::UnityEngine::Material* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_CLASS_1_D73D7932C3CCB180__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_4770B1AF087E56D8(::MoleMole::Timeline::RuntimeMaterialInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::RuntimeMaterialInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_CLASS_1_D73D7932C3CCB180_METHOD_1_4770B1AF087E56D8_OFFSET))(this, a1);
		}
	};
}
