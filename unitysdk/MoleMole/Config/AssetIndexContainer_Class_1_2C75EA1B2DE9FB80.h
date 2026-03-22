#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_CLASS_1_2C75EA1B2DE9FB80_METHOD_1_C958C75CB08323C3_OFFSET UNITYSDK_OFFSET(0x8042E40)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_CLASS_1_2C75EA1B2DE9FB80__CTOR_OFFSET UNITYSDK_OFFSET(0x8042E30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AssetIndexContainer_Class_1_2C75EA1B2DE9FB80_TypeDefinitionIndex = 40299;

	class AssetIndexContainer_Class_1_2C75EA1B2DE9FB80 : public ::System::Object
	{
	public:
		::System::Int32 Field_1_0; // 0x10
		::System::Int32 Field_1_4; // 0x14
		::System::Int32 Field_1_1; // 0x18
		::System::Int32 Field_1_3; // 0x1C
		::System::Int32 Field_1_5; // 0x20
		::System::Int32 Field_1_2; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_CLASS_1_2C75EA1B2DE9FB80__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_C958C75CB08323C3(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_CLASS_1_2C75EA1B2DE9FB80_METHOD_1_C958C75CB08323C3_OFFSET))(this, a1);
		}
	};
}
