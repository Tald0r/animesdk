#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_264D3297E04A997C_Struct_2_3F27CF65D43CEA76.h"
#include "unitysdk/MoleMole/Config/BuddyOutlineCampType.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/System/Object.h"

class Class_3_36FD41B1D5D1EB46_1;
class Class_3_5609242270A80DFB;
class Class_3_F35B080B137ECC46;
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_1_264D3297E04A997C_METHOD_1_02FA5DD6DB6F352F_OFFSET UNITYSDK_OFFSET(0xBC4D5B0)
#define CLASS_1_264D3297E04A997C_METHOD_1_527132AD412E4A60_OFFSET UNITYSDK_OFFSET(0xBC4CFD0)
#define CLASS_1_264D3297E04A997C_METHOD_1_59749F4F70BB5099_OFFSET UNITYSDK_OFFSET(0xBC4C300)
#define CLASS_1_264D3297E04A997C_METHOD_1_C5143E9FC5CF7BCB_OFFSET UNITYSDK_OFFSET(0xBC4CB40)
#define CLASS_1_264D3297E04A997C_METHOD_1_C5E50B796ABD8775_OFFSET UNITYSDK_OFFSET(0xBC4DBA0)
#define CLASS_1_264D3297E04A997C_METHOD_1_D69B4B7E37808C06_OFFSET UNITYSDK_OFFSET(0xBC4CD00)
#define CLASS_1_264D3297E04A997C_METHOD_1_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0xBC4C570)

inline static constexpr unsigned int Class_1_264D3297E04A997C_TypeDefinitionIndex = 59753;

class Class_1_264D3297E04A997C : public ::System::Object
{
public:
	static ::MoleMole::Config::BuddyOutlineCampType Method_1_59749F4F70BB5099(::Class_1_264D3297E04A997C_Struct_2_3F27CF65D43CEA76& a1)
	{
		return ((::MoleMole::Config::BuddyOutlineCampType(*)(::Class_1_264D3297E04A997C_Struct_2_3F27CF65D43CEA76&))((::PBYTE)hIl2Cpp + CLASS_1_264D3297E04A997C_METHOD_1_59749F4F70BB5099_OFFSET))(a1);
	}

	static ::System::Void Method_1_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_264D3297E04A997C_METHOD_1_F4DD08A31BA3F883_OFFSET))();
	}

	static ::System::Void Method_1_C5143E9FC5CF7BCB(::Class_3_F35B080B137ECC46* a1)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_1_264D3297E04A997C_METHOD_1_C5143E9FC5CF7BCB_OFFSET))(a1);
	}

	static ::MoleMole::InLevelBuddyDataItem* Method_1_D69B4B7E37808C06(::MoleMole::Config::BuddyTeamType a1, ::Class_3_36FD41B1D5D1EB46_1* a2, ::Class_3_5609242270A80DFB* a3)
	{
		return ((::MoleMole::InLevelBuddyDataItem*(*)(::MoleMole::Config::BuddyTeamType, ::Class_3_36FD41B1D5D1EB46_1*, ::Class_3_5609242270A80DFB*))((::PBYTE)hIl2Cpp + CLASS_1_264D3297E04A997C_METHOD_1_D69B4B7E37808C06_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_527132AD412E4A60(::MoleMole::InLevelBuddyDataItem* a1, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::MoleMole::InLevelBuddyDataItem*, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_264D3297E04A997C_METHOD_1_527132AD412E4A60_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_02FA5DD6DB6F352F(::Class_3_F35B080B137ECC46* a1, ::MoleMole::Config::BuddyOutlineCampType a2)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::MoleMole::Config::BuddyOutlineCampType))((::PBYTE)hIl2Cpp + CLASS_1_264D3297E04A997C_METHOD_1_02FA5DD6DB6F352F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C5E50B796ABD8775(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::BuddyOutlineCampType a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::BuddyOutlineCampType))((::PBYTE)hIl2Cpp + CLASS_1_264D3297E04A997C_METHOD_1_C5E50B796ABD8775_OFFSET))(a1, a2);
	}
};
