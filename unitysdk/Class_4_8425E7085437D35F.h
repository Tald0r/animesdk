#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9524C68D713A7E40.h"

class Class_3_F35B080B137ECC46;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_4_8425E7085437D35F_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x87ABB10)
#define CLASS_4_8425E7085437D35F_METHOD_4_2B8B70092FE5FFBC_OFFSET UNITYSDK_OFFSET(0x87AC070)
#define CLASS_4_8425E7085437D35F_METHOD_4_6950DFC9E62DCDC3_OFFSET UNITYSDK_OFFSET(0x87ABE20)
#define CLASS_4_8425E7085437D35F_METHOD_4_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x87AC420)
#define CLASS_4_8425E7085437D35F__CTOR_OFFSET UNITYSDK_OFFSET(0x87ABE00)

inline static constexpr unsigned int Class_4_8425E7085437D35F_TypeDefinitionIndex = 44363;

class Class_4_8425E7085437D35F : public ::Class_3_9524C68D713A7E40
{
public:
	::Nap::NapECS::EcsFilter* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8425E7085437D35F__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_4_8425E7085437D35F_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_4_6950DFC9E62DCDC3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_8425E7085437D35F_METHOD_4_6950DFC9E62DCDC3_OFFSET))(this, a1);
	}

	::System::Void Method_4_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_4_8425E7085437D35F_METHOD_4_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_4_2B8B70092FE5FFBC(::Class_3_F35B080B137ECC46* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_4_8425E7085437D35F_METHOD_4_2B8B70092FE5FFBC_OFFSET))(this, a1);
	}
};
