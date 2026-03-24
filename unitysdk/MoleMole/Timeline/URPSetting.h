#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_TIMELINE_URPSETTING_METHOD_1_F53BAAE38A584428_1_OFFSET UNITYSDK_OFFSET(0xB711360)
#define MOLEMOLE_TIMELINE_URPSETTING_METHOD_1_F53BAAE38A584428_OFFSET UNITYSDK_OFFSET(0xB710F80)
#define MOLEMOLE_TIMELINE_URPSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0xB710F70)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int URPSetting_TypeDefinitionIndex = 37976;

	class URPSetting : public ::System::Object
	{
	public:
		::System::Boolean isContactShadowOn; // 0x10
		::System::Int32 resolution; // 0x14
		::System::Boolean characterUISelfShadow; // 0x18
		::System::Boolean perObjectShadowOnFace; // 0x19
		::System::Boolean fixCharDirLightNoIntensityBlendWeight; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPSETTING__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_F53BAAE38A584428()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPSETTING_METHOD_1_F53BAAE38A584428_OFFSET))(this);
		}

		::System::Void Method_1_F53BAAE38A584428_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPSETTING_METHOD_1_F53BAAE38A584428_1_OFFSET))(this);
		}
	};
}
