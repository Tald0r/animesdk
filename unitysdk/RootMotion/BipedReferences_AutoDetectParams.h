#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define ROOTMOTION_BIPEDREFERENCES_AUTODETECTPARAMS_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1A989C40)
#define ROOTMOTION_BIPEDREFERENCES_AUTODETECTPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x398520)

namespace RootMotion
{
	inline static constexpr unsigned int BipedReferences_AutoDetectParams_TypeDefinitionIndex = 35984;

	struct alignas(1) BipedReferences_AutoDetectParams
	{
		::System::Boolean legsParentInSpine; // 0x10
		::System::Boolean includeEyes; // 0x11

		::System::Void _ctor(::System::Boolean legsParentInSpine, ::System::Boolean includeEyes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_AUTODETECTPARAMS__CTOR_OFFSET))(this, legsParentInSpine, includeEyes);
		}

		static ::RootMotion::BipedReferences_AutoDetectParams get_Default()
		{
			return ((::RootMotion::BipedReferences_AutoDetectParams(*)())((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_AUTODETECTPARAMS_GET_DEFAULT_OFFSET))();
		}
	};
}
