#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_8289F2785D9AA990;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E86D9308E1AD317D_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x771E150)
#define CLASS_3_E86D9308E1AD317D_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x771E510)
#define CLASS_3_E86D9308E1AD317D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x771E0E0)
#define CLASS_3_E86D9308E1AD317D_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x771E470)
#define CLASS_3_E86D9308E1AD317D_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x771DB00)
#define CLASS_3_E86D9308E1AD317D__CCTOR_OFFSET UNITYSDK_OFFSET(0x771E1B0)
#define CLASS_3_E86D9308E1AD317D__CTOR_OFFSET UNITYSDK_OFFSET(0x771E230)

inline static constexpr unsigned int Class_3_E86D9308E1AD317D_TypeDefinitionIndex = 60240;

class Class_3_E86D9308E1AD317D : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_47 = 0x3F; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_17; // 0x48
	::Class_1_8289F2785D9AA990* Field_3_33; // 0x50
	::MoleMole::EntityHandle Field_3_14; // 0x58
	::Class_1_8289F2785D9AA990* Field_3_23; // 0x68
	::Class_1_8289F2785D9AA990* Field_3_34; // 0x70
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MonsterStrengthType, ::System::Int32>* Field_3_15; // 0x78
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_3_16; // 0x80
	::Class_1_8289F2785D9AA990* Field_3_24; // 0x88
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_36; // 0x90
	::MoleMole::EntityHandle Field_3_30; // 0x98
	::System::Int32 Field_3_25; // 0xA8
	::System::Single Field_3_26; // 0xAC
	::System::Int32 Field_3_40; // 0xB0
	::System::Int32 Field_3_29; // 0xB4
	::System::Single Field_3_27; // 0xB8
	::System::Boolean Field_3_2; // 0xBC
	::System::Boolean Field_3_6; // 0xBD
	::System::Int32 Field_3_42; // 0xC0
	::System::Int32 Field_3_37; // 0xC4
	::System::Int32 Field_3_22; // 0xC8
	::System::Boolean Field_3_10; // 0xCC
	::System::Boolean Field_3_46; // 0xCD
	::System::Boolean Field_3_43; // 0xCE
	::System::Boolean Field_3_35; // 0xCF
	::System::Single Field_3_19; // 0xD0
	::System::Int32 Field_3_31; // 0xD4
	::MoleMole::Config::MonsterStrengthType Field_3_13; // 0xD8
	::System::Boolean Field_3_8; // 0xDC
	::System::Boolean Field_3_18; // 0xDD
	::System::Boolean Field_3_11; // 0xDE
	::System::Single Field_3_21; // 0xE0
	::System::Boolean Field_3_5; // 0xE4
	::System::Boolean Field_3_9; // 0xE5
	::System::Boolean Field_3_44; // 0xE6
	::System::Boolean Field_3_38; // 0xE7
	::System::Boolean Field_3_1; // 0xE8
	::System::Boolean Field_3_12; // 0xE9
	::System::Boolean Field_3_45; // 0xEA
	::System::Boolean Field_3_4; // 0xEB
	::System::Int32 Field_3_28; // 0xEC
	::System::Single Field_3_20; // 0xF0
	::System::Int32 Field_3_32; // 0xF4
	::System::Int32 Field_3_41; // 0xF8
	::System::Boolean Field_3_7; // 0xFC
	::System::Boolean Field_3_39; // 0xFD
	::System::Boolean Field_3_0; // 0xFE
	::System::Boolean Field_3_3; // 0xFF

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E86D9308E1AD317D__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E86D9308E1AD317D__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E86D9308E1AD317D_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E86D9308E1AD317D_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E86D9308E1AD317D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_3_E86D9308E1AD317D* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_E86D9308E1AD317D*(*)())((::PBYTE)hIl2Cpp + CLASS_3_E86D9308E1AD317D_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E86D9308E1AD317D_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
