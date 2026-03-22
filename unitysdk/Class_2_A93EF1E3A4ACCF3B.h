#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"
#include "unitysdk/Class_2_A93EF1E3A4ACCF3B_Enum_3_A24AD9071539656F.h"

class Class_2_14F10A7D5A4F2DD7;
class Class_3_B34AD6B8E241AE51;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_0_16E4307DCC419505_103;

#define CLASS_2_A93EF1E3A4ACCF3B_METHOD_2_865371237A616CED_OFFSET UNITYSDK_OFFSET(0x6AADEB0)
#define CLASS_2_A93EF1E3A4ACCF3B_METHOD_2_88374DBBCD1AF977_OFFSET UNITYSDK_OFFSET(0x6AAE400)
#define CLASS_2_A93EF1E3A4ACCF3B_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x6AADCF0)
#define CLASS_2_A93EF1E3A4ACCF3B__CTOR_OFFSET UNITYSDK_OFFSET(0x6AADDE0)

inline static constexpr unsigned int Class_2_A93EF1E3A4ACCF3B_TypeDefinitionIndex = 68078;

class Class_2_A93EF1E3A4ACCF3B : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC419505_103<::System::Int64>* Field_2_1; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_3; // 0x68
	::Class_0_16E4307DCC419505_103<::Class_2_14F10A7D5A4F2DD7*>* Field_2_4; // 0x70
	::Class_0_16E4307DCC419505_103<::System::UInt32>* Field_2_2; // 0x78
	::Class_0_16E4307DCC419505_103<::System::UInt32>* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A93EF1E3A4ACCF3B__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A93EF1E3A4ACCF3B_ONCREATEPROPERTY_OFFSET))(this);
	}

	::Class_2_A93EF1E3A4ACCF3B_Enum_3_A24AD9071539656F Method_2_865371237A616CED()
	{
		return ((::Class_2_A93EF1E3A4ACCF3B_Enum_3_A24AD9071539656F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A93EF1E3A4ACCF3B_METHOD_2_865371237A616CED_OFFSET))(this);
	}

	::System::Void Method_2_88374DBBCD1AF977(::Class_3_B34AD6B8E241AE51* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B34AD6B8E241AE51*))((::PBYTE)hIl2Cpp + CLASS_2_A93EF1E3A4ACCF3B_METHOD_2_88374DBBCD1AF977_OFFSET))(this, a1);
	}
};
