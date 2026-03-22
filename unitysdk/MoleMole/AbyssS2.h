#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_ABYSSS2_GET_GUARANTEE_AREA_ID_OFFSET UNITYSDK_OFFSET(0x96E0600)
#define MOLEMOLE_ABYSSS2__CCTOR_OFFSET UNITYSDK_OFFSET(0x96E0860)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_TypeDefinitionIndex = 68779;

	class AbyssS2 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__int_GUARANTEE_AREA_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AbyssS2_TypeDefinitionIndex)->GetStaticField(0x9F00);
		}
		// static const ::System::Int32 S2_CONST_NORMAL_FROM_FLOOR = 0x1; // 0x0
		// static const ::System::Int32 S2_CONST_START_OR_AGENT_POINT_FROM_FLOOR = 0x0; // 0x0
		// static const ::System::Int32 S2_CONST_START_OR_AGENT_POINT_FROM_COL = 0x0; // 0x0
		// static const ::System::Int32 S2_CONST_FINALBOSS_AGENT_FROM_COL = 0x0; // 0x0
		// static const ::System::Int32 S2_CONST_FINALBOSS_FROM_COL = 0x0; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2__CCTOR_OFFSET))();
		}

		static ::System::Int32 get_GUARANTEE_AREA_ID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GET_GUARANTEE_AREA_ID_OFFSET))();
		}
	};
}
