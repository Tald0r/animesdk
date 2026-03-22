#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5560EE9F1F33A604.h"
#include "unitysdk/Class_3_DD9DB54EC69C54DE_Struct_2_40C069200CA54E07.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_1_43BD383C98B4C0C5_20;
class Class_5_7DE03FFC38B69B91;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_3_DD9DB54EC69C54DE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x71198E0)
#define CLASS_3_DD9DB54EC69C54DE_METHOD_3_076AC0B891D64F28_OFFSET UNITYSDK_OFFSET(0x711A630)
#define CLASS_3_DD9DB54EC69C54DE_METHOD_3_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x711A080)
#define CLASS_3_DD9DB54EC69C54DE_METHOD_3_2685B6183E614529_2_OFFSET UNITYSDK_OFFSET(0x711ADD0)
#define CLASS_3_DD9DB54EC69C54DE_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x7119D60)
#define CLASS_3_DD9DB54EC69C54DE_METHOD_3_3A7CEC3F286901FB_OFFSET UNITYSDK_OFFSET(0x711A7E0)
#define CLASS_3_DD9DB54EC69C54DE_METHOD_3_4E0C7AEA141A5FA2_OFFSET UNITYSDK_OFFSET(0x711A570)
#define CLASS_3_DD9DB54EC69C54DE_METHOD_3_5C0F4CFE9C6CAB7B_OFFSET UNITYSDK_OFFSET(0x711A7D0)
#define CLASS_3_DD9DB54EC69C54DE_METHOD_3_81E0C8546AF74E53_OFFSET UNITYSDK_OFFSET(0x711AA80)
#define CLASS_3_DD9DB54EC69C54DE_METHOD_3_82AAA5460D1E2D18_OFFSET UNITYSDK_OFFSET(0x711A0F0)
#define CLASS_3_DD9DB54EC69C54DE_METHOD_3_ACB864CCDFA21385_OFFSET UNITYSDK_OFFSET(0x711A2E0)
#define CLASS_3_DD9DB54EC69C54DE_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x711AD60)
#define CLASS_3_DD9DB54EC69C54DE_METHOD_3_DC8BC0188E571FFD_OFFSET UNITYSDK_OFFSET(0x711A000)
#define CLASS_3_DD9DB54EC69C54DE_METHOD_3_E40D2059E39E2B6F_OFFSET UNITYSDK_OFFSET(0x711ABE0)
#define CLASS_3_DD9DB54EC69C54DE_METHOD_3_E4A90B19215209B1_OFFSET UNITYSDK_OFFSET(0x711A3E0)
#define CLASS_3_DD9DB54EC69C54DE_METHOD_3_E7194BD422AFF8DB_OFFSET UNITYSDK_OFFSET(0x7119F40)
#define CLASS_3_DD9DB54EC69C54DE_METHOD_3_E7558A1DFF7208C8_OFFSET UNITYSDK_OFFSET(0x711ABD0)
#define CLASS_3_DD9DB54EC69C54DE_METHOD_3_F2A1C4986462644D_OFFSET UNITYSDK_OFFSET(0x711AB40)
#define CLASS_3_DD9DB54EC69C54DE_METHOD_3_F7B575C3052FB3DA_OFFSET UNITYSDK_OFFSET(0x7119BC0)
#define CLASS_3_DD9DB54EC69C54DE_METHOD_3_FDAE79BEDEE7D159_1_OFFSET UNITYSDK_OFFSET(0x711A9C0)
#define CLASS_3_DD9DB54EC69C54DE_METHOD_3_FDAE79BEDEE7D159_OFFSET UNITYSDK_OFFSET(0x711A4B0)
#define CLASS_3_DD9DB54EC69C54DE__CTOR_OFFSET UNITYSDK_OFFSET(0x7119DD0)

inline static constexpr unsigned int Class_3_DD9DB54EC69C54DE_TypeDefinitionIndex = 51351;

