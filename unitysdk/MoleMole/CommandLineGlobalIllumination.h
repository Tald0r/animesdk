#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ENapGIQuality.h"

namespace MoleMole { class GlobalIlluminationProfileContext; }

#define MOLEMOLE_COMMANDLINEGLOBALILLUMINATION_METHOD_2_1B4C5B2FC2BD492F_OFFSET UNITYSDK_OFFSET(0x8492630)
#define MOLEMOLE_COMMANDLINEGLOBALILLUMINATION_METHOD_2_DA12240FA45843F4_OFFSET UNITYSDK_OFFSET(0x8492770)
#define MOLEMOLE_COMMANDLINEGLOBALILLUMINATION__CTOR_OFFSET UNITYSDK_OFFSET(0x8492730)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineGlobalIllumination_TypeDefinitionIndex = 61758;

	class CommandLineGlobalIllumination : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::GlobalIlluminationProfileContext*, ::MoleMole::CommandLineGlobalIllumination*>
	{
	public:
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::ENapGIQuality> GIQuality; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEGLOBALILLUMINATION__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineGlobalIllumination* Method_2_1B4C5B2FC2BD492F(::MoleMole::GlobalIlluminationProfileContext* a1)
		{
			return ((::MoleMole::CommandLineGlobalIllumination*(*)(::PVOID, ::MoleMole::GlobalIlluminationProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEGLOBALILLUMINATION_METHOD_2_1B4C5B2FC2BD492F_OFFSET))(this, a1);
		}

		::MoleMole::GlobalIlluminationProfileContext* Method_2_DA12240FA45843F4(::MoleMole::GlobalIlluminationProfileContext* a1)
		{
			return ((::MoleMole::GlobalIlluminationProfileContext*(*)(::PVOID, ::MoleMole::GlobalIlluminationProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEGLOBALILLUMINATION_METHOD_2_DA12240FA45843F4_OFFSET))(this, a1);
		}
	};
}
