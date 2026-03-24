#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5E8706F2657B8C55_Enum_3_DBF3ED09872304BF.h"
#include "unitysdk/MoleMole/Config/LevelShootGameConfig_WaveGroupStartCondition.h"
#include "unitysdk/System/Object.h"

class Class_1_F1F96FF70D60867B;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class LevelShootGameConfig_MonsterWaveGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5E8706F2657B8C55_METHOD_1_1713F44301AA802F_OFFSET UNITYSDK_OFFSET(0x7DE7120)
#define CLASS_1_5E8706F2657B8C55_METHOD_1_1973B42EB0A6D8FC_OFFSET UNITYSDK_OFFSET(0x7DE6D10)
#define CLASS_1_5E8706F2657B8C55_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x7DE6650)
#define CLASS_1_5E8706F2657B8C55_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x7DE7B80)
#define CLASS_1_5E8706F2657B8C55_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x7DE6C50)
#define CLASS_1_5E8706F2657B8C55_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x7DE6010)
#define CLASS_1_5E8706F2657B8C55_METHOD_1_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0x7DE4A30)
#define CLASS_1_5E8706F2657B8C55_METHOD_1_418131801836D354_OFFSET UNITYSDK_OFFSET(0x7DE66D0)
#define CLASS_1_5E8706F2657B8C55_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x7DE76F0)
#define CLASS_1_5E8706F2657B8C55_METHOD_1_5FD4F0CCAF05C452_OFFSET UNITYSDK_OFFSET(0x7DE6070)
#define CLASS_1_5E8706F2657B8C55_METHOD_1_85FCEBAEA8D66142_OFFSET UNITYSDK_OFFSET(0x7DE78E0)
#define CLASS_1_5E8706F2657B8C55_METHOD_1_93E6B8A6D29521ED_OFFSET UNITYSDK_OFFSET(0x7DE5B60)
#define CLASS_1_5E8706F2657B8C55_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x7DE6CB0)
#define CLASS_1_5E8706F2657B8C55_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x7DE7850)
#define CLASS_1_5E8706F2657B8C55_METHOD_1_A99623F4FC3B4773_OFFSET UNITYSDK_OFFSET(0x7DE5780)
#define CLASS_1_5E8706F2657B8C55_METHOD_1_AFB033A57D3340A9_OFFSET UNITYSDK_OFFSET(0x7DE6740)
#define CLASS_1_5E8706F2657B8C55_METHOD_1_C58427C5FCB57227_OFFSET UNITYSDK_OFFSET(0x7DE4E00)
#define CLASS_1_5E8706F2657B8C55_METHOD_1_EB7D2E1A5D72711D_OFFSET UNITYSDK_OFFSET(0x7DE4200)
#define CLASS_1_5E8706F2657B8C55__CTOR_OFFSET UNITYSDK_OFFSET(0x7DE4050)

inline static constexpr unsigned int Class_1_5E8706F2657B8C55_TypeDefinitionIndex = 51212;

class Class_1_5E8706F2657B8C55 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_19; // 0x0
	// static const ::System::String* Field_1_20; // 0x0
	::MoleMole::Config::LevelShootGameConfig_MonsterWaveGroup* Field_1_7; // 0x10
	::System::Collections::Generic::List_1<::Class_1_5E8706F2657B8C55*>* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F1F96FF70D60867B*>* Field_1_15; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_10; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_9; // 0x38
	::System::Single Field_1_14; // 0x40
	::MoleMole::Config::LevelShootGameConfig_WaveGroupStartCondition Field_1_6; // 0x44
	::Class_1_5E8706F2657B8C55_Enum_3_DBF3ED09872304BF Field_1_2; // 0x48
	::System::Boolean Field_1_12; // 0x4C
	::System::Boolean Field_1_16; // 0x4D
	::System::Boolean Field_1_13; // 0x4E
	::System::Boolean Field_1_18; // 0x4F
	::System::Single Field_1_5; // 0x50
	::System::Int32 Field_1_8; // 0x54
	::System::Single Field_1_1; // 0x58
	::System::Single Field_1_0; // 0x5C
	::System::Boolean Field_1_17; // 0x60
	::System::Boolean Field_1_11; // 0x61

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8706F2657B8C55__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EB7D2E1A5D72711D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5E8706F2657B8C55_METHOD_1_EB7D2E1A5D72711D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8706F2657B8C55_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_5FD4F0CCAF05C452()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8706F2657B8C55_METHOD_1_5FD4F0CCAF05C452_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5E8706F2657B8C55_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_418131801836D354(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5E8706F2657B8C55_METHOD_1_418131801836D354_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8706F2657B8C55_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8706F2657B8C55_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_1_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8706F2657B8C55_METHOD_1_3BCF0226A6CDC13B_OFFSET))(this);
	}

	::System::Void Method_1_1973B42EB0A6D8FC(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5E8706F2657B8C55_METHOD_1_1973B42EB0A6D8FC_OFFSET))(this, a1);
	}

	::System::Void Method_1_1713F44301AA802F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8706F2657B8C55_METHOD_1_1713F44301AA802F_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8706F2657B8C55_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_AFB033A57D3340A9(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5E8706F2657B8C55_METHOD_1_AFB033A57D3340A9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8706F2657B8C55_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_1_85FCEBAEA8D66142(::System::Int32 a1, ::MoleMole::Config::LevelShootGameConfig_WaveGroupStartCondition a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Config::LevelShootGameConfig_WaveGroupStartCondition))((::PBYTE)hIl2Cpp + CLASS_1_5E8706F2657B8C55_METHOD_1_85FCEBAEA8D66142_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_A99623F4FC3B4773()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8706F2657B8C55_METHOD_1_A99623F4FC3B4773_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5E8706F2657B8C55_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_93E6B8A6D29521ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8706F2657B8C55_METHOD_1_93E6B8A6D29521ED_OFFSET))(this);
	}

	::System::Void Method_1_C58427C5FCB57227(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5E8706F2657B8C55_METHOD_1_C58427C5FCB57227_OFFSET))(this, a1, a2);
	}
};