class Class_3_DD9DB54EC69C54DE : public ::Class_2_5560EE9F1F33A604
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_DD9DB54EC69C54DE_Struct_2_40C069200CA54E07>* Field_3_1; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_DD9DB54EC69C54DE_Struct_2_40C069200CA54E07>* Field_3_2; // 0x48
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_F7B575C3052FB3DA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE_METHOD_3_F7B575C3052FB3DA_OFFSET))(this, a1);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_E7194BD422AFF8DB(::Class_5_7DE03FFC38B69B91* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_5_7DE03FFC38B69B91*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE_METHOD_3_E7194BD422AFF8DB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_DC8BC0188E571FFD(::Class_5_7DE03FFC38B69B91* a1)
	{
		return ((::System::Void(*)(::Class_5_7DE03FFC38B69B91*))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE_METHOD_3_DC8BC0188E571FFD_OFFSET))(a1);
	}

	::System::Void Method_3_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE_METHOD_3_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_82AAA5460D1E2D18(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE_METHOD_3_82AAA5460D1E2D18_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_E4A90B19215209B1(::Class_5_7DE03FFC38B69B91* a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_5_7DE03FFC38B69B91*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE_METHOD_3_E4A90B19215209B1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_FDAE79BEDEE7D159(::Class_5_7DE03FFC38B69B91* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_5_7DE03FFC38B69B91*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE_METHOD_3_FDAE79BEDEE7D159_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4E0C7AEA141A5FA2(::Class_5_7DE03FFC38B69B91* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_5_7DE03FFC38B69B91*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE_METHOD_3_4E0C7AEA141A5FA2_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_ACB864CCDFA21385(::Class_5_7DE03FFC38B69B91* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_7DE03FFC38B69B91*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE_METHOD_3_ACB864CCDFA21385_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5C0F4CFE9C6CAB7B(::Nap::NapECS::EcsFilter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE_METHOD_3_5C0F4CFE9C6CAB7B_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_3A7CEC3F286901FB(::Class_5_7DE03FFC38B69B91* a1)
	{
		return ((::System::Void(*)(::Class_5_7DE03FFC38B69B91*))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE_METHOD_3_3A7CEC3F286901FB_OFFSET))(a1);
	}

	static ::System::Void Method_3_FDAE79BEDEE7D159_1(::Class_5_7DE03FFC38B69B91* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_5_7DE03FFC38B69B91*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE_METHOD_3_FDAE79BEDEE7D159_1_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Method_3_81E0C8546AF74E53(::Class_5_7DE03FFC38B69B91* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::Class_5_7DE03FFC38B69B91*))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE_METHOD_3_81E0C8546AF74E53_OFFSET))(a1);
	}

	::System::Void Method_3_F2A1C4986462644D(::Class_5_7DE03FFC38B69B91* a1, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HollowChessboard::HollowCell>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_7DE03FFC38B69B91*, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE_METHOD_3_F2A1C4986462644D_OFFSET))(this, a1, a2);
	}

	::Nap::NapECS::EcsFilter* Method_3_E7558A1DFF7208C8()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE_METHOD_3_E7558A1DFF7208C8_OFFSET))(this);
	}

	static ::System::Void Method_3_076AC0B891D64F28(::Class_5_7DE03FFC38B69B91* a1, ::System::String* a2, ::Class_1_43BD383C98B4C0C5_20* a3)
	{
		return ((::System::Void(*)(::Class_5_7DE03FFC38B69B91*, ::System::String*, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE_METHOD_3_076AC0B891D64F28_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_E40D2059E39E2B6F(::Class_5_7DE03FFC38B69B91* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_5_7DE03FFC38B69B91*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE_METHOD_3_E40D2059E39E2B6F_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_2685B6183E614529_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE_METHOD_3_2685B6183E614529_2_OFFSET))(this, a1);
	}
};
