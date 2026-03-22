#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0F5195356F0210F0_1.h"
#include "unitysdk/Enum_3_957863D6ACD43A5B.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"

class Class_3_514273462AB8F0D3;
namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_514273462AB8F0D3_CLASS_2_126DD6F42733B971_METHOD_2_ABE8E8FE2397C282_1_OFFSET UNITYSDK_OFFSET(0x8134090)
#define CLASS_3_514273462AB8F0D3_CLASS_2_126DD6F42733B971_METHOD_2_ABE8E8FE2397C282_OFFSET UNITYSDK_OFFSET(0x8133F40)
#define CLASS_3_514273462AB8F0D3_CLASS_2_126DD6F42733B971_METHOD_2_BBEFBE8333A3FCA1_1_OFFSET UNITYSDK_OFFSET(0x8134120)
#define CLASS_3_514273462AB8F0D3_CLASS_2_126DD6F42733B971_METHOD_2_BBEFBE8333A3FCA1_OFFSET UNITYSDK_OFFSET(0x8133FD0)
#define CLASS_3_514273462AB8F0D3_CLASS_2_126DD6F42733B971__CTOR_OFFSET UNITYSDK_OFFSET(0x8133EA0)

inline static constexpr unsigned int Class_3_514273462AB8F0D3_Class_2_126DD6F42733B971_TypeDefinitionIndex = 65350;

class Class_3_514273462AB8F0D3_Class_2_126DD6F42733B971 : public ::Class_1_0F5195356F0210F0_1
{
public:
	::Struct_2_FA5F50563E60AFBA Field_2_2; // 0x18
	::MoleMole::EntityHandle Field_2_20; // 0x30
	::MoleMole::EntityHandle Field_2_21; // 0x40
	::Foundation::DoubleKeyDictionary_3<::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement, ::System::Tuple_2<::System::Single, ::System::Int32>*>* Field_2_9; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>* Field_2_18; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>* Field_2_17; // 0x60
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_2_14; // 0x68
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_2_16; // 0x70
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Int64>* Field_2_7; // 0x78
	::MoleMole::EntityHandle Field_2_19; // 0x80
	::System::Boolean Field_2_22; // 0x90
	::System::Boolean Field_2_15; // 0x91
	::System::Boolean Field_2_5; // 0x92
	::System::Boolean Field_2_13; // 0x93
	::System::UInt32 Field_2_1; // 0x94
	::System::Single Field_2_11; // 0x98
	::System::Single Field_2_6; // 0x9C
	::System::Int32 Field_2_3; // 0xA0
	::System::Single Field_2_4; // 0xA4
	::System::Single Field_2_8; // 0xA8
	::Enum_3_957863D6ACD43A5B Field_2_12; // 0xAC
	::System::UInt32 Field_2_10; // 0xB0
	::System::UInt32 Field_2_0; // 0xB4

	::System::Void _ctor(::Class_3_514273462AB8F0D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_514273462AB8F0D3*))((::PBYTE)hIl2Cpp + CLASS_3_514273462AB8F0D3_CLASS_2_126DD6F42733B971__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Method_2_ABE8E8FE2397C282()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_514273462AB8F0D3_CLASS_2_126DD6F42733B971_METHOD_2_ABE8E8FE2397C282_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>* Method_2_BBEFBE8333A3FCA1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_514273462AB8F0D3_CLASS_2_126DD6F42733B971_METHOD_2_BBEFBE8333A3FCA1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Method_2_ABE8E8FE2397C282_1()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_514273462AB8F0D3_CLASS_2_126DD6F42733B971_METHOD_2_ABE8E8FE2397C282_1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>* Method_2_BBEFBE8333A3FCA1_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_514273462AB8F0D3_CLASS_2_126DD6F42733B971_METHOD_2_BBEFBE8333A3FCA1_1_OFFSET))(this);
	}
};
