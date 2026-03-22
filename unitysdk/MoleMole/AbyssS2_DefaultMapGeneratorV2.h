#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AbyssS2_DefaultMapGenerator.h"
#include "unitysdk/MoleMole/AbyssS2_GenConfigMeta.h"

namespace MoleMole { class AbyssS2_GenRouteMapConfig; }

#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2_PROCESS_NORMALPARTFIXGEN_3_OFFSET UNITYSDK_OFFSET(0x96E3310)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2_PROCESS_NORMALPARTGEN_1_OFFSET UNITYSDK_OFFSET(0x96E0910)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2_PROCESS_NORMALPARTREDUCEGEN_2_OFFSET UNITYSDK_OFFSET(0x96E2840)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2_PROCESS_STARTPOINTS_0_OFFSET UNITYSDK_OFFSET(0x96E0880)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2__CTOR_OFFSET UNITYSDK_OFFSET(0x96E0870)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2___BASE_PROCESS_NORMALPARTFIXGEN_3_OFFSET UNITYSDK_OFFSET(0x96E33A0)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2___BASE_PROCESS_NORMALPARTGEN_1_OFFSET UNITYSDK_OFFSET(0x96E33D0)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2___BASE_PROCESS_NORMALPARTREDUCEGEN_2_OFFSET UNITYSDK_OFFSET(0x96E3400)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2___BASE_PROCESS_STARTPOINTS_0_OFFSET UNITYSDK_OFFSET(0x96E3430)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_DefaultMapGeneratorV2_TypeDefinitionIndex = 68780;

	class AbyssS2_DefaultMapGeneratorV2 : public ::MoleMole::AbyssS2_DefaultMapGenerator
	{
	public:
		::System::Void _ctor(::MoleMole::AbyssS2_GenRouteMapConfig* inConfig)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AbyssS2_GenRouteMapConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2__CTOR_OFFSET))(this, inConfig);
		}

		::System::Boolean Process_StartPoints_0(::MoleMole::AbyssS2_GenConfigMeta meta)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2_PROCESS_STARTPOINTS_0_OFFSET))(this, meta);
		}

		::System::Boolean Process_NormalPartGen_1(::MoleMole::AbyssS2_GenConfigMeta meta)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2_PROCESS_NORMALPARTGEN_1_OFFSET))(this, meta);
		}

		::System::Boolean Process_NormalPartReduceGen_2(::MoleMole::AbyssS2_GenConfigMeta meta)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2_PROCESS_NORMALPARTREDUCEGEN_2_OFFSET))(this, meta);
		}

		::System::Boolean Process_NormalPartFixGen_3(::MoleMole::AbyssS2_GenConfigMeta meta)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2_PROCESS_NORMALPARTFIXGEN_3_OFFSET))(this, meta);
		}

		::System::Boolean __base_Process_NormalPartFixGen_3(::MoleMole::AbyssS2_GenConfigMeta P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2___BASE_PROCESS_NORMALPARTFIXGEN_3_OFFSET))(this, P0);
		}

		::System::Boolean __base_Process_NormalPartGen_1(::MoleMole::AbyssS2_GenConfigMeta P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2___BASE_PROCESS_NORMALPARTGEN_1_OFFSET))(this, P0);
		}

		::System::Boolean __base_Process_NormalPartReduceGen_2(::MoleMole::AbyssS2_GenConfigMeta P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2___BASE_PROCESS_NORMALPARTREDUCEGEN_2_OFFSET))(this, P0);
		}

		::System::Boolean __base_Process_StartPoints_0(::MoleMole::AbyssS2_GenConfigMeta P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATORV2___BASE_PROCESS_STARTPOINTS_0_OFFSET))(this, P0);
		}
	};
}
