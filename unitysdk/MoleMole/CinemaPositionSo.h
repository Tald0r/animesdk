#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CinemaNpcOffsetSo.h"

namespace System { class String; }

#define MOLEMOLE_CINEMAPOSITIONSO_METHOD_4_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x96F3860)
#define MOLEMOLE_CINEMAPOSITIONSO_METHOD_4_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x96F37C0)
#define MOLEMOLE_CINEMAPOSITIONSO__CTOR_OFFSET UNITYSDK_OFFSET(0x96F3850)

namespace MoleMole
{
	inline static constexpr unsigned int CinemaPositionSo_TypeDefinitionIndex = 37855;

	class CinemaPositionSo : public ::MoleMole::CinemaNpcOffsetSo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMAPOSITIONSO__CTOR_OFFSET))(this);
		}

		::System::String* Method_4_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMAPOSITIONSO_METHOD_4_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::String* Method_4_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMAPOSITIONSO_METHOD_4_88B60F3B95FAA4F1_1_OFFSET))(this);
		}
	};
}
