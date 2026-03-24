#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_DB663931210BBC27_14.h"
#include "unitysdk/MoleMole/Config/BuddyBehaviourType.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"

class Class_1_8289F2785D9AA990;
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_27B7CA8E521FEE12_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x84DD930)
#define CLASS_3_27B7CA8E521FEE12_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x84DE1B0)
#define CLASS_3_27B7CA8E521FEE12_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x84DDC00)
#define CLASS_3_27B7CA8E521FEE12_METHOD_3_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x84DDDB0)
#define CLASS_3_27B7CA8E521FEE12_METHOD_3_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x84DE0A0)
#define CLASS_3_27B7CA8E521FEE12_METHOD_3_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x84DDCA0)
#define CLASS_3_27B7CA8E521FEE12_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x84DD360)
#define CLASS_3_27B7CA8E521FEE12__CCTOR_OFFSET UNITYSDK_OFFSET(0x84DD990)
#define CLASS_3_27B7CA8E521FEE12__CTOR_OFFSET UNITYSDK_OFFSET(0x84DDA10)

inline static constexpr unsigned int Class_3_27B7CA8E521FEE12_TypeDefinitionIndex = 41292;

class Class_3_27B7CA8E521FEE12 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_27 = 0x86; // 0x0
	::System::Action_2<::Enum_3_DB663931210BBC27_14, ::MoleMole::Config::BuddyBehaviourType>* Field_3_4; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_20; // 0x50
	::System::Collections::Generic::Dictionary_2<::Enum_3_DB663931210BBC27_14, ::System::Collections::Generic::List_1<::MoleMole::Config::BuddyBehaviourType>*>* Field_3_3; // 0x58
	::Class_1_8289F2785D9AA990* Field_3_8; // 0x60
	::System::Collections::Generic::Dictionary_2<::Enum_3_DB663931210BBC27_14, ::System::Boolean>* Field_3_1; // 0x68
	::System::Collections::Generic::Dictionary_2<::Enum_3_DB663931210BBC27_14, ::System::Boolean>* Field_3_0; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_19; // 0x78
	::System::Collections::Generic::Dictionary_2<::Enum_3_DB663931210BBC27_14, ::MoleMole::Config::BuddyBehaviourType>* Field_3_2; // 0x80
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_3_5; // 0x88
	::System::Action_2<::Enum_3_DB663931210BBC27_14, ::System::Boolean>* Field_3_23; // 0x90
	::MoleMole::Config::ConfigPosRot* Field_3_22; // 0x98
	::MoleMole::Battle::AnimatorParamControl* Field_3_16; // 0xA0
	::MoleMole::Battle::AnimatorParamControl* Field_3_15; // 0xA8
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyTeamType, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Field_3_26; // 0xB0
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_3_25; // 0xB8
	::System::Int32 Field_3_17; // 0xC0
	::System::Int32 Field_3_18; // 0xC4
	::System::Boolean Field_3_13; // 0xC8
	::System::Boolean Field_3_10; // 0xC9
	::System::Boolean Field_3_11; // 0xCA
	::System::Boolean Field_3_21; // 0xCB
	::System::Single Field_3_12; // 0xCC
	::System::Boolean Field_3_24; // 0xD0
	::System::Boolean Field_3_9; // 0xD1
	::System::Boolean Field_3_6; // 0xD2
	::System::Boolean Field_3_7; // 0xD3
	::System::Single Field_3_14; // 0xD4

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_27B7CA8E521FEE12__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27B7CA8E521FEE12__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27B7CA8E521FEE12_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27B7CA8E521FEE12_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_27B7CA8E521FEE12* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_27B7CA8E521FEE12*(*)())((::PBYTE)hIl2Cpp + CLASS_3_27B7CA8E521FEE12_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Single Method_3_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27B7CA8E521FEE12_METHOD_3_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_3_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27B7CA8E521FEE12_METHOD_3_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27B7CA8E521FEE12_METHOD_3_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27B7CA8E521FEE12_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
