#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0F5195356F0210F0.h"
#include "unitysdk/Enum_3_957863D6ACD43A5B.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"

class Class_3_DB267E245CF41057;
namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DB267E245CF41057_CLASS_2_2AAFB668D46DED17_METHOD_2_ABE8E8FE2397C282_1_OFFSET UNITYSDK_OFFSET(0xD82E5E0)
#define CLASS_3_DB267E245CF41057_CLASS_2_2AAFB668D46DED17_METHOD_2_ABE8E8FE2397C282_OFFSET UNITYSDK_OFFSET(0xD82E490)
#define CLASS_3_DB267E245CF41057_CLASS_2_2AAFB668D46DED17_METHOD_2_BBEFBE8333A3FCA1_1_OFFSET UNITYSDK_OFFSET(0xD82E680)
#define CLASS_3_DB267E245CF41057_CLASS_2_2AAFB668D46DED17_METHOD_2_BBEFBE8333A3FCA1_OFFSET UNITYSDK_OFFSET(0xD82E520)
#define CLASS_3_DB267E245CF41057_CLASS_2_2AAFB668D46DED17__CTOR_OFFSET UNITYSDK_OFFSET(0xD82E370)

inline static constexpr unsigned int Class_3_DB267E245CF41057_Class_2_2AAFB668D46DED17_TypeDefinitionIndex = 68554;

class Class_3_DB267E245CF41057_Class_2_2AAFB668D46DED17 : public ::Class_1_0F5195356F0210F0
{
public:
	::MoleMole::EntityHandle Field_2_20; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>* Field_2_19; // 0x28
	::Struct_2_FA5F50563E60AFBA Field_2_2; // 0x30
	::Foundation::DoubleKeyDictionary_3<::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement, ::System::Tuple_2<::System::Single, ::System::Int32>*>* Field_2_10; // 0x48
	::MoleMole::EntityHandle Field_2_22; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_2_15; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>* Field_2_18; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* Field_2_8; // 0x70
	::MoleMole::EntityHandle Field_2_21; // 0x78
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_2_17; // 0x88
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Int64>* Field_2_7; // 0x90
	::System::UInt32 Field_2_0; // 0x98
	::System::Single Field_2_6; // 0x9C
	::System::UInt32 Field_2_1; // 0xA0
	::System::UInt32 Field_2_11; // 0xA4
	::System::Single Field_2_4; // 0xA8
	::Enum_3_957863D6ACD43A5B Field_2_13; // 0xAC
	::System::Boolean Field_2_16; // 0xB0
	::System::Boolean Field_2_14; // 0xB1
	::System::Boolean Field_2_23; // 0xB2
	::System::Boolean Field_2_5; // 0xB3
	::System::Single Field_2_9; // 0xB4
	::System::Single Field_2_12; // 0xB8
	::System::Int32 Field_2_3; // 0xBC

	::System::Void _ctor(::Class_3_DB267E245CF41057* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DB267E245CF41057*))((::PBYTE)hIl2Cpp + CLASS_3_DB267E245CF41057_CLASS_2_2AAFB668D46DED17__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Method_2_ABE8E8FE2397C282()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB267E245CF41057_CLASS_2_2AAFB668D46DED17_METHOD_2_ABE8E8FE2397C282_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>* Method_2_BBEFBE8333A3FCA1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB267E245CF41057_CLASS_2_2AAFB668D46DED17_METHOD_2_BBEFBE8333A3FCA1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Method_2_ABE8E8FE2397C282_1()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB267E245CF41057_CLASS_2_2AAFB668D46DED17_METHOD_2_ABE8E8FE2397C282_1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>* Method_2_BBEFBE8333A3FCA1_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB267E245CF41057_CLASS_2_2AAFB668D46DED17_METHOD_2_BBEFBE8333A3FCA1_1_OFFSET))(this);
	}
};
