#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5B9C6A6280E9B7AE.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_81C524F06306C2FF_METHOD_3_432B5D7D455EDF65_OFFSET UNITYSDK_OFFSET(0x6D84D90)
#define CLASS_3_81C524F06306C2FF_METHOD_3_AE7ACA9431B8342C_OFFSET UNITYSDK_OFFSET(0x6D84F70)
#define CLASS_3_81C524F06306C2FF__CTOR_OFFSET UNITYSDK_OFFSET(0x6D84D00)

inline static constexpr unsigned int Class_3_81C524F06306C2FF_TypeDefinitionIndex = 46115;

class Class_3_81C524F06306C2FF : public ::Class_2_5B9C6A6280E9B7AE
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_81C524F06306C2FF__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_432B5D7D455EDF65(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_81C524F06306C2FF_METHOD_3_432B5D7D455EDF65_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AE7ACA9431B8342C(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_81C524F06306C2FF_METHOD_3_AE7ACA9431B8342C_OFFSET))(this, a1, a2);
	}
};
