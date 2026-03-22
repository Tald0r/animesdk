#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/NapLodController_NapLODLevel.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class ModelQualityProfileContext; }

#define MOLEMOLE_COMMANDLINEMODELQUALITY_METHOD_2_5CA9975A94142337_OFFSET UNITYSDK_OFFSET(0x6541040)
#define MOLEMOLE_COMMANDLINEMODELQUALITY_METHOD_2_DA6A28AF1A5D9016_OFFSET UNITYSDK_OFFSET(0x6541190)
#define MOLEMOLE_COMMANDLINEMODELQUALITY__CTOR_OFFSET UNITYSDK_OFFSET(0x6541150)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineModelQuality_TypeDefinitionIndex = 59354;

	class CommandLineModelQuality : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::ModelQualityProfileContext*, ::MoleMole::CommandLineModelQuality*>
	{
	public:
		::System::Nullable_1<::NapLodController_NapLODLevel> BodyModelLodLevel; // 0x18
		::System::Nullable_1<::NapLodController_NapLODLevel> FaceModelLodLevel; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEMODELQUALITY__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineModelQuality* Method_2_5CA9975A94142337(::MoleMole::ModelQualityProfileContext* a1)
		{
			return ((::MoleMole::CommandLineModelQuality*(*)(::PVOID, ::MoleMole::ModelQualityProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEMODELQUALITY_METHOD_2_5CA9975A94142337_OFFSET))(this, a1);
		}

		::MoleMole::ModelQualityProfileContext* Method_2_DA6A28AF1A5D9016(::MoleMole::ModelQualityProfileContext* a1)
		{
			return ((::MoleMole::ModelQualityProfileContext*(*)(::PVOID, ::MoleMole::ModelQualityProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEMODELQUALITY_METHOD_2_DA6A28AF1A5D9016_OFFSET))(this, a1);
		}
	};
}
