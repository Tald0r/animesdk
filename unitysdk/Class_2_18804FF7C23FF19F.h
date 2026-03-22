#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsWorld.h"

class Class_1_5F817449EE3DD0C4;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_18804FF7C23FF19F_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0xD3DD500)
#define CLASS_2_18804FF7C23FF19F_METHOD_2_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0xD3DC830)
#define CLASS_2_18804FF7C23FF19F_METHOD_2_236EAF77DB84A69D_OFFSET UNITYSDK_OFFSET(0xD3DD6D0)
#define CLASS_2_18804FF7C23FF19F_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xD3DD6C0)
#define CLASS_2_18804FF7C23FF19F_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xD3DD440)
#define CLASS_2_18804FF7C23FF19F_METHOD_2_3A61293B53BED4CE_OFFSET UNITYSDK_OFFSET(0xD3DCDC0)
#define CLASS_2_18804FF7C23FF19F_METHOD_2_48F4094B62207807_1_OFFSET UNITYSDK_OFFSET(0xD3DD4F0)
#define CLASS_2_18804FF7C23FF19F_METHOD_2_48F4094B62207807_OFFSET UNITYSDK_OFFSET(0xD3DD4E0)
#define CLASS_2_18804FF7C23FF19F_METHOD_2_4CFA30FA85BD5218_OFFSET UNITYSDK_OFFSET(0xD3DC6C0)
#define CLASS_2_18804FF7C23FF19F_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xD3DD430)
#define CLASS_2_18804FF7C23FF19F_METHOD_2_637DBA7901C3991A_OFFSET UNITYSDK_OFFSET(0xD3DCEA0)
#define CLASS_2_18804FF7C23FF19F_METHOD_2_641B06838BDFB06A_1_OFFSET UNITYSDK_OFFSET(0xD3DD7D0)
#define CLASS_2_18804FF7C23FF19F_METHOD_2_641B06838BDFB06A_OFFSET UNITYSDK_OFFSET(0xD3DD580)
#define CLASS_2_18804FF7C23FF19F_METHOD_2_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0xD3DD090)
#define CLASS_2_18804FF7C23FF19F_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0xD3DD570)
#define CLASS_2_18804FF7C23FF19F_METHOD_2_90DDCCB37DB08B78_OFFSET UNITYSDK_OFFSET(0xD3DCC80)
#define CLASS_2_18804FF7C23FF19F_METHOD_2_BECE92CB50D33434_OFFSET UNITYSDK_OFFSET(0xD3DD590)
#define CLASS_2_18804FF7C23FF19F_METHOD_2_BF2548DE4E89A714_OFFSET UNITYSDK_OFFSET(0xD3DCD30)
#define CLASS_2_18804FF7C23FF19F_METHOD_2_E4938FDA3155D7AB_OFFSET UNITYSDK_OFFSET(0xD3DD7E0)
#define CLASS_2_18804FF7C23FF19F_METHOD_2_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0xD3DD540)
#define CLASS_2_18804FF7C23FF19F_METHOD_2_E7F1AECA7CFF8AAD_2_OFFSET UNITYSDK_OFFSET(0xD3DD6B0)
#define CLASS_2_18804FF7C23FF19F_METHOD_2_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0xD3DD510)
#define CLASS_2_18804FF7C23FF19F_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD3DC990)
#define CLASS_2_18804FF7C23FF19F__CTOR_OFFSET UNITYSDK_OFFSET(0xD3DC4F0)

inline static constexpr unsigned int Class_2_18804FF7C23FF19F_TypeDefinitionIndex = 44623;

class Class_2_18804FF7C23FF19F : public ::Nap::NapECS::EcsWorld
{
public:
	::System::Action_1<::System::Single>* Field_2_3; // 0x58
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_6; // 0x60
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_7; // 0x68
	::System::Action_1<::System::Single>* Field_2_2; // 0x70
	::MoleMole::HollowChessboard::HollowEntity* Field_2_5; // 0x78
	::Class_1_5F817449EE3DD0C4* Field_2_0; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowChessboard::HollowEntity*>* Field_2_4; // 0x88
	::System::Single Field_2_1; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4CFA30FA85BD5218(::Class_1_5F817449EE3DD0C4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F817449EE3DD0C4*))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_METHOD_2_4CFA30FA85BD5218_OFFSET))(this, a1);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_ONDESTROY_OFFSET))(this);
	}

	::System::Void Method_2_3A61293B53BED4CE(::System::Single a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_METHOD_2_3A61293B53BED4CE_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_48F4094B62207807(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_METHOD_2_48F4094B62207807_OFFSET))(this, a1);
	}

	::System::Void Method_2_48F4094B62207807_1(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_METHOD_2_48F4094B62207807_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_2_BF2548DE4E89A714(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_METHOD_2_BF2548DE4E89A714_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_METHOD_2_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_METHOD_2_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_5F817449EE3DD0C4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F817449EE3DD0C4*))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Action_1<::System::Single>* Method_2_641B06838BDFB06A()
	{
		return ((::System::Action_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_METHOD_2_641B06838BDFB06A_OFFSET))(this);
	}

	::System::Void Method_2_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_METHOD_2_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_METHOD_2_E7F1AECA7CFF8AAD_2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* Method_2_90DDCCB37DB08B78()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_METHOD_2_90DDCCB37DB08B78_OFFSET))(this);
	}

	::Class_1_5F817449EE3DD0C4* Method_2_24748FC20F375725()
	{
		return ((::Class_1_5F817449EE3DD0C4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_637DBA7901C3991A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_METHOD_2_637DBA7901C3991A_OFFSET))(this);
	}

	::System::Void Method_2_236EAF77DB84A69D(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_METHOD_2_236EAF77DB84A69D_OFFSET))(this, a1);
	}

	::System::Action_1<::System::Single>* Method_2_641B06838BDFB06A_1()
	{
		return ((::System::Action_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_METHOD_2_641B06838BDFB06A_1_OFFSET))(this);
	}

	::System::Void Method_2_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_METHOD_2_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Void Method_2_E4938FDA3155D7AB(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_METHOD_2_E4938FDA3155D7AB_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_2_BECE92CB50D33434(::System::UInt32 a1)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_18804FF7C23FF19F_METHOD_2_BECE92CB50D33434_OFFSET))(this, a1);
	}
};
