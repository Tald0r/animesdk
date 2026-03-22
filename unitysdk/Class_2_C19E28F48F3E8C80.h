#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

namespace MoleMole { class UserLocalDataItem; }
template <typename T> class Class_0_16E4307DCC419505_102;
template <typename T> class Class_0_16E4307DCC419505_103;
template <typename T> class Class_1_634159F7561ADAA0;

#define CLASS_2_C19E28F48F3E8C80_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x799EF40)
#define CLASS_2_C19E28F48F3E8C80_METHOD_2_E639AC66E23A9DAF_OFFSET UNITYSDK_OFFSET(0x799EDD0)
#define CLASS_2_C19E28F48F3E8C80_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x799EB80)
#define CLASS_2_C19E28F48F3E8C80__CTOR_OFFSET UNITYSDK_OFFSET(0x799ED50)

inline static constexpr unsigned int Class_2_C19E28F48F3E8C80_TypeDefinitionIndex = 46780;

class Class_2_C19E28F48F3E8C80 : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC419505_102<::System::Boolean>* Field_2_3; // 0x60
	::Class_0_16E4307DCC419505_103<::System::UInt32>* Field_2_2; // 0x68
	::MoleMole::UserLocalDataItem* Field_2_4; // 0x70
	::Class_0_16E4307DCC419505_103<::System::UInt32>* Field_2_1; // 0x78
	::Class_1_634159F7561ADAA0<::System::Int32>* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C19E28F48F3E8C80__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C19E28F48F3E8C80_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Boolean Method_2_E639AC66E23A9DAF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C19E28F48F3E8C80_METHOD_2_E639AC66E23A9DAF_OFFSET))(this);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C19E28F48F3E8C80_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}
};
