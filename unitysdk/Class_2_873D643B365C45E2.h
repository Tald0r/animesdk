#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_73.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/Struct_2_50DBA35CF4D6E819.h"
#include "unitysdk/Struct_2_F213AC3D3FBF57B9_1.h"

class Class_3_1699D6295DC3F818_4;
class Class_3_8018CDF1371D00D2;
class Class_3_9F091E965E210217_26;
namespace MoleMole { class TurnBattleEntityUnit; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_2_873D643B365C45E2_NEWTURNBATTLEUNIT_OFFSET UNITYSDK_OFFSET(0x8D31760)
#define CLASS_2_873D643B365C45E2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8D30E80)
#define CLASS_2_873D643B365C45E2__CTOR_2_OFFSET UNITYSDK_OFFSET(0x8D31340)
#define CLASS_2_873D643B365C45E2__CTOR_OFFSET UNITYSDK_OFFSET(0x8D30890)

inline static constexpr unsigned int Class_2_873D643B365C45E2_TypeDefinitionIndex = 80242;

class Class_2_873D643B365C45E2 : public ::Class_1_43BD383C98B4C0C5_73
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_1699D6295DC3F818_4*>* Field_2_5; // 0x10
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::Struct_2_F213AC3D3FBF57B9_1>* Field_2_4; // 0x18
	::Class_3_8018CDF1371D00D2* Field_2_6; // 0x20
	::Il2CppArray<::Struct_2_50DBA35CF4D6E819>* Field_2_2; // 0x28
	::System::Int32 Field_2_0; // 0x30
	::System::UInt32 Field_2_3; // 0x34
	::System::Single Field_2_1; // 0x38

	::System::Void _ctor(::System::Int32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_3_9F091E965E210217_26*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::Class_3_9F091E965E210217_26*>*))((::PBYTE)hIl2Cpp + CLASS_2_873D643B365C45E2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_873D643B365C45E2__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_2(::MoleMole::TurnBattleEntityUnit* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + CLASS_2_873D643B365C45E2__CTOR_2_OFFSET))(this, a1);
	}

	::MoleMole::TurnBattleEntityUnit* NewTurnBattleUnit()
	{
		return ((::MoleMole::TurnBattleEntityUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_873D643B365C45E2_NEWTURNBATTLEUNIT_OFFSET))(this);
	}
};
