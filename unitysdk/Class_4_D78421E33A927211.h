#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Enum_3_86F978FA535DE21D.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_CF43FA1E89397A1C;
class Class_4_5B5E82918BC44D6E;
namespace MoleMole::Utils { class INapCameraSequenceDataTableEntry; }
namespace MoleMole::Utils { class NapCameraSequence; }
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_D78421E33A927211_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x16EA9170)
#define CLASS_4_D78421E33A927211_METHOD_4_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x16EA81B0)
#define CLASS_4_D78421E33A927211_METHOD_4_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x16EA8630)
#define CLASS_4_D78421E33A927211_METHOD_4_40A13CA58121770B_OFFSET UNITYSDK_OFFSET(0x16EA9330)
#define CLASS_4_D78421E33A927211_METHOD_4_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x16EA86C0)
#define CLASS_4_D78421E33A927211_METHOD_4_DF73B087B66B4C8E_OFFSET UNITYSDK_OFFSET(0x16EA9180)
#define CLASS_4_D78421E33A927211__CTOR_OFFSET UNITYSDK_OFFSET(0x16EA8F00)

inline static constexpr unsigned int Class_4_D78421E33A927211_TypeDefinitionIndex = 52640;

class Class_4_D78421E33A927211 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_4_4; // 0x28
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_0; // 0x30
	::Class_4_179456445C225AB4<::System::String*>* Field_4_1; // 0x38
	::Class_4_5B5E82918BC44D6E* Field_4_6; // 0x40
	::Class_4_179456445C225AB4<::System::Single>* Field_4_5; // 0x48
	::Class_4_179456445C225AB4<::System::Single>* Field_4_3; // 0x50
	::Class_3_CF43FA1E89397A1C* Field_4_7; // 0x58
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_4_2; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D78421E33A927211__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D78421E33A927211_METHOD_4_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_4_3F0F9592A0E917D4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_D78421E33A927211_METHOD_4_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D78421E33A927211_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	static ::MoleMole::Utils::INapCameraSequenceDataTableEntry* Method_4_DF73B087B66B4C8E(::System::String* a1, ::MoleMole::Utils::NapCameraSequence* a2)
	{
		return ((::MoleMole::Utils::INapCameraSequenceDataTableEntry*(*)(::System::String*, ::MoleMole::Utils::NapCameraSequence*))((::PBYTE)hIl2Cpp + CLASS_4_D78421E33A927211_METHOD_4_DF73B087B66B4C8E_OFFSET))(a1, a2);
	}

	::System::Void Method_4_C43DD7AFEEA2B827(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_D78421E33A927211_METHOD_4_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	static ::MoleMole::Utils::NapCameraSequence* Method_4_40A13CA58121770B(::Enum_3_86F978FA535DE21D a1)
	{
		return ((::MoleMole::Utils::NapCameraSequence*(*)(::Enum_3_86F978FA535DE21D))((::PBYTE)hIl2Cpp + CLASS_4_D78421E33A927211_METHOD_4_40A13CA58121770B_OFFSET))(a1);
	}
};
