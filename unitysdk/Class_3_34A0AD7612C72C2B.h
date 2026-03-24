#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Enum_3_7B713D4495649760.h"

class Class_3_4FC1446E6E8759F3;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_34A0AD7612C72C2B_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x6D89A80)
#define CLASS_3_34A0AD7612C72C2B_METHOD_3_06CC76A691DCA405_OFFSET UNITYSDK_OFFSET(0x6D8A070)
#define CLASS_3_34A0AD7612C72C2B_METHOD_3_2D0EF4C8B528FC1E_OFFSET UNITYSDK_OFFSET(0x6D89DE0)
#define CLASS_3_34A0AD7612C72C2B_METHOD_3_3F0D6A86FB6100C8_OFFSET UNITYSDK_OFFSET(0x6D8A120)
#define CLASS_3_34A0AD7612C72C2B_METHOD_3_51D874910D17BF7E_OFFSET UNITYSDK_OFFSET(0x6D8A220)
#define CLASS_3_34A0AD7612C72C2B_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x6D8A570)
#define CLASS_3_34A0AD7612C72C2B__CTOR_OFFSET UNITYSDK_OFFSET(0x6D89DC0)

inline static constexpr unsigned int Class_3_34A0AD7612C72C2B_TypeDefinitionIndex = 40355;

class Class_3_34A0AD7612C72C2B : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34A0AD7612C72C2B__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_34A0AD7612C72C2B_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_2D0EF4C8B528FC1E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_34A0AD7612C72C2B_METHOD_3_2D0EF4C8B528FC1E_OFFSET))(this, a1);
	}

	::System::Void Method_3_06CC76A691DCA405(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_34A0AD7612C72C2B_METHOD_3_06CC76A691DCA405_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_3F0D6A86FB6100C8(::Class_3_4FC1446E6E8759F3* a1)
	{
		return ((::System::Void(*)(::Class_3_4FC1446E6E8759F3*))((::PBYTE)hIl2Cpp + CLASS_3_34A0AD7612C72C2B_METHOD_3_3F0D6A86FB6100C8_OFFSET))(a1);
	}

	static ::System::Void Method_3_51D874910D17BF7E(::Class_3_4FC1446E6E8759F3* a1, ::Enum_3_7B713D4495649760 a2, ::Enum_3_7B713D4495649760 a3)
	{
		return ((::System::Void(*)(::Class_3_4FC1446E6E8759F3*, ::Enum_3_7B713D4495649760, ::Enum_3_7B713D4495649760))((::PBYTE)hIl2Cpp + CLASS_3_34A0AD7612C72C2B_METHOD_3_51D874910D17BF7E_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_34A0AD7612C72C2B_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
