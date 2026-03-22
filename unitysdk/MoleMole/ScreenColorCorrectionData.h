#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_269;
class Class_1_5A6771CD0CA2718D;

#define MOLEMOLE_SCREENCOLORCORRECTIONDATA_CREATEPLAYER_OFFSET UNITYSDK_OFFSET(0xA49D190)
#define MOLEMOLE_SCREENCOLORCORRECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA49D200)

namespace MoleMole
{
	inline static constexpr unsigned int ScreenColorCorrectionData_TypeDefinitionIndex = 44357;

	class ScreenColorCorrectionData : public ::System::Object
	{
	public:
		::System::Single Saturation; // 0x10
		::System::Single ContrastMidPoint; // 0x14
		::System::Single Hue; // 0x18
		::System::Single Value; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENCOLORCORRECTIONDATA__CTOR_OFFSET))(this);
		}

		::Class_1_5A6771CD0CA2718D* CreatePlayer(::Class_0_16E4307DCC419505_269* textureSheetImpl)
		{
			return ((::Class_1_5A6771CD0CA2718D*(*)(::PVOID, ::Class_0_16E4307DCC419505_269*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENCOLORCORRECTIONDATA_CREATEPLAYER_OFFSET))(this, textureSheetImpl);
		}
	};
}
